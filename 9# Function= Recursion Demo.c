#include<stdio.h>
int main()
{
    int result = fact(11);
    printf("Factriol of 11 = %d",result);
}
int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
