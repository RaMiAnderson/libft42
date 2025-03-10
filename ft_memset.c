/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 14:04:18 by mramena           #+#    #+#             */
/*   Updated: 2025/03/04 14:26:34 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memset(void *s, int c, size_t n)
{
	char	*tmp;
	size_t	i;

	tmp = (char *)s;
	i = 0;
	while (i < n)
	{
		tmp[i] = (char)c;
		i++;
	}
	return (s);
}
