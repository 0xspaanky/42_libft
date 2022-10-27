/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 01:53:04 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/20 18:55:56 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*ptr_dest;
	char	*ptr_src;

	ptr_dest = (char *)dest;
	ptr_src = (char *)src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		ptr_dest[i] = ptr_src[i];
		i++;
	}
	return (ptr_dest);
}

/*
int main()
{
    char src[] = "move this";
    char dest[10] = "";

    printf("Theirs : %s\n", memmove(dest, src, 9));
    printf("dest : %s", dest);
    printf("Mine : %s\n", ft_memmove(dest, src, 9));
    printf("dest : %s", dest);
}*/
