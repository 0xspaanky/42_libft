/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 17:50:29 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/20 18:55:29 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*p;
	size_t			len_s;

	if (!s || !f)
		return (NULL);
	len_s = ft_strlen(s);
	if (!s)
		return (NULL);
	p = (char *)malloc(len_s + 1);
	if (!p)
		return (NULL);
	i = 0;
	while (s[i] && i < len_s)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}
