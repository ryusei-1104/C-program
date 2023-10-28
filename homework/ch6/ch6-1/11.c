#include<stdio.h>

int main()
{
    int n ;
    int i = 2;
    //printf("Enter a number: \n");
    scanf("%d",&n);
    while(i * i <= n)
    {
        printf("%d\n",i*i);
        i = i + 2;
    }
    return 0;
}