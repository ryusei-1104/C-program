#include <stdio.h>
int main()
{
    int n;
    int p=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            printf("%3d",p*j);
        }
        printf("\n");
        p++;
    }

    return 0;
}