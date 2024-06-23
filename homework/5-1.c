#include<stdio.h>
int main()
{
    int a[10][10],i,j,k=1,m,n;
	//printf("Enter n(n<10):");
	scanf("%d",&n);
	if(n%2==0) m=n/2;
	else m=n/2+1;
	for(i=0;i<m;i++)
	{
		for(j=i;j<n-i;j++)
		  a[i][j]=k++;
		
		for(j=i+1;j<n-i;j++)
		  a[j][n-i-1]=k++;
		
		for(j=n-i-2;j>=i;j--)
		a[n-1-i][j]=k++;
		
		for(j=n-2-i;j>=i+1;j--)
		  a[j][i]=k++;
	 } 
	 for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		printf("%d ",a[i][j]);
		printf("\n");
	}
	return 0;
}