/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slourenc <slourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:08:37 by slourenc          #+#    #+#             */
/*   Updated: 2023/01/07 05:31:43 by slourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	nwords(char const *s, char c)
{
	int		result;
	int		pos;
	int		state;

	result = 0;
	pos = 0;
	state = 0;
	while (s[pos])
	{
		if (s[pos] == c)
			state = 0;
		else
		{
			if (state == 0)
			{
				result++;
				state = 1;
			}	
		}
		pos++;
	}
	return (result);
}

static	int	wlen(const char *s, char c)
{
	int		size;

	size = 0;
	while (s[size] != c && s[size] != '\0')
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		pos;
	int		pos_res;
	int		word_size;

	pos = 0;
	pos_res = 0;
	result = (char **)ft_calloc(nwords(s, c) + 1, sizeof(char *));
	if (result == NULL)
		return (NULL);
	while (s[pos])
	{
		if (s[pos] == c)
			pos++;
		else
		{
			word_size = wlen(&s[pos], c);
			result[pos_res] = (char *)ft_calloc(word_size + 1, sizeof(char));
			ft_strlcpy(result[pos_res], &s[pos], word_size + 1);
			pos_res++;
			pos = pos + word_size;
		}
	}
	return (result);
}
