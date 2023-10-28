#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int odd = 3;
    int temp = 1;
    printf("\nThis program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);
    while (i <= n) 
    {
        printf("         %d%10d\n",i,temp);
        i = i + 1;
        temp = temp + odd;
        odd = odd + 2;    
	}
    return 0;
}