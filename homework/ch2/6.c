#include<stdio.h>
int main()
{
    int h;
    int w;
    int l;
    int v;
    int w2;
    int ans;
    scanf("%d %d %d %d", &h, &l, &w, &w2);
    v = h*w*l;
    ans = (v+w2-1)/w2;
    printf("%d",ans);
    return 0;
}