#include <stdio.h>
int main()
{
    int i;
    printf("Enter no");
    scanf("%d", &i);
    int isPrime =1;
    for(int j = 2; j <i; j++)
    {
        if(i % j == 0)
        {
            isPrime = 0;
            break;
        }
    }
    if(isPrime == 1) {
        printf("is Prime");
    }
    else
    {
        printf("is not Prime");
    }
    return 0;
}
