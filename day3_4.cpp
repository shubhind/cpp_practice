#include<iostream>
void dot(double*V,double*W,int n)
{
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+V[i]*W[i];

    }
    for(int i=0;i<n;i++)
    {
        V[i]=sum;
    }
}
int main()
{
    int i,n;
    scanf("%d",&n);
    double V[n],W[n];
    for(i=0;i<n;i++)
    {
        scanf("%lf %lf", &V[i],&W[i]);
    }
    dot(V, W, n);
    for( i=0;i<n;i++)
        printf("%lf\n", V[i]);
}