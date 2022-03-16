#include <stdio.h>
int main()
{
    char username, a;
    int password;
    printf("Username:");
    scanf("%c", &username);
    printf("\nPassword:");
    scanf("%d", &password);
    {
        if (password == 12345)
            printf("Login Successful");
        else
            printf("Password or");
    }
    {
        if (username == a)
            printf("Login Successful");

        else
            printf(" Username is incorrect, Try Again");
    }
    return 0;
}