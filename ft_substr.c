/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vide-sou <vide-sou@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:30:36 by vide-sou          #+#    #+#             */
/*   Updated: 2024/10/12 12:36:13 by vide-sou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	void	*result;

	if (start > ft_strlen(s))
		return (ft_calloc(1, sizeof(char)));
	s += start;
	if (len > ft_strlen(s))
		len = ft_strlen(s);
	result = ft_calloc(len + 1, sizeof(char));
	if (result == NULL)
		return (NULL);
	result = ft_memmove(result, s, len);
	return ((char *)result);
}
