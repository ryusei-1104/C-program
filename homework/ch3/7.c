#include<stdio.h>

int main()
{
    int a1;
    int a2;
    int a3;
    int a4;
    int a5;
    int a6;
    int a7;
    int a8;
    int a9;
    int a10;
    int a11;
    int a12;
    int a13;
    int a14;
    int a15;
    int a16;
    int ans1;
    int ans2;
    int ans3;
    int ans4;
    int ans5;
    int ans6;
    int ans7;
    int ans8;
    int ans9;
    int ans10;
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",&a1,&a2,&a3,&a4,&a5,&a6,&a7,&a8,&a9,&a10,&a11,&a12,&a13,&a14,&a15,&a16);
    
    ans1 = a1 + a2 + a3 + a4;
    ans2 = a5 + a6 + a7 + a8;
    ans3 = a9 + a10+ a11 + a12;
    ans4 = a13 + a14 +a15 +a16;
    ans5 = a1 + a5 + a9 + a13;
    ans6 = a2 + a6 + a10 + a14;
    ans7 = a3 + a7 + a11 + a15;
    ans8 = a4 + a8 + a12 + a16;
    
    ans9 = a1 + a6 + a11 + a16;
    ans10 = a4 + a7 + a10 + a13;
    printf("%2d %2d %2d %2d\n",a1,a2,a3,a4);
    printf("%2d %2d %2d %2d\n",a5,a6,a7,a8);
    printf("%2d %2d %2d %2d\n",a9,a10,a11,a12);   
    printf("%2d %2d %2d %2d\n",a13,a14,a15,a16);
    printf("\n");
    printf("Row sums: %d %d %d %d\n",ans1,ans2,ans3,ans4);
    printf("Column sums: %d %d %d %d\n",ans5,ans6,ans7,ans8);
    printf("Diagonal sums: %d %d",ans9,ans10);
    return 0;
}