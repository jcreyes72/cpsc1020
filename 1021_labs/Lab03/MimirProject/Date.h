#ifndef DATE_H_INCLUDED
#define DATE_H_INCLUDED

class Date{
   public:
   Date();
   Date(int,int,int);
   int getMonth();
   int getDay();
   int getYear();
   void setMonth(int);
   void setDay(int);
   void setYear(int);
   ~Date();
   private:
       int month;
       int day;
       int year;
};


#endif // DATE_H_INCLUDED
