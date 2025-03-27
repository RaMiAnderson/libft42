/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 09:25:19 by mramena           #+#    #+#             */
/*   Updated: 2025/03/15 18:42:32 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_s;
	size_t			i;

	s_s = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if ((unsigned char)c == s_s[i])
			return ((void *)(s_s + i));
		i++;
	}
	return (NULL);
}
