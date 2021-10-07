/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/20 15:30:39 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/20 15:30:43 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_help(unsigned char *d, unsigned char *s, int i)
{
	while (i > 0)
	{
		d[i] = s[i];
		i--;
	}
	d[0] = s[0];
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;

	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	if ((d != 0) || (s != 0))
	{
		if (len != 0)
		{
			if (d < s)
				dst = ft_memcpy(d, s, len);
			else
			{
				i = len - 1;
				ft_help(d, s, i);
			}
		}
		return (dst);
	}
	return (NULL);
}
