/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 11:32:17 by mramena           #+#    #+#             */
/*   Updated: 2025/03/13 11:06:33 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	ft_is_start_err(char **new_s)
{
	(*new_s) = malloc(sizeof(char));
	(*new_s)[0] = '\0';
}

static void	ft_second_part(unsigned int start, size_t len,
char const *s, char **new_s)
{
	size_t	i;
	size_t	j;

	j = start;
	i = 0;
	while (j < (start + len) && s[j] != '\0')
	{
		(*new_s)[i] = s[j];
		i++;
		j++;
	}
	(*new_s)[i] = '\0';
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_s;

	if (start > ft_strlen(s))
	{
		ft_is_start_err(&new_s);
		return (new_s);
	}
	if ((len > ft_strlen(s)) && start == 0)
		new_s = malloc((ft_strlen(s) + 1) * sizeof(char));
	else if (((len + start) > ft_strlen(s)))
		new_s = malloc((ft_strlen(s) - start + 1) * sizeof(char));
	else
		new_s = malloc((len + 1) * sizeof(char));
	if (new_s == NULL)
		return (NULL);
	ft_second_part(start, len, s, &new_s);
	return (new_s);
}
