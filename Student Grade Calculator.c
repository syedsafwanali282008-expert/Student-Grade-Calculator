#include <stdio.h>
int main()
{
    char Name[50];
    int Roll;
    float Marks[5];
    float Total = 0;
    float Percentage;
    float Grades;

    printf("----- Student Grade Calculator -----");

    printf("Enter Student Name:");
    scanf("%49s", Name);

    printf("Enter Student Roll Number:");
    scanf("%d", &Roll);

    for(int i = 0; i < 5; i++)
    {
        printf("Enter Marks Of Subject %d:", i+1);
        scanf("%f", &Marks[i]);

        Total += Marks[i];
    }

    Percentage = (Total / 500) * 100;

    printf("----- Student Result -----\n");
    printf("Name:%s\n", Name);
    printf("Roll no.:%d\n", Roll);
    printf("Total Marks:%.2f\n", Total);
    printf("Percentage:%.2f\n", Percentage);

    if(Percentage >= 90)
    {
        printf("Grade = 'A'");
    }
    else if(Percentage >= 80)
    {
        printf("Grade = 'B'");
    }
    else if(Percentage >= 70)
    {
       printf("Grade = 'C'");
    }
    else if(Percentage >= 60)
    {
        printf("Grade = 'D'");
    }
    else{
        printf("Grade = 'F'");
    }

    if(Percentage >= 33)
    {
        printf("Result: Pass");
    }
    else{
        printf("Result: Fail");
    }

    return 0;
}
