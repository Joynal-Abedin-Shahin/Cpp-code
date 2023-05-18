///4th Problem
#include <bits/stdc++.h>
using namespace std;
bool primecheck(int number)
{
    if (number <= 1)
    {
        return false;
    }
    for (int i = 2; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (primecheck(num))
    {
        cout << num << " is a prime number." << std::endl;
    }
    else
    {
        cout << num << " is not a prime number." << std::endl;
    }
    return 0;
}
