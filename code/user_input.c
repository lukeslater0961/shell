#include "info.h"

void user_input(char Buffer[100], char username[10]) 
{
    char *commands[] = {"↳ cat + (name of file in directory)", NULL}; 

    if (ft_strcmp(Buffer, "help\n") == 0) {
        int i = 0;
        while (commands[i] != NULL) {
            write(1, commands[i], strlen(commands[i]));
            write(1, "\n", 2);
            i++;
        }
    }
    else if(ft_strncmp(Buffer, "cat\n") == 0){
        ft_cat(Buffer, username);
    }
    else if(ft_strncmp(Buffer, "echo\n") == 0){
        ft_echo(Buffer, username);
    }
    else{
        write(1, "command not found:\t", 18);
        write(1, Buffer, strlen(Buffer));
        loop(username);
    }
    
    loop(username);
}