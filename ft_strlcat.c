/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 15:06:07 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/13 17:23:25 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	i;
	unsigned int	j;
	size_t			size_all;

	i = 0;
	j = 0;
	if (size < ft_strlen(dest))
		return (ft_strlen(src) + size);
	else if ((dest[0] == '\0') && size == 0)
		return (ft_strlen(src));
	size_all = ft_strlen(dest) + ft_strlen(src);
	while (dest[i] != '\0')
		i++;
	while ((src[j] != '\0') && (i < size - 1))
	{
		dest[i++] = src[j++];
	}	
	dest[i] = '\0';
	return (size_all);
}
/*
#include <bsd/string.h>
int	main(void)
{
	char	dest[30];
	char	dest2[30];
	char s1[] = "0123456789";
	char s2[] = "abcdef";
	char desta[50];
    char *s1a = s1;
    char *s2a = s2;
	int	n = 20;

	memset(dest, 0, 30);
	memset(dest2, 0 ,30);
	strcpy(desta, s1a);
	printf("or=%ld scon=%s\n", strlcat(dest, "123", 4), dest);
	printf("so=%ld scon=%s\n", ft_strlcat(dest2, "123", 4), dest2);
	return (0);
}*/
