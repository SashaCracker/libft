/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 09:38:44 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/26 09:38:46 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char 	*ft_subft(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*str;
	size_t	ln;

	i = 0;
	ln = ft_strlen(s) + 1 - start;
	if (ln > (len + 1))
		ln = len + 1;
	str = (char *) malloc(sizeof(char) * ln);
	if (str == 0)
		return (NULL);
	while ((*s) && (len > 0))
	{
		str[i] = s[start];
		i++;
		start++;
		len--;
	}
	str[i] = '\0';
	return (str);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	ln;

	if (s == 0)
		return (0);
	ln = ft_strlen(s) + 1 - start;
	if (ln > (len + 1))
		ln = len + 1;
	if ((ln > 0) && (start < ft_strlen(s) && (*s != '\0')))
	{
		str = ft_subft(s, start, len);
		return (str);
	}
	else
	{
		str = (char *) malloc(1);
		*str = '\0';
		return (str);
	}
}
