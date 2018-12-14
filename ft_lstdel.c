/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstdel.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slatchma <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:47:12 by slatchma     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 20:16:50 by slatchma    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	if (*alst)
	{
		while ((*alst) != NULL)
		{
			(*del)((*alst)->content, (*alst)->content_size);
			*alst = (*alst)->next;
		}
		ft_lstdelone(alst, (*del));
	}
}
