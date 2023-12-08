#ifndef HEADER_FILE
#define HEADER_FILE

//_________INCLUDES__________//
#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <time.h>

//_________VARIABLES__________//

extern char *commands[];

//_________FUNCTIONS__________//
int				ft_strcmp(char *a1, char *a2);
void			user_input(char Buffer[100], char username[10]);
void			loop(char username[10]);
void			ft_cat(char Buffer[100], char username[10]);
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size);
char 			openfile(char *filename);
void			ft_echo(char Buffer[100], char username[10]);
void			ft_exit(char Buffer[100], char username[10]);
void			ft_help(char Buffer[100], char username[10]);
int				ft_date();
void			loading_animation();

#endif