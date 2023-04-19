#include <stdio.h>
#include <stdlib.h>

typedef struct	Cell_t
{
	int		data;
	struct	Cell_t *next;
}		List, Cell;

void	printlist(List *L)
{
	while (L)
	{
		printf("%d\n", L->data);
		L = L->next;
	}
	printf("\n");
}

List	*addBegin(List *L, int data)
{
	Cell	*cell;

	cell = malloc(sizeof(Cell));
	cell->data = data;
	cell->next = L;
	return (cell);
}

List	*addEnd(List *L, int data)
{
	Cell	*cell;
	Cell	*i;

	cell = malloc(sizeof(Cell));
	cell->data = data;
	cell->next = NULL;
	i = L;
	while(i->next)
		i = i->next;
	i->next = cell;
	return (L);
}

int	main()
{
	List	*list;

	list = NULL;
	list = addBegin(list, 2);
	printlist(list);
	list = addBegin(list, 3);
	printlist(list);
	list = addEnd(list, 1);
	printlist(list);
	return (0);
}
