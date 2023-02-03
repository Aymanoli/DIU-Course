#include<stdio.h>
int main()
{
    int rem, rev=0,num,original;
    printf("Enter The Number: ");
    scanf("%d", &num);
    original = num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(original == rev)
    {
        printf("%d\n",rev);
        printf("It is Palingrome");
    }
    else
    {
        printf("Error, it is not Palendrome");
    }
}
