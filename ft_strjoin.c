/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 11:14:41 by syasin            #+#    #+#             */
/*   Updated: 2025/12/18 13:20:04 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char		*con;
	size_t		i;
	size_t		j;

	if (!s1 || !s2)
		return (0);
	i = ft_strlen(s1);
	j = ft_strlen(s2);
	con = (char *)malloc((i + j + 1) * sizeof(char));
	if (!con)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		con[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		con[i + j] = s2[j];
		j++;
	}
	con[i + j] = '\0';
	return (con);
}
