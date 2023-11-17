#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char			*newstr;
	unsigned int	i;
	unsigned int	j;

	if (s1 == 0 && s2 == 0)
	{
		newstr = malloc(1);
		return (newstr);
	}
	newstr = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
		if (newstr == NULL)
			return (0);
	i = 0;
	j = 0;
	while (i < ft_strlen(s1))
	{
		newstr[i] = ((char *)s1)[i];
		i++;
	}
	while ( j < ft_strlen(s2))
		newstr[i + j] = ((char *)s2)[j]; 
	newstr[i + j] = '\0';
	return (newstr);
}

#include <stdlib.h>
#include <stdio.h>
int main(void)
{
	char const	*s1 = "b";
	char const	*s2 = "t";
	char	*newstr;

	newstr = ft_strjoin(s1, s2);
	printf("newstr=%s\n", newstr);
	free(newstr);
	return(0);
}