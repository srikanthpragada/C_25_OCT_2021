// Display names from names.txt in reverse order - last name first

#include <stdio.h>

struct node
{
  // address of prev node
  struct node * previous;
  // data
  char name[30];
};

void main()
{
   FILE * fp;
   char name[20], *p;
   struct node * current, * previous = NULL;


      fp = fopen("names.txt","rt");
      if(fp == NULL)
      {
        printf("File cannot be opened. Quitting ...");
        exit(1); // Terminate program with exit code 1
      }

      while(1)
      {
          p = fgets(name,20,fp);  // returns NULL on EOF
          if (p == NULL)
              break;

          // create a node to store name
          current = (struct node *) malloc(sizeof(struct node));
          current->previous = previous;
          strcpy(current->name, name);
          previous = current;
      }

      fclose(fp);

      while(current != NULL)
      {
          printf("%s",current->name);
          current = current -> previous;
      }
}
