/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 01:54:34 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/16 22:44:17 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	c_casted;
	int		i;

	i = ft_strlen(s);
	p = (char *)s;
	c_casted = (char )c;
	if (!s)
		return (NULL);
	while (i >= 0)
	{
		if (s[i] == c_casted)
			return (p + i);
		i--;
	}
	return (NULL);
}

/*int main()
{
    char t[] = "AAAbcbDee";

    printf("Theirs : %s\n", strrchr(t, 'b'));
    printf("Mine : %s", ft_strrchr(t, 'b'));
}*/
