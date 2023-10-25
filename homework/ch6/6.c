#include<stdio.h>

int main()
{
    int n;
    int i = 1;
    int j;
    int k;
    printf("Enter number of entries in table: ");
    scanf("%d",&n);
    while (i <= n) 
    {
        
	    j = i * 2;
        k = i * 3;
        printf("         %d%10d%10d\n",i,j,k);
        i = i + 1;    
	}
    return 0;
}