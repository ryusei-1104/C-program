#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    int min=9999;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<min){
            min=a[i];
        }
    }
    printf("%d",min);

    return 0;
}