/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 03:42:35 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/19 12:29:09 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (!dst && !src)
		return (NULL);
	if (!len)
		return (dst);
	if (dst > src)
	{
		while (--i)
			((char *)dst)[i] = ((char *)src)[i];
		((char *)dst)[i] = ((char *)src)[i];
	}
	else
		dst = ft_memcpy(dst, src, len);
	return (dst);
}
