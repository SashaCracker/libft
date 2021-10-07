/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 11:00:42 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/26 11:00:43 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*resfin;
	size_t	m;

	if ((set == 0) || (s1 == 0))
		return (NULL);
	m = 0;
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	m = ft_strlen(s1);
	while (ft_strchr(set, s1[m - 1]) && (m > 0))
		m--;
	if (m == 0)
	{
		resfin = malloc(sizeof(char) * 1);
		if (resfin == 0)
			return (NULL);
		resfin[0] = '\0';
	}
	resfin = malloc(sizeof(char) * (m + 1));
	if (resfin == 0)
		return (NULL);
	ft_strlcpy(resfin, s1, (m + 1));
	return (resfin);
}
