#ifndef bloodPressure_hpp
#define bloodPressure_hpp
#include <stdio.h>
#include "date.hpp"

class Blood{
  protected:
    int sysp;
    int diastp;
    Date date;
  public:
    Blood(const int, const int , const Date);
    int getSysp();
    int getDiastp();
    Date getDate();
    void print();
};
#endif