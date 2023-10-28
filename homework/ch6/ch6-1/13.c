#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int j;
    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d",&n);
    while (i <= n) 
    {
        
	    j = i * i;
        printf("         %d%10d\n",i,j);
        i = i + 1;    
	}
    return 0;
}