#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char 			*newstr;
	unsigned int	i;
	unsigned int 	j;
	
	if ((start > (unsigned char)ft_strlen(s)) || len == 0)
		return(0);
	newstr = (char *) malloc( (len + 1) * sizeof(char));
	if (newstr == NULL)
		return(0);
	i = 0;
	j = 0;
	while (i < start)
		i++;
	while ( i < (start + (unsigned int)len))
	{
		newstr[j++] = ((char *)s)[i++];
	}
	newstr[j] = '\0';
	return (newstr);
}
/*
#include <stdlib.h>
int main(void)
{
	const char *str = "Hello world_ bonjour tout le monde";
	char *newstr;
	unsigned int start = 36;
	size_t len = 10;

	newstr = ft_substr(str, start, len);
	printf("%s\n", newstr);
	printf("len=%lld\n", ft_strlen(str));
	free(newstr);
}*/