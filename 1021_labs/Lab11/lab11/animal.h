#ifndef ANIMAL_H_INCLUDED
#define ANIMAL_H_INCLUDED
#include <iostream>


class Animal {
private:
    int age;
    double weight;
    virtual std::string name;
    virtual std::string voice;
public:
    Animal(int, double);
    int getAge();
    double getWeight();
    void setAge(int);
    void setWeight(double);

//-------VIRTUAL FUNCTIONS-----------//

    virtual void setVoice();
    virtual void setName();
    virtual std::string getVoice();     //returns animal voice
    virtual std::string getName();      //returns animal name
    virtual void printInfo;             //prints animal info

//-----------------------------------//
};



#endif // ANIMAL_H_INCLUDED
