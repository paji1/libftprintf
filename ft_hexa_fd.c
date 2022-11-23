/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hexa_fd.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/01 18:58:40 by tel-mouh          #+#    #+#             */
/*   Updated: 2022/11/23 06:21:27 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"

static int	lennum(unsigned int n, int base)
{
	int	i;

	i = 0;
	if (!n)
		return (1);
	while (n > 0)
	{
		n /= base;
		i++;
	}
	return (i);
}

int	ft_hexa_fd(unsigned int n, int fd, char c)
{
	char	*m;
	char	*t;
	char	*s;

	m = "0123456789ABCDEF";
	t = "0123456789abcdef";
	if (c == 'x')
		s = t;
	else
		s = m;
	if (n < 16)
		ft_putchar_fd(s[n], fd);
	else
	{
		ft_hexa_fd(n / 16, fd, c);
		ft_hexa_fd(n % 16, fd, c);
	}
	return (lennum(n, 16) - 1);
}
