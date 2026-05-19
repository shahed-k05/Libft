/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: syasin <syasin@learner.42.tech>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/20 13:37:02 by syasin            #+#    #+#             */
/*   Updated: 2025/12/21 11:30:04 by syasin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *str, char del)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (*str)
	{
		if (*str != del && i == 0)
		{
			i = 1;
			count++;
		}
		else if (*str == del)
			i = 0;
		str++;
	}
	return (count);
}

static char	*fill(char const *str, int start, int end)
{
	char	*s;
	int		i;

	i = 0;
	s = (char *)malloc((end - start + 1) * sizeof(char));
	if (!s)
		return (NULL);
	while (start < end)
	{
		s[i] = str[start];
		start++;
		i++;
	}
	s[i] = '\0';
	return (s);
}

static void	free_all(char **a, int t)
{
	while (t > 0)
	{
		free(a[t - 1]);
		t--;
	}
	free(a);
}

static int	word_len(char const *str, char del, int i)
{
	int	j;

	j = i;
	while (str[j] && str[j] != del)
	{
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char	**a;
	int		i;
	int		t;

	i = 0;
	t = 0;
	a = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!a)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c && (i == 0 || s[i - 1] == c))
		{
			a[t] = fill(s, i, word_len(s, c, i));
			if (!a[t])
			{
				free_all(a, t);
				return (NULL);
			}
			t++;
		}
		i++;
	}
	return (a[t] = NULL, a);
}
