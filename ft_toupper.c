char	ft_toupper(char c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

/*
#include <stdio.h>
int main()
{
	char c = 'r';
	printf("%c", ft_toupper(c));
}
*/
