#include <string.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < n)
	{
		if (s1[i] != s2[i])
		  return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
	printf("Ma fonction : %d\n", ft_strncmp("", "1", 1));
	printf("La véritable fonction: %d\n", strncmp("", "1", 1));
}
*/
