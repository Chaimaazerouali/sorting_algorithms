#include "sort.h"

/**
* swap_node - orders linked list with insertion.
* @hd: A pointer to the head of the doubly-linked list.
* @nod1: A pointer to the first node to swap.
* @nod2: The second node to swap.
* Return: swaps two consecutive nodes *
*/
void swap_node(listint_t **hd, listint_t **nod1, listint_t *nod2)
{
(*nod1)->next = nod2->next;
if (nod2->next != NULL)
nod2->next->prev = *nod1;
nod2->prev = (*nod1)->prev;
nod2->next = *nod1;
if ((*nod1)->prev != NULL)
(*nod1)->prev->next = nod2;
else
*hd = nod2;
(*nod1)->prev = nod2;
*nod1 = nod2->prev;
}

/**
* insertion_sort_list -  orders linked list with insertion
* @list: doble pointer to node list
* Return: linked list ordered.
*/
void insertion_sort_list(listint_t **list)
{
listint_t *it, *insert, *temp;

if (list == NULL || *list == NULL || (*list)->next == NULL)
return;

for (it = (*list)->next; it != NULL; it = temp)
{
temp = it->next;
insert = it->prev;
while (insert != NULL && it->n < insert->n)
{
swap_node(list, &insert, it);
print_list((const listint_t *)*list);
}
}
}

