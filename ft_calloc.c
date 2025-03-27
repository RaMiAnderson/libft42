/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 10:39:40 by mramena           #+#    #+#             */
/*   Updated: 2025/03/15 18:34:34 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*mem;
	size_t	n;

	if (size && nmemb > 4294967295 / size)
		return (NULL);
	n = nmemb * size;
	mem = malloc(n);
	if (!mem)
		return (NULL);
	ft_bzero(mem, (n));
	return (mem);
}
