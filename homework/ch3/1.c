#include<stdio.h>

int main()
{
    int i;
    float j;
    i = 40;
    j = 839.21f;
    printf("|%d|%5d|%-5d|%5.3d|\n", i, i, i, i);
	printf("|%10.3f|%10.3e|%-10g|", j, j, j);

    return 0;
}