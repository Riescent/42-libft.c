/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:43:45 by vfries            #+#    #+#             */
/*   Updated: 2022/11/07 19:25:19 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*new_str;
	size_t	result_size;

	result_size = ft_strlen(s1) + 1;
	new_str = malloc(sizeof(char) * result_size);
	if (new_str == NULL)
		return (NULL);
	ft_strlcpy(new_str, s1, result_size);
	return (new_str);
}
