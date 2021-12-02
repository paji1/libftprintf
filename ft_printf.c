/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 13:22:19 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/12/02 16:44:01 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "ft_printf.h"
 static int litters(va_list *a, const char *s,int i, int t)
 {

	t = 0;
	if (s[i+1] == 'c')
		ft_putchar_fd(va_arg(*a,int),1);
	else if (s[i+1] == 's')
		t = ft_putstr_fd(va_arg(*a,char *),1);
	else if (s[i+1] == '%')
		ft_putchar_fd('%',1);
	else if (s[i+1] == 'd' || s[i+1] == 'i')
		ft_putnbr_fd(va_arg(*a,int),1,&t);
	else if (s[i+1] == 'u')
		ft_unsigned_fd(va_arg(*a,unsigned int),1,&t);
	else if (s[i+1] == 'x' || s[i+1] == 'X')
		t = ft_hexa_fd(va_arg(*a,long),1,s[i+1]);
	else if (s[i+1] == 'x' || s[i+1] == 'X')
		t = ft_hexa_fd(va_arg(*a,long),1,s[i+1]);
	else if (s[i+1] == 'p')
	{
		ft_putstr_fd("0x",1);
		t = ft_adress_fd(va_arg(*a,long),1,'x') +2 ;
	}
	return t;
 }

int	ft_printf(const char *s, ...)
{
	int	i;
	int	t;
	int r;

	t = 0;
	i = -1;
	r = 0;
	va_list a;
	va_start(a,s);
	while(s[++i])
	{
		if(s[i] == '%' && s[i+1])
			t += litters(&a, s,i++,r);
		else
			ft_putchar_fd(s[i],1);
		t++;
	}
	va_end(a);
	return t;
}
