/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/08 10:43:31 by mramena           #+#    #+#             */
/*   Updated: 2025/03/13 11:07:57 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(int n)
{
	size_t		cpt;
	long int	new_n;

	cpt = 0;
	new_n = n;
	if (new_n < 0)
	{
		cpt++;
		new_n = new_n * (-1);
	}
	while (new_n > 0)
	{
		new_n /= 10;
		cpt++;
	}
	return (cpt);
}

static void	ft_second_part(long int *new_n, size_t *i, char *result)
{
	while (*new_n > 0)
	{
		result[*i] = (*new_n % 10) + '0';
		*new_n = *new_n / 10;
		*i = *i - 1;
	}
}

static void	ft_is_nzero(char **result)
{
	(*result) = malloc(2 * sizeof(char));
	(*result)[0] = '0';
	(*result)[1] = '\0';
}

char	*ft_itoa(int n)
{
	size_t		len_n;
	char		*result;
	size_t		i;
	long int	new_n;

	if (n == 0)
	{
		ft_is_nzero(&result);
		return (result);
	}
	len_n = ft_intlen(n);
	result = malloc((len_n + 1) * sizeof(char));
	if (result == NULL)
		return (NULL);
	new_n = n;
	if (new_n < 0)
	{
		new_n = -new_n;
		result[0] = '-';
	}
	i = len_n - 1;
	ft_second_part(&new_n, &i, result);
	result[len_n] = '\0';
	return (result);
}
