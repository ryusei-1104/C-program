#include<stdio.h>
int main()
{
    int h;
    int w;
    int l;
    int v;
    h = 8;
    w = 10;
    l = 12;
    v = h*w*l;
    printf("Dimensions: %dx%dx%d\n",l,w,h);
    printf("Volume (cubic inches): %d",v);
    return 0;
}