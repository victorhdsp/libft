/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 14:47:31 by vide-sou          #+#    #+#             */
/*   Updated: 2024/10/11 19:27:43 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, char *src, size_t size)
{
	size_t	dst_len;
	size_t	dst_index;
	size_t	index;

	index = 0;
	dst_len = ft_strlen(dst);
	dst_index = dst_len;
	while (dst_index + 1 < size && src[index])
	{
		dst[dst_index] = src[index];
		index++;
		dst_index++;
	}
	dst[dst_index] = '\0';
	if (size < dst_len)
		dst_len = size;
	return (dst_len + ft_strlen(src));
}
