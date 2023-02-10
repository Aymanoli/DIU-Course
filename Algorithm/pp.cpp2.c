#include<stdio.h>
#include<string.h>

struct Person{
    int ID;
    char name[20];
    float salary;
};

int main()
{
    struct Person Person1, Person2, Person3, Person4, Person5;
    Person1.ID = 101;
    strcpy(Person1.name,"Rakibul");
    Person1.salary = 30000.00;

    printf("Person info: ");
    printf("%d\n", Person1.ID);
    printf("%s\n", Person1.name);
    printf("%f\n\n", Person1.salary);

    Person2.ID = 102;
    strcpy(Person2.name, "Mercedes");
    Person2.salary = 60000.00;

    printf("Person info: ");
    printf("%d\n", Person2.ID);
    printf("%s\n", Person2.name);
    printf("%f\n", Person2.salary);
}
