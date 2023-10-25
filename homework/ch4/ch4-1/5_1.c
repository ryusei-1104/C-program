#include<stdio.h>

int main()
{
    int a;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&a);
    printf("In octal, your number is:%.5o",a);
    return 0;
}