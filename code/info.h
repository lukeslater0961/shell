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
void ft_cat();
unsigned int	ft_strlcat();
char openfile();
void ft_echo();
void ft_exit();
void ft_help();
int ft_date();

#endif