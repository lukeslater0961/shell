#include <unistd.h>
#include <stdio.h>
#include "info.h"



int main()
{
    char Buffer[100];
    write(1, ">>", 2);
    fgets(Buffer, 100, stdin);
    while(ft_strlen(Buffer) <= 1 || (Buffer[0] == '\n' && Buffer[1] == '\0'))
    {
        write(1, ">>", 2);
        fgets(Buffer, 100, stdin);
    }
    input(Buffer);
}