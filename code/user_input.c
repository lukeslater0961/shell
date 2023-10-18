#include "info.h"

void user_input(char Buffer[100], char username[10]) 
{
    if (strncmp(Buffer, "help", 4) == 0) {
        ft_help(Buffer);
    }
    else if(strncmp(Buffer, "cat", 3) == 0){
        ft_cat(Buffer, username);
    }
    else if(strncmp(Buffer, "echo", 4) == 0){
        ft_echo(Buffer, username);
    }
    else if(ft_strcmp(Buffer, "exit\n") == 0){
        ft_exit(Buffer, username);
    }
    else if(strncmp(Buffer, "date", 4) == 0){
        ft_date();
    }
    else{
        write(1, "command not found:", 18);
        write(1, Buffer, strlen(Buffer));
        loop(username);
    }
    
    loop(username);
}