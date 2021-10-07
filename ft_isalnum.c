/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sgummy <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 11:09:22 by sgummy            #+#    #+#             */
/*   Updated: 2021/04/23 11:09:24 by sgummy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (((c >= 48) && (c <= 57)) || ((c >= 65) && (c <= 90)) \
	|| ((c >= 97) && (c <= 122)))
	{
		return (c);
	}
	return (0);
}
