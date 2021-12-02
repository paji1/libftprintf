/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 11:11:02 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/18 02:53:13 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	t;

	t = 0;
	if (!dstsize)
		return (ft_strlen(src));
	while (src[t] && dstsize - 1)
	{
		dst[t] = src[t];
		t++;
		dstsize--;
	}
	dst[t] = 0;
	return (ft_strlen(src));
}
