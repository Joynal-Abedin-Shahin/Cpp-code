///5th problem
#include <bits/stdc++.h>
using namespace std;
void printSeries(int n)
{
    if (n <= 1)
    {
        return;
    }

    printSeries(n - 1);
    cout << n - 1 << " ";
}

int main()
{
    int N;
    cout << "Enter a number: ";
    cin >> N;
    printSeries(N);

    return 0;
}
