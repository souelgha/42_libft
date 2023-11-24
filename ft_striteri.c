/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/20 15:41:50 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/20 16:45:47 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
/*
void	iter(unsigned int i, char * s) 
{
	*s += i;
}
int main(void)
{
	char	*s = "0000000000";
	ft_striteri(s, iter);
	printf("s=%s\n", s);

}*/
