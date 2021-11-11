#include "lists.h"
#include <stdio.h>
#include <string.h>

/**
 * add_node_end - check the code
 * @head: pointer
 * @str: string
 * Return: Adress
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *i;
	list_t *h;

	h = *head;
	i = malloc(sizeof(list_t));
	if (i == NULL)
		return (NULL);
	i->str = strdup(str);
	i->len = strlen(str);
	i->next = NULL;
	if (*head == NULL)
	{
		*head = i;
		return (i);
	}
	while (h->next != NULL)
	{
		h = h->next;
	}
	h->next = i;
	return (i);
}
