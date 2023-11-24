/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 14:57:14 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/20 15:38:33 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*newstr;
	unsigned int	i;

	newstr = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (newstr == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		newstr[i] = f(i, s[i]);
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}
/*
char uppercase(unsigned int i, char c)
{
    if (i % 2 == 0)
        return toupper(c);
    else
        return tolower(c);
}
int main(void)
{
	const char *s = "Hello World";
	char	*s1;
	s1 = ft_strmapi(s, uppercase);
	printf("%s\n", s1);
	return (0);
}
*/	
