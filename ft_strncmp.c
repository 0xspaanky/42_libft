/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 03:23:15 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/16 22:19:05 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	if (!n)
		return (0);
	while (p1[i] && p2[i] && p1[i] == p2[i] && i < (n - 1))
		i++;
	return (p1[i] - p2[i]);
}

/*int main()
{
    char *s1 = NULL;
    char *s2 = "NULL";

    //printf("Theirs : %d\n", strncmp(s1, s2, 4));
    //printf("Mine : %d", ft_strncmp(s1, s2, 4));
}*/
