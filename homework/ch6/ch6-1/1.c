#include<stdio.h>

int main()
{
    float n = 1;
    float max = 0;
    while (n != 0)
    {
        printf("Enter a number (enter 0 to end): \n");
        scanf("%f",&n);
        if(max <= n)
        {
            max = n;
        }
        else
        {
            max = max;
        }
    }
    printf("The largest number entered was %.2f",max);
    return 0;
}