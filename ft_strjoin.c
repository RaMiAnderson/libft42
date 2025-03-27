/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 12:38:12 by mramena           #+#    #+#             */
/*   Updated: 2025/03/12 15:30:09 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_strcat(char **destt, const char *src, size_t l)
{
	size_t	i;
	char	*dest;

	dest = *destt;
	i = 0;
	while (src[i])
	{
		dest[l + i] = src[i];
		i++;
	}
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_s;
	size_t	l_s1;
	size_t	l_s2;

	l_s1 = ft_strlen(s1);
	l_s2 = ft_strlen(s2);
	new_s = malloc((l_s1 + l_s2 + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	ft_strcat(&new_s, s1, 0);
	ft_strcat(&new_s, s2, l_s1);
	new_s[l_s1 + l_s2] = '\0';
	return (new_s);
}
