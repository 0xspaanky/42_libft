/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/23 23:18:42 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/24 18:36:45 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	count(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			i++;
		else
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

char	**free_things(char **strings)
{
	int	i;

	i = 0;
	while (strings[i])
	{
		free(strings[i]);
		strings[i] = NULL;
		i++;
	}
	free(strings);
	strings = NULL;
	return (strings);
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		index;
	char	**string;

	j = 0;
	i = 0;
	index = 0;
	string = (char **) malloc (sizeof (char *) * (count(s, c) + 1));
	if (!string)
		return (NULL);
	while (*s)
	{
		if (*s == c)
			s++;
		else
		{
			j = 0;
			while (s[j] && s[j] != c)
				j++;
			string[index++] = ft_substr(s, 0, j);
			if (!string[index - 1])
				return (free_things(string));
			s += j;
		}
	}
	string[index] = NULL;
	return (string);
}

//handdle 25 lines



// int main()
// {
//     char str[] = "1137 #is#the best#aschool/for,all.time";
//     char **s;
//     int i=0;
//     s = ft_split(str, '#');
//     while(s[i])
//     {
//         printf("%s", s[i]);
//         i++;
//     }
// }