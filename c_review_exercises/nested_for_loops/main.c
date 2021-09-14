#include <stdio.h>
#include <stdlib.h>

int min3(int num1, int num2, int num3);

    int main()
    {

       int num1;
       int num2;
       int num3;

          printf ("Type 3 integer values to view the lowest value:\nInteger 1: ");
            scanf ("%d", &num1);
          printf ("\nInteger 2: ");
            scanf ("%d", &num2);
          printf ("\nInteger 3: ");
            scanf ("%d", &num3);

        min3(num1, num2, num3);


        return 0;
    }

int min3(int num1, int num2, int num3) {
    int result = num1;

        if ((result > num2)){
            result = num2;
        }
        if ((result > num3)){
            result = num3;
        }


        printf ("\nThe Result is: %d\n", result);

    return 0;
}


