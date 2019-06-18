/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 16:48:54 by cyuriko           #+#    #+#             */
/*   Updated: 2019/06/18 16:04:50 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	slen(char const *s1, char const *s2)
{
	int len;

	len = 0;
	while (*s1)
	{
		s1++;
		len++;
	}
	while (*s2)
	{
		s2++;
		len++;
	}
	return (len);
}

char		*ft_strjoin(char const *s1, char const *s2)
{
	char	*result;
	int		len;

	if (!s1 || !s2)
		return (NULL);
	len = slen(s1, s2) + 1;
	result = (char*)malloc((len) * sizeof(char));
	if (result == NULL)
		return (NULL);
	while (*s1)
	{
		*result = *s1;
		result++;
		s1++;
	}
	while (*s2)
	{
		*result = *s2;
		result++;
		s2++;
	}
	*result = '\0';
	while (len-- > 1)
		result--;
	return (result);
}
