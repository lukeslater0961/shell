#include <unistd.h>
#include "info.h"

int ft_strlen(char *s)
{
    int i = 0;
    while(s[i] != '\0')
        i++;
    return i;
}