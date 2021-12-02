/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 01:20:48 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/22 08:56:40 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*p;
	unsigned int	i;
	int				len;

	if (!s || !f)
		return (0);
	len = ft_strlen(s);
	i = -1;
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	while (s[++i])
		p[i] = f(i, s[i]);
	p[i] = 0;
	return (p);
}
