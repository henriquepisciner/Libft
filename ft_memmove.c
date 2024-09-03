/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hfuta <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 22:54:47 by hfuta             #+#    #+#             */
/*   Updated: 2024/05/18 22:54:53 by hfuta            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	if (s == d)
		return (dst);
	if (s < d)
	{
		while (len--)
		{
			*(d + len) = *(s + len);
		}
		return (dst);
	}
	else
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	return (dst);
}
