/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 14:35:17 by vfries            #+#    #+#             */
/*   Updated: 2022/10/09 18:07:16 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	while (n > 0)
	{
		if (*(char *)s1 < *(char *)s2
			|| *(char *)s1 > *(char *)s2)
			return (*(char *)s1 - *(char *)s2);
		s1++;
		s2++;
		n--;
	}
	return (0);
}
