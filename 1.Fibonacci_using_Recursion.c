#include <stdio.h>
int fibo(int n) 
{
    if (n <= 1) 
	{
        return n;
    }
    return fibo(n - 1) + fibo(n - 2);
}
int main() 
{
    int t;
    int i;
	printf("Enter number of terms: ");
	scanf("%d",&t); 
    printf("Fibonacci Series:\n");
    for (i = 0; i < t; i++) 
	{
        printf("%d ", fibo(i));
    }
    return 0;
}

