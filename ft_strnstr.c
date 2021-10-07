/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:44:31 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/23 11:44:33 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	k;

	i = 0;
	k = 0;
	if (*needle == 0)
		return ((char *)haystack);
	while ((i < len) && (haystack[i] != '\0') && (needle[k] != '\0'))
	{
		if (haystack[i] == needle[k])
		{
			k++;
			i++;
			if (needle[k] == 0)
				return ((char *)(haystack + i - k));
		}
		else
		{
			i = i - k + 1;
			k = 0;
		}
	}
	return (NULL);
}
