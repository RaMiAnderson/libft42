/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mramena <mramena@student.42antananarivo    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/09 08:46:26 by mramena           #+#    #+#             */
/*   Updated: 2025/03/10 08:58:19 by mramena          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int		cpt;

	if (!lst)
		return (0);
	cpt = 0;
	while (lst != NULL)
	{
		cpt++;
		lst = lst->next;
	}
	return (cpt);
}
