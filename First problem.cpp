///1st problem
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,col;
    cout<<"Enter N = ";
    cin>>n;
    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
            cout<<" ";
        for(col=1; col<=row; col++)
        {
            cout<<col;
        }
        cout<<"\n";

    }
    return 0;
}
