/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 14:25:45 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/22 14:25:47 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	len_d;
	size_t	len_s;

	i = 0;
	len_d = ft_strlen(dst);
	len_s = ft_strlen(src);
	if ((dst != 0) || (src != 0) || (dstsize != 0))
	{
		if (dstsize > len_d)
		{
			while ((i < (dstsize - 1 - len_d)) && (src[i] != '\0'))
			{
				dst[len_d + i] = src[i];
				i++;
			}
			dst[len_d + i] = '\0';
			return (len_d + len_s);
		}
		else
			return (len_s + dstsize);
	}
	return (0);
}
