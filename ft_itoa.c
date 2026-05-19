/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 13:57:41 by syasin            #+#    #+#             */
/*   Updated: 2025/12/18 14:22:51 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static size_t	size(long nn)
{
	size_t		i;

	i = 1;
	if (nn < 0)
	{
		nn *= -1;
		i++;
	}
	while (nn / 10 > 0)
	{
		nn = nn / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*c;
	size_t	len;
	long	nb;

	nb = n;
	len = size(nb);
	c = (char *)malloc((len + 1) * sizeof(char));
	if (!c)
		return (NULL);
	c[len] = '\0';
	if (nb == 0)
		c[0] = '0';
	if (nb < 0)
	{
		nb *= -1;
		c[0] = '-';
	}
	while (nb > 0)
	{
		c[--len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (c);
}
