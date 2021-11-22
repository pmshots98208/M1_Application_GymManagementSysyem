#include <stdio.h>

void main()

{    

       float num; 

       clrscr();

       do

        {

                 printf(“Enter a non-negative number: “);

                 scanf (“%f”, &num);

                 if (num < 0)

                    printf(“Error: Invalid data.\n”);

        }        while (num < 0);

                  printf(“Number: %f Square root: %f \n”, num, sqrt(num));

                        getch();

}
