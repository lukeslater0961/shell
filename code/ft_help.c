#include "info.h"

void ft_help(char Buffer[100])
{
    char *commands[] = {"↳ cat + (name of file in directory)","↳ echo + (sentence)", "↳ exit (shutsdown terminal)", NULL}; 

    if(ft_strcmp(Buffer, "help\n") == 0) {
        int i = 0;
        while (commands[i] != NULL) {
            write(1, commands[i], strlen(commands[i]));
            write(1, "\n", 2);
            i++;
        }
        write(1, "\n", 2);
        write(1, "if you want more details type help + the command\n", 50);
    }
    else if(ft_strcmp(Buffer, "help cat\n") == 0)
    {
        openfile("cat_details.txt");
    }
    else if(ft_strcmp(Buffer, "help echo\n") == 0)
    {
        openfile("echo_details.txt");
    }
    else if(ft_strcmp(Buffer, "help exit\n") == 0)
    {
        openfile("exit_details.txt");
    }
}

