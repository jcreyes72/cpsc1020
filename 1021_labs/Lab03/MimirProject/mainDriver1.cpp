#include "Date.h"
#include<iostream>
using namespace std;


   Date::Date() {
       month = 1;
       day = 1;
       year = 1900;
       std::cout <<"inside default constructor\n";
   }

   Date::Date(int theMonth,int theDay,int theYear){
       std::cout;
       month = theMonth;
       day = theDay;
       year = theYear;
       std::cout <<"inside overloaded constructor\n";
   }

   int Date::getMonth(){
       return month;
   }
   int Date::getDay(){
       return day;
   }
   int Date::getYear(){
       return year;
   }
   void Date::setMonth(int theMonth){
       month = theMonth;
   }
   void Date::setDay(int theDay){
       day = theDay;
   }
   void Date::setYear(int theYear){
       year = theYear;
   }
   Date::~Date(){
       std::cout <<"inside destructor\n";
   }

