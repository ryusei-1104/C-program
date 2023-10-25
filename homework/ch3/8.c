#include<stdio.h>

int main()
{   
    int i;
    float p;
    int y;
    int m;
    int d;
    //printf("Enter item number: ");
    scanf("%d",&i);
    //printf("Enter unit price: ");
    scanf("%f",&p);
    //printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d",&m,&d,&y);
    printf("Item        Unit        Purchase\n");
    printf("            Price       Date\n");
    printf("%d         $%.2f    %.2d/%.2d/%.4d",i,p,m,d,y);
    return 0;
}