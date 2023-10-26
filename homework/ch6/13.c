#include<stdio.h>

int main()
{
    int c;
    float m;
    float b = 0;
    printf("*** ACME checkbook-balancing program ***\n");
    printf("Commands: 0=clear, 1=credit, 2=debit, 3=balance, 4=exit\n");
    printf("\n");
    while(c != 4)
    {
        printf("Enter command: ");
        scanf("%d",&c);
        switch (c)
        {
        case 1:
            printf("Enter amount of credit: ");
            scanf("%f ",&m);
            b = b + m;
            break;
        case 2:
            printf("Enter amount of debit: ");
            scanf("%f",&m);
            b = b - m;
            break;
        case 3:
            printf("Current balance: $%.2f\n",b);
            break;
        case 4:
            break;
        default:
            break;
        }
    }
    return 0;
}   