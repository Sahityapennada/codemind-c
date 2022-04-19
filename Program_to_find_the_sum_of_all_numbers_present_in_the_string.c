#include <stdio.h>
int main()
{
    char str[80];
    int count, nc = 0, sum = 0;
    scanf("%s", str);
    for (count = 0; str[count] != NULL; count++)
    {
        if ((str[count] >= '0') && (str[count] <= '9'))
        {
            nc += 1;
            sum += (str[count] - '0');
        }
    }
    printf("%d", sum);
}