/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/02 15:31:03 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/12/06 00:59:58 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_unsigned_fd(unsigned int n, int fd, int *t)
{
	if (n < 10)
		ft_putchar_fd(n + 48, fd);
	else
	{
		ft_unsigned_fd(n / 10, fd, t);
		ft_unsigned_fd(n % 10, fd, t);
		*t += 1;
	}
}
