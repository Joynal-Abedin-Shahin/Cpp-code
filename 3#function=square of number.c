#include<stdio.h>
int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    printf("Enter any integer :");
    scanf("%d",&num);
    int result = square(num);
    printf("Squre is :%d\n",result);
}
