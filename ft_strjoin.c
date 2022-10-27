/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 18:45:05 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/18 22:34:49 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*p;
	size_t	len;
	size_t	i;
	size_t	j;

	len = ft_strlen(s1) + ft_strlen(s2);
	p = (char *)malloc(len + 1);
	if (!p)
		return (NULL);
	i = -1;
	while (s1[++i])
	{
		if (i <= ft_strlen(s1))
			p[i] = s1[i];
	}
	j = -1;
	while (s2[++j])
	{
		if (i < len)
			p[i] = s2[j];
		i++;
	}
	p[i] = '\0';
	return (p);
}
