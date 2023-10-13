#include "info.h"

int ft_strcmp(char *a1, char *a2)
{
    int i = 0;
    while(a1[i] && a2[i] && a1[i] == a2[i])
        i++;
    return(a1[i] - a2[i]);
}