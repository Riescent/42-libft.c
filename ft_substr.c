/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 17:07:00 by vfries            #+#    #+#             */
/*   Updated: 2022/11/08 15:07:15 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*result;
	size_t	result_size;

	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= start)
		return (ft_strdup(""));
	s += start;
	result_size = 0;
	while (s[result_size] && result_size < len)
		result_size++;
	result = malloc(sizeof(char) * ++result_size);
	if (result != NULL)
		ft_strlcpy(result, s, result_size);
	return (result);
}
