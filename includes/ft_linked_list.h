/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_linked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vfries <vfries@student.42lyon.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 11:01:01 by vfries            #+#    #+#             */
/*   Updated: 2022/12/18 12:07:05 by vfries           ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LINKED_LIST_H
# define FT_LINKED_LIST_H

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

t_list		*ft_lst_get_next_free_current(t_list *lst, void (*del)(void *));
void		ft_lst_reverse(t_list **lst);
void		ft_lstadd_back(t_list **lst, t_list *new);
void		ft_lstadd_front(t_list **lst, t_list *new);
void		ft_lstclear(t_list **lst, void (*del)(void *));
void		ft_lstdelone(t_list *lst, void (*del)(void *));
void		ft_lstiter(t_list *lst, void (*f)(void *));
t_list		*ft_lstlast(t_list *lst);
t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));
t_list		*ft_lstnew(void *content);
int			ft_lstsize(t_list *lst);

typedef struct s_list_i
{
	int				content;
	struct s_list_i	*next;
}	t_list_i;

void		ft_lsti_add_back(t_list_i **lst, t_list_i *new);
void		ft_lsti_add_front(t_list_i **lst, t_list_i *new);
void		ft_lsti_clear(t_list_i **lst);
void		ft_lsti_delone(t_list_i *lst);
t_list_i	*ft_lsti_get_next_free_current(t_list_i *lst);
void		ft_lsti_iter(t_list_i *lst, void (*f)(int *));
t_list_i	*ft_lsti_last(t_list_i *lst);
t_list_i	*ft_lsti_map(t_list_i *lst, int (*f)(int));
t_list_i	*ft_lsti_new(int data);
void		ft_lsti_reverse(t_list_i **lst);
int			ft_lsti_size(t_list_i *lst);

#endif
