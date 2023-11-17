/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/13 09:00:48 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/13 14:02:57 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digit(int n)
{
	unsigned int	nb;
	int				i;

	i = 0;
	if (n == 0)
		return (1);
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

static int	sign_digit(int nbr)
{
	return (nbr < 0);
}

static void	ft_revstr(char *str)
{
	char	temp;
	size_t	i;
	size_t	size;

	size = ft_strlen((const char *)str);
	i = 0;
	while (i < (size / 2))
	{
		temp = str[i];
		str[i] = str[size -1 - i];
		str[size - 1 - i] = temp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char			*str;
	int				i;
	unsigned int	nb;

	str = malloc((count_digit(n) + sign_digit(n) + 1) * sizeof(char));
	if (str == NULL)
		return (0);
	if (n == 0)
		str[n] = '0';
	i = 0;
	if (sign_digit(n) == 1)
	{
		nb = -n;
		str[count_digit(n)] = '-';
	}
	else
		nb = n;
	while (nb != 0)
	{		
		str[i++] = nb % 10 + '0';
		nb = nb / 10;
	}
	ft_revstr(str);
	return (str);
}
/*
#include	<limits.h>	
int	main(void)
{
//	int	n = INT_MAX;
	int n = -14580;
	char *str;
	printf("count=%d\n", count_digit(n));
	printf("sign=%d\n", sign_digit(n));
	str = ft_itoa(n);
	printf("%s\n", str);
	free(str);
	return (0);
}*/
