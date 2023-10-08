#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include "info.h"



int main()
{
    char username[10];
    char Buffer[100];

    write(1, "whats your username: ",22);
    fgets(username, 10, stdin);

    size_t username_length = strlen(username);
    if (username_length > 0 && username[username_length - 1] == '\n') {
        username[username_length - 1] = '\0';
    }

    ft_strcat(username, ">> ");
    write(1, username,strlen(username));
    fgets(Buffer, 100, stdin);

    while(strlen(Buffer) <= 1 || (Buffer[0] == '\n' && Buffer[1] == '\0'))
    {
        write(1, username, strlen(username));
        fgets(Buffer, 100, stdin);
    }
}