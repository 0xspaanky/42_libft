/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smounafi <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 02:46:57 by smounafi          #+#    #+#             */
/*   Updated: 2022/10/21 03:08:29 by smounafi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (i < ft_strlen(s))
	{
		write(fd, s + i, 1);
		i++;
	}
}

// #include <fcntl.h> 
// int main()
// {
//     int fd = open("test.txt", O_RDWR | O_CREAT);
//     char *s = "";
//     ft_putstr_fd(s,  fd);
//     printf("%d", fd);
// }