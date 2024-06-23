#include<stdio.h>
int main()
{
    int a,b;
    int temp = 0;
    scanf("%d %d",&a,&b);
    if(a == b)
    {
        temp = 0;
    }
    else if(a > b)
    {
        temp = 1;
    }
    else
    {
        temp = 2;
    }
    switch(temp)
    {
        case  0:
        printf("Equals");
        break;
        case  1:
        printf("Biggest number is a");
        break;
        case  2:
        printf("Biggest number is b");
        break;
    default
    break;
    }
    return 0;
}
