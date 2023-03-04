/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: martavar <martavar@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 14:01:04 by martavar          #+#    #+#             */
/*   Updated: 2022/11/11 14:29:34 by martavar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*clear;

	if (!lst || !*lst)
		return ;
	while (*lst)
	{
		clear = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = clear;
	}
	lst = NULL;
}
