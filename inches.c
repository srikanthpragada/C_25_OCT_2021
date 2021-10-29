 // program to convert inch to centimeter and millimeter

 #include <stdio.h>

 void main()
 {
   float inches, cm, mm;

     printf("Enter number of inches :");
     scanf("%f", &inches);

     cm = inches * 2.54;
     mm = cm * 10;

     printf("CM = %.2f, MM = %.2f", cm,mm);
 }
