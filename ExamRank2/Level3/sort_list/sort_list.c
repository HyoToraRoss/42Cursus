#include <stdio.h>
#include <stdlib.h>
#include "list.h"

t_list	*sort_list(t_list *lst, int (*cmp)(int, int))
{
	t_list	*begin;
	int		swap;

	begin = lst;
	while (lst->next != 0)
	{
		if (cmp(lst->data, lst->next->data) == 0)
		{
			swap = lst->data;
			lst->data = lst->next->data;
			lst->next->data = swap;
			lst = begin;
		}
		else
			lst = lst->next;
	}
	// begin is a pointer to the first node, even its data its changed, the pointer didnt change
	lst = begin;
	return (lst);
}

t_list	*new_list(int data)
{
	t_list *node;

	node = malloc(sizeof(t_list));
	if (node)
	{
		node->data = data;
		node->next = 0;
	}
	return (node);
}

int main()
{
	t_list  *list;
    int     a, b, c, d;
    a = 4;
    b = 3;
    c = 2;
    d = 1;

    list = new_list(a);
    list->next = new_list(b);
    list->next->next = new_list(c);
    list->next->next->next = new_list(d);

    sort_list(list, ascending);
    while (list)
    {
        printf("sorted: %d\n", list->data);
        list = list->next;
    }
}
