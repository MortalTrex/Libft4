#include <string.h>

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize > 0)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	i = 0;
	while (src[i])
		i++;
	return (i);
}

/*
#include <stdio.h>
int main()
{
  char source[] = "coucou";
	char destination[10]; memset(destination, 'A', 10);
  printf("Resultat de la fonction :%ld\n", ft_strlcpy(destination, source, 1));
  printf("Chaine destination :%s\n", destination);  
}
*/
