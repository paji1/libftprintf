/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 14:50:01 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/18 07:53:52 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!needle[0])
		return ((char *)haystack);
	while (haystack[i] && *needle && i < len)
	{
		if (haystack[i] == needle[j] && needle[j])
		{
			while (needle[j] && needle[j] == haystack[i + j] \
				&& i + j < len)
				j++;
			if (!needle[j])
				return ((char *)(haystack + i));
			j = 0;
		}
		i++;
	}
	return (0);
}
