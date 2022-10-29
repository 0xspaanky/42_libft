/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <smounafi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/18 23:07:31 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/28 22:01:21 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len_s1;
	size_t	i;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	len_s1 = ft_strlen(s1);
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	while (len_s1 > i && ft_strchr(set, s1[len_s1]))
		len_s1--;
	return (ft_substr(s1, i, len_s1 - i + 1));
}
