#include "info.h"

void ft_cat(char *Buffer)
{
    write(1, Buffer, strlen(Buffer));
}