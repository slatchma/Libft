/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_lstnew.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: slatchma <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2017/11/23 16:16:08 by slatchma     #+#   ##    ##    #+#       */
/*   Updated: 2017/11/23 18:13:27 by slatchma    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list *neww;

	neww = (t_list*)malloc(sizeof(t_list));
	if (!neww)
		return (NULL);
	if (content)
	{
		neww->content = (void*)malloc(sizeof(content_size));
		if (!neww->content)
			return (NULL);
		ft_memcpy(neww->content, content, content_size);
		neww->content_size = content_size;
	}
	else
	{
		neww->content = NULL;
		neww->content_size = 0;
	}
	neww->next = NULL;
	return (neww);
}
