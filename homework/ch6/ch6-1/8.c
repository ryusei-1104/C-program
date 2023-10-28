#include<stdio.h>
int main()
{
    int a;
    int b;
    int temp;
    int c;
    int d;
    printf("Enter a fraction (x/y): \n");
    scanf("%d/%d",&a,&b);
    c = a;
    d = b;
    if(a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    while(a != 0)
    {
        temp = a;
        a = b % a;
        b = temp;
    }
    printf("GCD = %d\n",b);
    d = d / b;
    c = c / b;
    printf("In lowest terms: %d/%d",c,d);
    return 0;
}