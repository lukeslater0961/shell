#include "info.h"

int	ft_strncmp(char *s1, char *s2)
{
	unsigned int	i;
    unsigned int n = 3;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n)
	{
		i++;
	}
	if (i == n)
		return (0);
	return (s1[i] - s2[i]);
}

int ft_strcmp(char *a1, char *a2)
{
    int i = 0;
    while(a1[i] && a2[i] && a1[i] == a2[i])
        i++;
    return(a1[i] - a2[i]);
}


unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	res;

	i = 0;
	j = 0;
	res = 0;
	while (dest[i] != '\0')
		i++;
	while (src[res] != '\0')
		res++;
	if (size <= i)
		res += size;
	else
		res += i;
	while (src[j] != '\0' && (i + 1) < size)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (res);
}