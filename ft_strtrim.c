/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 13:16:41 by mramena           #+#    #+#             */
/*   Updated: 2025/03/13 10:55:35 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*m_s1;
	size_t	i;

	m_s1 = (char *)s1;
	while (ft_strchr(set, m_s1[0]) && m_s1[0] != '\0')
		m_s1++;
	if (m_s1[0] == '\0')
	{
		m_s1 = malloc(sizeof(char));
		m_s1[0] = '\0';
		return (m_s1);
	}
	i = ft_strlen(m_s1) - 1;
	while (ft_strchr(set, m_s1[i]))
		i--;
	return (ft_substr(m_s1, 0, i + 1));
}
