#include<stdio.h>
#include<math.h>
//f(x) = x*x*x + (a+1) * x - (b + 0.5)
//f£½(x) = 3*x*x + a + 1
double x = 1.0;
double nx;

void newtown();

int main()
{
    newtown();
    return 0;
}



void newtown()
{
    nx = x - (x*x*x + 5.0 * x - 6.5) / (3*x*x + 5.0);
    if(fabs(nx-x) > 0.0000000001)
    {
        printf("%.10f\n",nx);
        x = nx;
        newtown();
    }
    else
    {
        printf("%.10f\n",nx);
    }
}