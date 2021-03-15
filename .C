// Created by Amrit Kumar

#include <stdio.h>
int factorial(int n);
int main(){
int i,fact,rem,n,sum;
printf("enter number\n");
scanf("%d",&n);
printf(" all strong number between 1 to %d\n",n);
for(i=1;i<=n;i++)
{
   fact=0;
   sum=0;
   rem=0;
   int x=i;
    while(x!=0)
    {
        rem=x%10;
        x=x/10;
        fact=factorial(rem);
        sum=sum+fact;

    }
    if(sum==i)
    {
        printf ("%d\n",i);
    }
    
}
    return 0;
}
int factorial (int n)
{
    int i, multi=1;
    for(i=1;i<=n;i++)
    {
        multi=multi*i;
            
    }
    return multi;
}
