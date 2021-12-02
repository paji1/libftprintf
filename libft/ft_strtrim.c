/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tel-mouh <tel-mouh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 18:20:53 by tel-mouh          #+#    #+#             */
/*   Updated: 2021/11/18 07:56:38 by tel-mouh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1)
		return (NULL);
	if (!*s1)
		return (ft_strdup(""));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	if (!*(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[len]) && s1[len])
		len--;
	return (ft_substr(s1, 0, len + 1));
}
