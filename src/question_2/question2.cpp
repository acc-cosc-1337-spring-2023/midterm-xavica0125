#include "question2.h"

bool test_config()
{
    return true;
}

string decimal_to_hex(int num)
{
    string str;
    while (num > 0)
    {
        int remainder = num % 16;
        char hex_digit;
        if (remainder < 10)
        {
            hex_digit = remainder + '0';
        }
        else
        {
            hex_digit = remainder - 10 + 'A';
        }
        str = hex_digit + str;
        num /= 16;
    }
    return str;
 }

 void menu()
 {
    int value;
    char exit_choice;
    do
    {
        cout<<"Enter integer between 1 and 512: ";
        cin>>value;
        if(value >= 1 && value <= 512)
        {
            string hex_value = decimal_to_hex(value);
            cout<<"Hexadecimal value of "<<value<<": "<<hex_value<<"\n";
            cout << "Do you want to exit the program? (Y/N): ";
            cin >> exit_choice;
        }
        else
        {
            cout<<"Please enter integer between 1 and 512.\n";
        }

    }while(exit_choice != 'Y' && exit_choice != 'y');
 }