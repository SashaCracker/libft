/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 16:58:19 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/21 16:58:21 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*src;
	unsigned char	symb;

	i = 0;
	src = (unsigned char *) s;
	symb = (unsigned char) c;
	while (i < n)
	{
		if (src[i] != symb)
		{
			i ++;
		}
		else
		{
			src = &src[i];
			return (src);
		}
	}
	return (NULL);
}
