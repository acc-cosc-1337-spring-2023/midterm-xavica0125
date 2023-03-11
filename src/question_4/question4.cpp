#include "question4.h"
bool test_config()
{
    return true;
}

string get_factorial_sequence(int num)
{
    string sequence;
    int factorial = 1;
    for(int i = 1; i <=num; i++)
    {
        sequence += to_string(i);
        factorial *= i;
        if (i < num)
        {
            sequence += "x";
        }
    }
    sequence += "=" + to_string(factorial);
    return sequence;
}

void menu()
{
    int choice;
    char exit_choice;
    do
    {
        cout<<"Enter a number from 1 to 10: ";
        cin>>choice;
        if(choice >= 1 && choice <= 10)
        {
            string factorial = get_factorial_sequence(choice);
            cout<<"Factorial of "<<choice<<" is...\n"<<factorial<<"\n";
            cout<<"Do you want to exit? Enter Y/N: ";
            cin>>exit_choice;
        }
        else
        {
            cout<<"Please enter number from 1 to 10...\n";
        }
    }while(exit_choice != 'Y' && exit_choice != 'y');
    
}