#include<stdio.h>

int main()
{
    float a[10];
    float avg = 0;
    int count = 0;
    scanf("%f %f %f %f %f %f %f %f %f %f ",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
    for(int i = 0;i<10;i++)
    {
        avg = avg + a[i];
    }
    avg = avg / 10;
    for(int i = 0;i<10;i++)
    {
        if(a[i] > avg)
        {
            count++;
        }
    }
    printf("%.2f\n%d",avg,count);
    return 0;
}