/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slourenc <slourenc@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 17:07:03 by slourenc          #+#    #+#             */
/*   Updated: 2023/01/07 02:36:06 by slourenc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int i)
{
	while (*str != '\0')
	{
		if (*str == (unsigned char) i)
			return ((char *)str);
		str++;
	}
	if ((unsigned char) i == '\0')
		return ((char *)str);
	return (0);
}
