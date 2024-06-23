#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    scanf("%d",&n);
    float a[n];
    float sum = 0;
    for(int i=0;i<n;i++)
    {
        scanf("%f",&a[i]);
        sum +=a[i];
    }
    sum = floor(sum / n * 100)/100;
    printf("%.2f",sum);

    return 0;
}