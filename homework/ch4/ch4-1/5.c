#include<stdio.h>
#include<math.h>

int main()
{
    int a;
    int ans = 0;
    int i = 0;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&a);
    for(i = 0; i < 5; ++i)
    {

        ans = ans + (a % 8) * pow(10,i);
        if(a % 8 == 0 && i == 0)
        {
            ans = 0;
        }
        a = a / 8;
        if(a<8)
        {
            ans = ans + a * pow(10,i+1);
            break;
        }
    }
    printf("In octal, your number is:%.5d",ans);

    return 0;
}