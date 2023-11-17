/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sonouelg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/12 15:56:55 by sonouelg          #+#    #+#             */
/*   Updated: 2023/11/12 16:15:24 by sonouelg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}
/*
int	main(void)
{
	char *file = "toto.txt";
	char s[] = "hello word";
	int	fd;
	fd = open(file, O_RDWR);
	printf("fd=%d",fd);
	ft_putstr_fd(s, fd);
	close(fd);
	return (0);
}*/
