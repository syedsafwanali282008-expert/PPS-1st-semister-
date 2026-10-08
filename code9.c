#include <stdio.h>
int main()
{
    int a;
    printf("Type any number");
    scanf("%d", &a);
    if(a == 0)
    {
        printf("Zero");
    }
    else if(a > 0)
    {
        printf("Positive");
    }
    else
    {
        printf("Negetive");
    }
    return 0;
}
