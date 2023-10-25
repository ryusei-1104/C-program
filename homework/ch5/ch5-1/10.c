#include<stdio.h>

int main()
{
    int grade;
    printf("Enter a numerical grade: ");
    scanf("%d",&grade);
    if(grade<60)
    {
        printf("Letter grade: F");
    }
    else if (grade<70)
    {
        printf("Letter grade: D");
    }
    else if (grade<80)
    {
        printf("Letter grade: C");
    }
    else if (grade<90)
    {
        printf("Letter grade: B");
    }
    else
    {
        printf("Letter grade: A");
    }
    return 0;
}