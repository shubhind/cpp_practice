#include<iostream>

int factorial(int n)
{
    if(n==1)
    return 1;

    else if(n>1)
    return n*factorial(n-1);
}

int main()
{
    int n;
    scanf("%d",&n);
    printf("%d",factorial(n));
}
