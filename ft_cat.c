#include "info.h"

void ft_cat(char Buffer[100], char username[10])
{
    char filename[100];
    int i = 4;
    int j = 0;
    if(Buffer[i] == '-')
    {
        write(1, "special\n", 9); // will work on later (-e , -A etc etc)
    }
    else if(Buffer[i - 1] != ' ' || Buffer[i - 1] == '\n' || (Buffer[i-1] >= 'a' && Buffer[i-1] <= 'z') || (Buffer[i-1] >= 'A' && Buffer[i-1] <= 'Z') || Buffer[i - 1] == '-')
    {
        write(1, "specify what you wish to do with cat \n", 39);
        loop(username);
    }
    else if((Buffer[i] >= 'a' && Buffer[i] <= 'z') || (Buffer[i] >= 'A' && Buffer[i] <= 'Z'))
    {
        while(Buffer[i] != '\n')
        {
            filename[j] = Buffer[i];
            i++;
            j++;
        }
        openfile(filename);
        write(1, "__________________________________\n", 35);
    }
}

void openfile(char *filename)
{
    FILE* ptr;
    int ch;
 
    ptr = fopen(filename, "r");
 
    if (NULL == ptr) {
        write(1, "file can't be opened \n", 23);
    }
    write(1, "__________________________________\n", 35);
    ch = fgetc(ptr);
    while (ch != EOF){
        write(1, &ch, 1);
        ch = fgetc(ptr);
        
    } 
    fclose(ptr);
}