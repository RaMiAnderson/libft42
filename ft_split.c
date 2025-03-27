/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 16:23:42 by mramena           #+#    #+#             */
/*   Updated: 2025/03/13 11:10:24 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_count_word(char const *s, char c)
{
	size_t	cpt;
	size_t	i;

	i = 0;
	cpt = 0;
	while (s[i] != '\0')
	{
		while ((s[i] == c) && (s[i] != '\0'))
			i++;
		if ((s[i] != c) && (s[i] != '\0'))
		{
			cpt += 1;
			while ((s[i] != c) && (s[i] != '\0'))
				i++;
		}
	}
	return (cpt);
}

static char	*ft_copy(char *str, size_t start, size_t len)
{
	size_t	i;
	char	*tmp;

	i = 0;
	tmp = malloc((len + 1) * sizeof(char));
	while ((i < len) && str[i] != '\0')
	{
		tmp[i] = str[start + i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}

static char	**ft_set_tab(char **result, char *m_s, char c, size_t n)
{
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	while (i < n)
	{
		k = 0;
		while ((m_s[j] == c) && (m_s[j] != '\0'))
			j++;
		while ((m_s[j] != c) && (m_s[j] != '\0'))
		{
			j++;
			k++;
		}
		result[i] = ft_copy(m_s, (j - k), k);
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	char	*m_s;
	size_t	cpt_words;

	m_s = (char *)s;
	cpt_words = ft_count_word(m_s, c);
	result = malloc((cpt_words + 1) * sizeof(char *));
	if (result == NULL)
		return (NULL);
	result = ft_set_tab(result, m_s, c, cpt_words);
	return (result);
}
