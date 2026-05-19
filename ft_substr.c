/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 10:46:05 by syasin            #+#    #+#             */
/*   Updated: 2025/12/22 16:10:25 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*c;
	size_t		i;
	size_t		slen;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		len = slen - start;
	c = (char *)malloc((len + 1) * sizeof(char));
	if (!c)
		return (NULL);
	while (i < len)
	{
		c[i] = s[i + start];
		i++;
	}
	c[i] = '\0';
	return (c);
}
