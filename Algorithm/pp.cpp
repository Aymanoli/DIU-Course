#include<stdio.h>
#include<string.h>

struct stu{
    int sid;
    char name [20];
    int marks[5];
};

int main ()
{
    int total =0;
    float avg;
    struct stu s1,s2,s3;
    printf("Enter ID: \n");
    scanf("%d", &s1.sid);
    printf("Enter name: \n");
    scanf("%s", &s1.name);
    printf("Enter marks of 5 subject: \n");
    for (int i=1; i<=5; i++)
    {
        scanf("%d", &s1.marks[i]);
        total = total + s1.marks[i];
    }

    avg= total/5;
    printf("============================\n");
    printf("Student info: \n");
    printf("%d\n", s1.sid);
    printf("%s\n", s1.name);
    printf("%Total = %d\n", total);
    printf("Average = %f\n", avg);
}
