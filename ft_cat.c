#include "info.h"

void ft_cat(char *Buffer, char username[10])
{
    char *filename;
    int i = 4;
    int j = 0;
    if(Buffer[i] == '-')
    {
        write(1, "special\n", 9);
    }
    else if(Buffer[i - 1] != ' ')
    {
        write(1, "command error\n", 15);
        loop(username);
    }
    else if((Buffer[i] >= 'a' && Buffer[i] <= 'z') || (Buffer[i] >= 'A' && Buffer[i] <= 'Z'))
    {
        while(i != strlen(Buffer))
        {
            filename[j] = Buffer[i];
            i++;
            j++;
        }
        filename[j] = '\0';
        write(1, filename, strlen(filename)); //debug for filename
        openfile(filename);
    }
}

void openfile(char *filename) {
    
}