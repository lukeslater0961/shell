#include "info.h"

void ft_help(char Buffer[100], char username[10])
{
    int i = 5;
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
        openfile("cat_details.txt");
    else if(ft_strcmp(Buffer, "help echo\n") == 0)
        openfile("echo_details.txt");
    else if(ft_strcmp(Buffer, "help exit\n") == 0)
        openfile("exit_details.txt");
    else if(ft_strcmp(Buffer, "help date\n") == 0)
        write(1, "no extra info available for this command\n", 43);
    else if(Buffer[i + 1] != ' ' || Buffer[i + 1] == '\n' || (Buffer[i+1] >= 'a' && Buffer[i+1] <= 'z') || (Buffer[i+1] >= 'A' && Buffer[i+1] <= 'Z') || Buffer[i + 1] == '-' || Buffer[i] == '\n')
    {
        write(1, "specify what you wish to do with help\n", 39);
        loop(username);
    }
}

