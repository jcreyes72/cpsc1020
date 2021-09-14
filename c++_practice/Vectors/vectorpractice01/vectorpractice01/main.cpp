#include <iostream>
#include <vector>

//This program utilizes vectors to store and display student names and grades

int main(){

    int numStudents; //This tells us the number of students in our list

    std::cout << "This program stores and displays student names and grades" << std::endl;
    std::cout << "How many students do you plan on adding to the list?: ";
    std::cin >> numStudents;

    //Creating vector now that the number of students has been established
    std::vector<std::string> names(numStudents);
    std::vector<float> grades(numStudents);
    int vectorSize = names.size();


        for (int i = 0; i < vectorSize; i++){

            //Getting Name
            std::string inputName;  //User entered name
            std::cout << "\nEnter the name of student " << i+1 << ": ";
            std::cin >> inputName;
            names[i] = inputName;   //Setting the current name equal to user input

            //Getting Grade
            int inputGrade;         //User entered grade
            std::cout << "Enter the students grade: ";
            std::cin >> inputGrade;
            grades[i] = inputGrade;

        }


//-------------Displaying the mean of the grades of all the students----------------------//

        int sum = 0; //Used in determining mean
        float mean;

            for (int i = 0; i < vectorSize; i++){
                sum += grades[i];
            }

        mean = sum / vectorSize;

        std::cout << "\nThe mean of the students grades is: " << mean << std::endl;

//----------------------------------------------------------------------------------------//




return 0;
}
