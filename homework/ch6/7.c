#include<stdio.h>

int main()
{
    int a;
    int ans = 0;
    printf("Enter integers (0 to terminate): ");
    scanf("%d",&a);
    while(a != 0)
    {
        ans = ans + a;
        scanf("%d",&a);
    }  
    printf("The sum is: %d",ans); 
    return 0;
}