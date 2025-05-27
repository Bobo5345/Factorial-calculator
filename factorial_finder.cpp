#include <iostream>
using namespace std;

// Making a user defined function
int fact(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else 
    {
        return num * fact(num-1);
    }
}

// The main function
int main()
{
    int num, factorial;

    // Asking user to give the number
    cout << "Enter the number you need to find factorial: ";
    cin >> num;

    // Calling the function (We should call it! otherwise why we made it :D)
    factorial = fact(num);

    // Printing the output
    cout << "\nThe factorial is " << factorial << endl;

    return 0;
}