/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/29 16:50:51 by syasin            #+#    #+#             */
/*   Updated: 2025/12/21 13:13:44 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *ptr, int ch, size_t count)
{
	unsigned char		c;
	unsigned char		*p;

	p = (unsigned char *)ptr;
	c = (unsigned char)ch;
	while (count--)
	{
		if (*p == c)
			return ((void *)p);
		p++;
	}
	return (NULL);
}
