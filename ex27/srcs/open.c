/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   open.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyster <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 18:59:44 by soyster           #+#    #+#             */
/*   Updated: 2019/02/14 20:43:03 by soyster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

void	display(char *name)
{
	int		content;
	char	var;

	content = open(name, O_RDONLY);
	if (content < 0)
		return ;
	while (read(content, &var, 1))
		write(1, &var, 1);
	close(content);
}

int		main(int argc, char *argv[])
{
	if (argc == 2)
		display(argv[1]);
	else
	{
		if (argc == 1)
			write(2, "File name missing.\n", 19);
		if (argc > 2)
			write(2, "Too many arguments.\n", 20);
	}
	return (0);
}
