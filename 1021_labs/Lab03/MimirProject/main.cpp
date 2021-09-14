#include "Date.h"
#include<iostream>
#include "mainDriver1.cpp"

using namespace std;


int main(){
   //Declaring the date for today
   Date today = Date(9,25,2019);
   //Date for tomorrow -> no data values
   Date tomorrow = Date();
   //Calling setValues function
   tomorrow.setDay(26);
   tomorrow.setMonth(9);
   tomorrow.setYear(2019);

   cout <<"today's day is: "<<today.getDay()<<endl;
   cout <<"tomorrow's day is: "<<tomorrow.getDay()<<endl;

   Date yesterday = Date();

   yesterday.setDay(24);

   cout <<"yesterday's day was: "<<yesterday.getDay()<<endl;

}
