#include<stdio.h>
#include<string.h>

struct student
{
    char number[6];
    char name[100];
    int score;
}student[100];


int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        fgets(student[i].number,6,stdin);
        fgets(student[i].name,100,stdin);
        scanf("%d",&student[i].score);
    }
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (student[j].score > student[j+1].score) 
            {
                struct student tempstudent = student[j];
                student[j] = student[j + 1];
                student[j + 1] = tempstudent;
            }
        } 
    }
    for(int i=0;i<n;i++)
    {
        printf("%s %s %d\n",student[i].number,student[i].name,student[i].score);
    }
    return 0;
}