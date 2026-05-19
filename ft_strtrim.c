/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 12:10:51 by syasin            #+#    #+#             */
/*   Updated: 2025/12/18 13:23:47 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	check(char c, char const *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (c == s[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	char	*c;
	size_t	t;

	if (!s1 || !set)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (s1[i] && check(s1[i], set))
		i++;
	while (j > i && check(s1[j - 1], set))
		j--;
	c = (char *)malloc((j - i + 1) * sizeof(char));
	if (!c)
		return (NULL);
	t = 0;
	while (i < j)
	{
		c[t++] = s1[i++];
	}
	c[t] = '\0';
	return (c);
}
