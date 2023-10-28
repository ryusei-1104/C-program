#include<stdio.h>

int main()
{
    int a;
    int temp = 1;
    printf("Enter a nonnegative integer: ");
    scanf("%d",&a);
    while(a>=10)
    {
        a = a /10;
        temp = temp + 1;
    }
    printf("The number has %d digit(s).",temp);

    return 0;
}