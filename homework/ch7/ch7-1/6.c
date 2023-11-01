#include<stdio.h>

int main()
{
    float ans = 0;
    float n1;
    float n2;
    float n3;
    char o1;
    char o2;
    printf("Enter an expression (example: 1+2.5*3):  ");
    scanf("%f%c%f%c%f",&n1,&o1,&n2,&o2,&n3);
    switch (o1)
    {
    case '+':
        ans = n1 + n2;
        break;
    case '-':
        ans = n1 - n2;
        break;
    case '*':
        ans = n1 * n2;
        break;
    case '/':
        ans = n1 / n2;
        break;
    default:
        break;
    }
    switch (o2)
    {
    case '+':
        ans = ans + n3;
        break;
    case '-':
        ans = ans - n3;
        break;
    case '*':
        ans = ans * n3;
        break;
    case '/':
        ans = ans / n3;
        break;
    default:
        break;
    }
    printf("Value of expression: %.1f",ans);
    return 0;
}