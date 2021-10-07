/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/21 13:38:32 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/21 13:38:35 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t			i;
	unsigned char	*d;
	unsigned char	*s;
	unsigned char	g;

	i = 0;
	g = (unsigned char) c;
	d = (unsigned char *) dst;
	s = (unsigned char *) src;
	while (i < n)
	{
		if (s[i] != g)
		{
			d[i] = s[i];
			i ++;
		}
		else
		{
			d[i] = s[i];
			dst = &d[i + 1];
			return (dst);
		}
	}
	return (NULL);
}
