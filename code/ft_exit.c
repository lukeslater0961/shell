#include "info.h"

void ft_exit(char Buffer[100], char username[10])
{
    int i = 0;
    while(Buffer[i] && username[i])
    {
        Buffer[i] = '\0';
        username[i] = '\0';
    }
    printf("[Shell successfully exited !]");
    exit(0);
}