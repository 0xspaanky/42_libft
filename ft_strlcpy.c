/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:05:31 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/16 22:14:41 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ls;

	ls = ft_strlen(src);
	i = 0;
	if (dstsize == 0)
		return (ls);
	if (dst && src)
	{
		while (src[i] && i < dstsize - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
		return (ls);
	}
	else
		return (ls);
}

/*int main()
{
    char t[] = "AAAA";
    char y[] = "BBBB";
    printf("%zu\n", ft_strlcpy(t, y , 2));
    //printf("%s\n", t);
    printf("%zu\n", strlcpy(t, y, 2));
    //printf("%s", t);
}*/
