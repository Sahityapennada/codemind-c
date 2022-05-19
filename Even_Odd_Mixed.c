#include<stdio.h>
int main()
{
    int n,ev=0,od=0,c=0,d;
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        if(d%2==0)
            ev++;
        else
            od+=1;
            c+=1;
            n=n/10;
    }
    if(c==ev)
    {
        printf("Even");
    }
    else if(c==od)
    {
        printf("Odd");
    }
    else
    {
        printf("Mixed");
    }
}