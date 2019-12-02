#include<iostream>

int main()
{
    
    int i,j,n,max=0,temp,index=0;
    int arr[n];
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=n-1;i>0;i--)
    {
        
        for(j=0;j<=i;j++)
        {
         if(arr[j]>max)
         {
             max=arr[j];

             index=j;
         }
        
         
        }
        
         temp=arr[i];
         arr[i]=arr[index];
         arr[index]=temp;
    }
    for(i=0;i<n;i++)
        printf("%d ", arr[i]);

}