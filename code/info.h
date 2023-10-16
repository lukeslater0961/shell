#ifndef HEADER_FILE
#define HEADER_FILE

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

extern char Buffer;
extern char username;

int ft_strlen();
char input();
char *ft_strcat(); 
int ft_strcmp();
void user_input();
void loop();
int	ft_strncmp();
void ft_cat();
unsigned int	ft_strlcat();
void openfile();
void ft_echo();

#endif