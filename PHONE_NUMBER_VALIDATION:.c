#include<stdio.h>
int main()
{
    int n,d,c=0,f=1;
    scanf("%d",&n);
    while(n!=0)
    {
        d=n%10;
        n/=10;
        c++;
    }
    if(d==0 || c<9) f=0;
    if(f==1) printf("Valid");
    else printf("Invalid");
    return 0;
}