/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 16:27:30 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/12 16:57:37 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		ft_putchar_fd(s[i], fd);
		i++;
	}
	ft_putchar_fd('\n', fd);
}
/*
int	main(void)
{
	char *file = "toto.txt";
	char s[] = "hello world";
	int	fd;
	fd = open(file, O_RDWR);
	ft_putendl_fd(s, fd);
	ft_putstr_fd("MIAOU", fd);
	close(fd);
	return (0);
}*/
