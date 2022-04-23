#include<stdio.h>
int main()
{
    int num,rem,s=0;
    scanf("%d",&num);
    while(num/10!=0)
    {
        s=0;
        while(num!=0)
        {
            rem=num%10;
            s+=rem;
            num=num/10;
        }
        num=s;
    }
    printf("%d",s);
}