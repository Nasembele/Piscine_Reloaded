/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soyster <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 22:46:22 by soyster           #+#    #+#             */
/*   Updated: 2019/04/09 16:41:38 by soyster          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int			ft_str_lenght(char *str1)
{
	int		lenght;

	lenght = 0;
	while (str1[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

char		*ft_str_copy(char *str1, char *str2)
{
	int		i;

	i = 0;
	while (str1[i] != '\0')
	{
		str2[i] = str1[i];
		i++;
	}
	str2[i] = '\0';
	return (str2);
}

char		*ft_strdup(char *str1)
{
	char	*newstring;

	newstring = (char*)malloc(sizeof(*newstring) * (ft_str_lenght(str1) + 1));
	if (newstring == NULL)
		return (0);
	ft_str_copy(str1, newstring);
	return (newstring);
}
