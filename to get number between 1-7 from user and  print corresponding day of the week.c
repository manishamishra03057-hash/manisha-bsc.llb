#include <stdio.h>
 void main()
 {
     int choice;
     printf("enter a number between 1 to 7 \n");
     scanf("%d, &choice");

     switch (choice)
     {
         case1:printf("monday");
         break;
         case2:printf("tuesday");
         break;
         case3:printf("wednesday");
         break;
         case4:printf ("thursday");
         break;
         case5:printf("friday");
         break;
         case6:printf("saturday");
         break;
         case7:printf("sunday");
         break;
         default: printf ("wrong choice");
     }
 }
