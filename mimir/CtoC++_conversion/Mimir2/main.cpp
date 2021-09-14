#include<iostream>
#include<iomanip>
#include<fstream>
#define SIZE 5

using namespace std;

int main(int argc, char *argv[]) {

    int numerator = 25;
    int denominator = 10;
    int i = 0;

    ifstream inPut;
    inPut.open(argv[1]);

    ofstream outPut;
    outPut.open(argv[2]);

    float result = (float)numerator/denominator;

    outPut << fixed << setprecision(2) << "Result is " << result << endl;
    float arr[SIZE];

    for(i = 0; i < SIZE; i++) {
        inPut >> arr[i];
        outPut << fixed << setprecision(4) << arr[i] << endl;
    }

return 0;
}
