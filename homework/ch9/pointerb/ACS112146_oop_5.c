#include<stdio.h>

struct STUDENT
{
    char number[100];
    char name[100];
    int score;
} student[100];

int main()
{
    int n, score;
    char number, name;

    scanf("%d", &n);
    getchar(); // absorb the newline character after reading n

    for (int i = 0; i < n; i++)
    {
        int j = 0;
        while ((number = getchar()) != '\n')
        {
            student[i].number[j] = number;
            j++;
        }
        student[i].number[j] = '\0'; // add null terminator to the number string

        j = 0;
        while ((name = getchar()) != '\n')
        {
            student[i].name[j] = name;
            j++;
        }
        student[i].name[j] = '\0'; // add null terminator to the name string

        scanf("%d", &score);
        getchar(); // absorb the newline character after reading score

        student[i].score = score;
    }

    // Bubble sort the array of students based on their scores
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (student[j].score > student[j + 1].score)
            {
                struct STUDENT tempStudent = student[j];
                student[j] = student[j + 1];
                student[j + 1] = tempStudent;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s %s %d\n", student[i].number , student[i].name , student[i].score);
    }

    return 0;
}
