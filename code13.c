#include <stdio.h>
int main()
{
    const int username =123;
    const int password =123;
    int username_ip,password_ip;
    printf("Enter username & password\n");
    scanf("%d%d", & username_ip, &password_ip);
    if(username == username_ip && password == password_ip)
    {
        printf("User is authorised");
    }
    else
    {
        printf("User is not authorised");
    }
    return 0;
}
