#include<stdio.h>

int main()
{
    int n= 10;
    int i= 0;
    int ans = 0;
    while (i < n) 
    {
        
	    i = i + 1;
        ans = ans + i;    
	}
    printf("%d",ans);
    return 0;
}