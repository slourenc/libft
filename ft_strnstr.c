/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slourenc <slourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:07:49 by slourenc          #+#    #+#             */
/*   Updated: 2023/01/08 15:09:53 by slourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	size_of_little;

	i = 0;
	size_of_little = (size_t)ft_strlen(little);
	if (size_of_little > (size_t)ft_strlen(big))
		return (0);
	if (little[i] == '\0')
		return ((char *)(big));
	while (i < len)
	{
		if (i + size_of_little > len)
			break ;
		if (ft_strncmp(&big[i], little, size_of_little) == 0)
			return ((char *)(&big[i]));
		i++;
	}
	return (0);
}
