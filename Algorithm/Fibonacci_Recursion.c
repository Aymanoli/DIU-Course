#include<stdio.h>
long long int fibonacci(long long int n)
{
    if(n<=1)
        return n;
    else
        return fibonacci(n-1)+fibonacci(n-2);
}
int main()
{
    long long int n;
    printf("Enter the position of fibonacci series: ");
    scanf("%lld",&n);
    printf("fibo(%lld) : %lld\n",n,fibonacci(n));
    main();
}
