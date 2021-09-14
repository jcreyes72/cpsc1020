#include "rectangle.h"

float Rectangle::getArea(){
    float area;
    area = length * width;

return area;
}

//------------CONSTRUCTOR---------------------//

Rectangle::Rectangle(float l, float w){
    length = l;
    width = w;
}

//--------------------------------------------//
