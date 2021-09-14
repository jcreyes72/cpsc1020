#include <stdlib.h>
#include <stdio.h>

void sizeOfName(char** name);
void printSizeOfName(int *first, int *last, char** name);
void reverseString(int *first, int *last, char** name);

int main(){

    char** name;

        name = malloc(sizeof(char*)*2);
        name[1] = malloc (sizeof(char*)*100);
        name[2] = malloc (sizeof(char*)*100);

        printf ("What is your first name? ");
            scanf ("%s", name[1]);

        printf ("\nWhat is your last name? ");
            scanf ("%s", name[2]);

        sizeOfName(name);


return 0;
}



void sizeOfName(char** name) {

    int i;
    int first = 0;
    int last = 0;

        for (i = 0; name[1][i] != '\0'; i++){
            first = first + 1;
        }
        for (i = 0; name[2][i] != '\0'; i++){
            last = last + 1;
        }

    printSizeOfName(&first, &last, name);

}

void printSizeOfName(int *first, int *last, char** name) {


    printf ("\n%s, your first name has %d characters in it\n\n", name[1], *first);
    printf ("Your last name, %s, has %d characters in it\n\n", name[2], *last);

    reverseString(*first, *last, name);

return 0;
}

void reverseString(int *first, int *last, char** name) {

    printf ("Your name in reverse is: ");

    int i = first;
    int j = last;

    while (i >= 0){
        printf ("%c", name[1][i]);
        i = i - 1;
    }

    while (j >= 0) {
        printf ("%c", name[2][j]);
        j = j - 1;
    }

    printf ("\n\n");
}








