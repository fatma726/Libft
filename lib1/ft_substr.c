/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faahmed <faahmed@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 11:29:33 by faahmed           #+#    #+#             */
/*   Updated: 2024/12/28 15:57:42 by faahmed          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	str_len;
	char	*substr;
	size_t	aloc;

	if (!s)
		return (NULL);
	str_len = ft_strlen(s);
	if (start >= str_len)
		return (ft_strdup(""));
	aloc = str_len - start;
	if (aloc > len)
		aloc = len;
	substr = malloc(aloc + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, aloc);
	substr[aloc] = '\0';
	return (substr);
}
