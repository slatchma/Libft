/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstmap.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slatchma <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 20:08:42 by slatchma     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 23:18:53 by slatchma    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *))
{
	t_list	*debut;
	t_list	*suite;

	debut = NULL;
	if (lst != NULL)
	{
		debut = f(lst);
		if (debut == NULL)
			return (NULL);
		suite = debut;
		while (lst->next != NULL)
		{
			lst = lst->next;
			suite->next = f(lst);
			if (suite->next == NULL)
				return (NULL);
			suite = suite->next;
		}
	}
	return (debut);
}
