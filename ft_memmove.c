/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/04 15:13:21 by mramena           #+#    #+#             */
/*   Updated: 2025/03/05 14:47:42 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char	*m_dest;
	char	*m_src;

	m_dest = (char *)dest;
	m_src = (char *)src;
	while (n - 1)
	{
		m_dest[n - 1] = m_src[n - 1];
		n--;
	}
	return (dest);
}
