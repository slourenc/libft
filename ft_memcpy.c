/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slourenc <slourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:06:30 by slourenc          #+#    #+#             */
/*   Updated: 2023/01/08 15:05:24 by slourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*char_dst;
	char		*char_src;

	char_src = (char *) src;
	char_dst = (char *) dest;
	i = 0;
	if (!dest && !src)
		return (0);
	while (i < n)
	{
	char_dst[i] = char_src[i];
	i++;
	}
	return (dest);
}
