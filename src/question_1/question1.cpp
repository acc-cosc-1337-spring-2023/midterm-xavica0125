#include "question1.h"

bool test_config()
{
    return true;
}

bool is_prime(int num)
{
    if(num < 2)
    {
        return false;
    }
    for(int i = 2; i <= num/2; i++)
    {
        if(num % i == 0)
        {
            return false;
        }
    }
    return true;
}

vector<int> get_primes(int num)
{
    vector<int> prime_numbers;
    for(int i = 2; i <= num; i++)
    {
        if (is_prime(i) == true)
        {
            prime_numbers.push_back(i);
        }
    }
    return prime_numbers;
}

void menu()
{
    int num_choice;
    char exit_choice;

    do {
        
        cout << "Enter a number between 1 and 60: ";
        cin >> num_choice;
        if (num_choice > 1 && num_choice <= 60)
        {
            vector<int> prime_nums = get_primes(num_choice);

            cout << "Prime numbers up to " << num_choice << ": \n";
            for (int i : prime_nums) 
            {
                cout << i << " "<<"\n";
            }
        

            cout << "Do you want to exit the program? (Y/N): ";
            cin >> exit_choice;
        }
        else
        {
            cout<<"Please enter number greater than 1 and less than 60.\n";
        }
    } while (exit_choice != 'Y' && exit_choice != 'y');

}
