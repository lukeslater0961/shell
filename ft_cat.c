#include "info.h"

void ft_cat(char Buffer[100], char username[10])
{
    char filename[10];
    int i = 4;
    int j = 0;
    if(Buffer[i] == '-')
    {
        write(1, "special\n", 9);
    }
    else if(Buffer[i - 1] != ' ')
    {
        if(Buffer[i - 1] == '\n')
        write(1, "specify what you wish to do with cat \n", 39);
        loop(username);
    }
    else if((Buffer[i] >= 'a' && Buffer[i] <= 'z') || (Buffer[i] >= 'A' && Buffer[i] <= 'Z'))
    {
        while(Buffer[i] != '\0')
        {
            filename[j] = Buffer[i];
            i++;
            j++;
        }
        filename[j] = '\0';
        write(1, filename, strlen(filename)); //debug for filename
        //openfile(filename);
    }
}

/*void openfile(char *filename) {
    
}*/