/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 03:59:02 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/12/02 05:03:57 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"



void	ft_putnbr_fd(int n, int fd,int *t)
{
	
	if (n == -2147483648)
	{
		write(fd, "-2147483648", 11);
		*t += 10;
		return ;
	}
	if(n < 0)
		*t += 1;
	if (n < 0)
	{
		n *= -1;
		ft_putchar_fd ('-', fd);
		
	}
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_putnbr_fd(n / 10, fd,t);
		ft_putnbr_fd(n % 10, fd,t);
		*t += 1;
	}
}
