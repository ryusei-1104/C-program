#include<stdio.h>

int main()
{
    int a;
    int min = 0;
    int max = 100;
    int guest;
    printf("Enter the answer number(0-100):");
    scanf("%d",&a);
    printf("\nGame start!\n");
    while (a >= 0)
    {
        printf("\nEnter a number(%d-%d):",min,max);
        scanf("%d",&guest);
        if(guest > a)
        {
            //if(max > guest)
            //{
                max = guest;
            //}
            
        }
        else if(guest < a)
        {
            //if(min < guest)
            //{
                min = guest;
            //}
        }
        else
        {
            printf("\nBANG!");
            break;
        }
    }
    
    return 0;
}