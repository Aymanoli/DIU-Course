#include<stdio.h>

int main()
{
    int a,b;
    int *num1, *num2;
    num1 = &a;
    num2 = &b;
    printf("===================\n");
    printf("Enter the first value: ");
    scanf("%d", num1);
    printf("Enter the second value: ");
    scanf("%d", num2);
    if(*num1> *num2)
    {
        printf("%d is maximum\n", *num1);
        printf("====================\n\n");
    }
    else{
        printf("%d is maximum\n",*num2);
        printf("====================\n\n");
    }
    return 0;
}
