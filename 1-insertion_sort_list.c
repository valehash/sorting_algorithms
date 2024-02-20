#include "sort.h"

 

void insertion_sort_list(listint_t **list)
{
	listint_t *current;
	listint_t *prev;

	current = (*list)->next;
	
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;
	while (current != NULL)
	{
		prev = current->prev;
	
	while (prev != NULL && prev->n > current->n)
        {

            prev->next = current->next;
            if (current->next != NULL)
                current->next->prev = prev;
            current->next = prev;
            current->prev = prev->prev;
            if (prev->prev != NULL)
                prev->prev->next = current;
            prev->prev = current;


            prev = current->prev;
            if (prev == NULL)
                *list = current;
            

            print_list(*list);
        }


        current = current->next;
    }
}

