/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 23:55:27 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/27 04:37:50 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*p;
	size_t	i;
	char	c_casted;

	i = 0;
	p = (char *)s;
	c_casted = (char)c;
	if (p[i] != c_casted)
		i++;
	while (i < ft_strlen(s) + 1)
	{
		if (p[i] == c_casted)
			return (p + i);
		i++;
	}
	return (0);
}
