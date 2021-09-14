#include "rectangle.h"
#include <iostream>
//This program returns the area of a rectangle


int main() {

    float rectLength;
    float rectWidth;

    std::cout << "This program returns the area of a rectangle" << std::endl;

    std::cout << "Enter the length of the rectangle: ";
    std::cin >> rectLength;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> rectWidth;

    Rectangle rectOne(rectLength, rectWidth);

    std::cout << "The area of your rectangle is: " << rectOne.getArea() << std::endl;

return 0;
}
