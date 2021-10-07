/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 17:19:40 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/22 17:19:43 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = (int)(ft_strlen(s));
	while (i >= 0)
	{
		if (s[i] == ((char) c))
		{
			return ((char *)(s + i));
		}
		i--;
	}
	return (0);
}
