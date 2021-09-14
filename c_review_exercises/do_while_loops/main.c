#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num = 0;

    do {
        if ((num != 40)) {
            printf ("%d, ", num);
        }
            else if ((num == 40)) {
                printf ("%d", num);
            }
        num = num + 10;
    } while (num <= 40);

    return 0;
}
