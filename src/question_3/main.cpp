#include "question3.h"
#include <iostream>
using std::cout;
int main()
{
    int num = 5;
    int num1 = 10;
    value_ref_param(num, num1);
    cout<<"After function num = "<<num<<"\n";
    cout<<"After funtion num1 = "<<num1<<"\n";
    return 0;
}