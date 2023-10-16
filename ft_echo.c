#include "info.h"

void ft_echo(char Buffer[100], char username[10])
{
    int i =5;
    if(Buffer[i] == '-')
    {
        write(1, "special\n", 9); // will work on later (-e , -n etc etc)
    }
    else if(Buffer[i - 1] != ' ' || Buffer[i - 1] == '\n' || (Buffer[i-1] >= 'a' && Buffer[i-1] <= 'z') || (Buffer[i-1] >= 'A' && Buffer[i-1] <= 'Z') || Buffer[i - 1] == '-' || Buffer[i] == '\n')
    {
        write(1, "specify what you wish to do with echo \n", 39);
        loop(username);
    }
    else{
        while(Buffer[i] != '\n')
        {
            write(1, &Buffer[i], 1);
            i++;
        }
        write(1, "\n", 2);
    }
}