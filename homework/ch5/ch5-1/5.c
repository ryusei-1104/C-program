#include<stdio.h>

int main()
{
    int a;
    int b;
    int temp = 1;
    printf("Enter a number: ");
    scanf("%d",&a);
    b = a;
    if(a <= 0)
    {
        printf("Please enter the whole between 1 and 9999");
    }
    while(a>=10)
    {
        a = a /10;
        ++temp;
        if(temp>4)
        {
            printf("Please enter the whole between 1 and 9999");
            break;
        }
    }
    if(temp<=4 && a > 0)
    {
        if(temp == 1)
        {
            printf("The number %d has %d digit",b,temp);
        }
        else
        {
            printf("The number %d has %d digits",b,temp);
        }
       
    }

    return 0;
}