/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 00:57:10 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/12/06 08:05:55 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "libft/libft.h"
void	ft_unsigned_fd(unsigned int n, int fd,int *t);
int		ft_adress_fd(unsigned long int n, int fd,char c);
int		ft_hexa_fd(unsigned int n, int fd,char c);
void	ft_putnbr_fd(int n, int fd,int *t);
int		ft_putstr_printf_fd(char *s, int fd);
#endif