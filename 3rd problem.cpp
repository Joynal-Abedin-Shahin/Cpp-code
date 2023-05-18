///3rd  problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter N = ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            cout<<col;
        }
        cout<<"\n";


    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=row; col++)
        {
            cout<<col;
        }
        cout<<"\n";

    }

    return 0;
}
