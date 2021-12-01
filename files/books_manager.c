//  Books Manager Ver. 1.0

#include <stdio.h>
#define  FILENAME "books.dat"
#define  TEMPFILENAME "tempfile.dat"

struct book
{
    char title[50];
    char author[50];
    int nopages;
};

typedef struct book BOOK;

FILE * openfile(char * mode)
{
 FILE * fp;

      fp = fopen(FILENAME,mode);
      if(fp == NULL)
      {
          printf("Sorry! Could not open file [%s] in mode [%s]. Quitting.", FILENAME, mode);
          exit(1);
      }
      return fp;
}

FILE * opentempfile(char * mode)
{
 FILE * fp;

      fp = fopen(TEMPFILENAME,mode);
      if(fp == NULL)
      {
          printf("Sorry! Could not open file [%s] in mode [%s]. Quitting.", FILENAME, mode);
          exit(1);
      }
      return fp;
}


void add_book()
{
   FILE * fp;
   BOOK book;

       fp = openfile("ab");  // Append Binary

       fflush(stdin); // clear keyboard buffer

       printf("\nEnter Title     :");
       gets(book.title);

       printf("Enter Author    :");
       gets(book.author);

       printf("Enter No. Pages :");
       scanf("%d",&book.nopages);

       fwrite(&book,sizeof(BOOK),1,fp);  // Write to file
       fclose(fp);

       printf("\nSuccessfully added book!. Press any key to continue...");
       getch();  // wait for key
}

void list_books()
{
  FILE * fp;
  int count;
  BOOK book;

      fp = openfile("rb");  // Read Binary

      printf("\nList of Books\n");
      printf("%-30s %-30s No.Pages\n", "Title", "Author");
      while(1)
      {
          count = fread(&book,sizeof(BOOK),1,fp); // read one book
          if (count == 0)  // EOF
               break;
          printf("%-30s %-30s %4d\n",book.title,book.author, book.nopages);
      }
      fclose(fp);

      printf("\nPress any key to continue...");
      getch();  // wait for key

}

// get book by its position in the file
void get_book()
{
  FILE * fp;
  int count, pos;
  BOOK book;

      fp = openfile("rb");  // Read Binary
      printf("\nEnter position :");
      scanf("%d",&pos);

      fseek(fp, (pos - 1) * sizeof(BOOK), SEEK_SET);  // Random Access
      count = fread(&book,sizeof(BOOK),1,fp);         // read one book
      if (count == 0)  // EOF
           printf("\nSorry! Book not found!\n");
      else
      {
          printf("\nBook Details");
          printf("\n------------\n");
          printf("Title     : %s\n",book.title);
          printf("Author    : %s\n",book.author);
          printf("No. Pages : %d\n",book.nopages);
      }

      fclose(fp);

      printf("\nPress any key to continue...");
      getch();  // wait for key

}

void modify_book()
{
  FILE * fp;
  int count, pos;
  char title[50], author[50], nopages[5];
  BOOK book;

      fp = openfile("r+b");  // Read/Write Binary
      printf("\nEnter position :");
      scanf("%d",&pos);

      fseek(fp, (pos - 1) * sizeof(BOOK), SEEK_SET);  // Move to required position
      count = fread(&book,sizeof(BOOK),1,fp); // read one book
      if (count == 0)  // EOF
           printf("\nSorry! Book not found!\n");
      else
      {
          fflush(stdin);
          printf("\nEnter new details. Enter to accept existing details.\n");
          printf("Title   [%s] :",book.title);
          gets(title);
          if (strlen(title) > 0)
            strcpy(book.title,title);

          printf("Author   [%s] :",book.author);
          gets(author);
          if (strlen(author) > 0)
            strcpy(book.author,author);

          printf("No.Pages [%d] :",book.nopages);
          gets(nopages);
          if (strlen(nopages) > 0)
          {
             book.nopages = atoi(nopages); // Convert string to int
          }

          // update file
          fseek(fp, (pos - 1) * sizeof(BOOK), SEEK_SET);  // Move back to required position
          fwrite(&book,sizeof(BOOK),1,fp); // write one book
      }

      fclose(fp);

      printf("\nPress any key to continue...");
      getch();  // wait for key

}

void delete_book()
{
  FILE * fp, * tfp;
  int count, pos, curpos;
  BOOK book;

      fp = openfile("rb");  // Read Binary
      tfp = opentempfile("wb");  // write Binary

      printf("\nEnter position :");
      scanf("%d",&pos);

      curpos = 1;
      while(1)
      {
          count = fread(&book,sizeof(BOOK),1,fp); // read one book
          if (count == 0)  // EOF
               break;

          if(pos != curpos)
          {
             // write to temp file
             fwrite(&book,sizeof(BOOK),1,tfp);
          }
          curpos ++;
      }
      fclose(fp);
      fclose(tfp);

      // remove file and rename tempfile as file
      remove(FILENAME);
      rename(TEMPFILENAME, FILENAME);

      printf("\nPress any key to continue...");
      getch();  // wait for key

}

void main()
{
 int choice;

    while(1)
    {
        printf("\nBooks Manager");
        printf("\n=============\n");

        printf("1. Add Book\n");
        printf("2. List Books\n");
        printf("3. Get Book\n");
        printf("4. Modify Book\n");
        printf("5. Delete Books\n");
        printf("6. Exit\n");

        printf("Enter choice [1-6] :");
        scanf("%d",&choice);

        switch(choice)
        {
           case 1: add_book();
                   break;
           case 2: list_books();
                   break;
           case 3: get_book();
                   break;
           case 4: modify_book();
                   break;
           case 5: delete_book();
                   break;
           case 6: printf("\nThank You. See you again!\n");
                    exit(0);
        }
    }
}
