#include "info.h"

void loop(char username[10])
{
    char Buffer[100];
    write(1, username,strlen(username));
    fgets(Buffer, 100, stdin);

    while(strlen(Buffer) <= 1 || (Buffer[0] == '\n' && Buffer[1] == '\0'))
    {
        write(1, username, strlen(username));
        fgets(Buffer, 100, stdin);
    }
    user_input(Buffer, username);
}