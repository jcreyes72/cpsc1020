#include <stdio.h>
#include <stdlib.h>

#define SIZE 5

int main(int argc, char *argv[]) {
   int numerator = 25;
   int denominator = 10;
   int i = 0;

   /*
   You can assume the files opened correctly and the
   correct number of of command-line arguments were
   entered.
   */
   FILE * inPut = fopen(argv[1], "r");
   FILE * outPut = fopen(argv[2], "w");

   float result = (float)numerator/denominator;
   fprintf(outPut,"Result is %.2f\n", result);

   float arr[SIZE];

   for( ; i < SIZE; i++) {
      fscanf(inPut, "%f", &arr[i]);
      fprintf(outPut, "%7.4f\n", arr[i]);
   }

   return 0;
}
