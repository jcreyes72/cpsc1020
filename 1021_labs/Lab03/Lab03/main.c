#include <stdio.h>
#include <stdlib.h>

struct Student{
    char* firstName;
    int age;
    int cuid;
    float GPA;
    };

void addStudents(struct Student* s, int *numStudents);
void printStudents(struct Student* s, int *numStudents);
int printMenu();


int main(){

    int option;
    int studentAmount = 0;
    int *numStudents = &studentAmount;

    struct Student* s;
    s = (struct Student *)malloc(10 * sizeof(struct Student));

        printMenu();

    return 0;
}

int printMenu(){

    int option;
    int studentAmount = 0;
    int *numStudents = &studentAmount;
    struct Student* s;

    printf ("Please select an option:\n1. Add a Student \n2. Print Students Currently Saved\n3. End Program\n\n");
    scanf("%d", &option);

            if ((option = 1)){
                studentAmount = studentAmount + 1;
                addStudents(s, *numStudents);
            }
            else if ((option = 2)){
                printStudents(s, *numStudents);
            }

return 0;
}

void addStudents(struct Student* s, int *numStudents){

    int i = numStudents;

    s[i].firstName = malloc(sizeof(char)*25);

    printf("\nEnter the first name of the student: ");
    scanf ("%s", s[i].firstName);

    printf("\nEnter the students age: ");
    scanf ("%d", &s[i].age);

    printf("\nEnter the students CUID number: ");
    scanf ("%d", &s[i].cuid);

    printf("\nEnter the students GPA: ");
    scanf ("%f", &s[i].GPA);

    printMenu();

void printStudents(struct Student* s, int *numStudents){

int j;

    printf("Here are the students currently on file:\n");

    for (j = 1; j >= numStudents; j++){
        printf ("Name: %s\tAge: %d\tCUID: %d\tGPA: %.2f\n", s[j].firstName, s[j].age, s[i].cuid, s[i].GPA);
    }



}

}

