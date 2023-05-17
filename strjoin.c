/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strjoin.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ramhouch <ramhouch@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 03:21:24 by hidhmmou          #+#    #+#             */
/*   Updated: 2023/05/11 16:51:42 by ramhouch         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 *_strjoin - Concatenates two strings
 *@s1:The first string
 *@s2:The second string
 *
 *Return: A pointer to the concatenated string
 */
#include "shell.h"

char	*_strjoin(char *s1, char *s2)
{
	char	*str;
	int		len_1;
	int		len_2;
	int		i;

	i = 0;
	if (!s2)
		return (0);
	if (!s1)
		s1 = _strdup("");
	len_1 = _strlen(s1);
	len_2 = _strlen(s2);
	str = malloc(sizeof(char) * len_1 + len_2 + 1);
	if (!str)
		return (0);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i])
		str[len_1++] = s2[i++];
	str[len_1] = 0;
	free(s1);
	return (str);
}
