#include<stdio.h>

int main()
{
    int n;
    int i= 0;
    int ans = 0;
    scanf("%d",&n);
    while (i < n) 
    {
        
	    i = i + 1;
        ans = ans + i;    
	}
    printf("%d",ans);
    return 0;
}