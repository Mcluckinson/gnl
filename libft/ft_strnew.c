/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cyuriko <cyuriko@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/21 13:41:01 by cyuriko           #+#    #+#             */
/*   Updated: 2019/06/18 16:04:50 by cyuriko          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char *fresh;

	if (!(fresh = ft_memalloc((size + 1) * sizeof(char)))
	|| size == 9223372036854775807)
		return (NULL);
	ft_memset(fresh, '\0', size + 1);
	return (fresh);
}
