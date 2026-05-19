/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/01 09:50:45 by syasin            #+#    #+#             */
/*   Updated: 2025/12/22 15:30:55 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	len_little;

	if (!*little)
		return ((char *)big);
	j = 0;
	i = 0;
	len_little = ft_strlen(little);
	while (i + len_little <= len && big[i])
	{
		while (j < len_little && big[i + j] && little[j])
		{
			if (big[i + j] != little[j])
				break ;
			j++;
		}
		if (j == len_little)
			return ((char *)&big[i]);
		i++;
	}
	return (NULL);
}
