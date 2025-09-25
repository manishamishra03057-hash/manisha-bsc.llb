#include <stdio.h>

  int main{}

      printf("enter month number (1-12):");
      scanf("%d", &month);

       switch (month);
       {
           case1:case3: case5: case7: case8: case10: case12:
                       printf("31 days\n");
               break;

                case4: case6: case9: case11:
                       printf(" 30 days \n");
                    break;
                    case2:
                       printf("28 or 29 days ( february)\n");
                    break;
                default:
                      printf("invalid month number ! please enter between 1-12.\n")
       }
       return0;

       }
