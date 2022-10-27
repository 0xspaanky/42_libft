/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 03:29:45 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/16 21:32:40 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned int	i;
	unsigned char	*ptr_s;

	ptr_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (ptr_s[i] == (unsigned char)c)
			return ((void *)(s + i));
		i++;
	}
	return (NULL);
}

// int main()
// {
//     int p[] = {5,16777412,500,6};
//     int *c = ft_memchr(p, 1, 10);
//     int i =0;
//     while (i < 2)
//     {
//         printf("%d\n",c[i]);
//         i++;
//     }
// }