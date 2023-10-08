#include <unistd.h>
#include "info.h"

char *ft_strcat(char *username, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (username[i])
	{
		i++;
	}
	while (src[j])
	{
		username[i] = src[j];
		i++;
		j++;
	}
	username[i] = '\0';
	return (username);
}
