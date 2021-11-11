#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @str: string
 * @head : pointer
 * Return: adress
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add_h;


	add_h = malloc(sizeof(list_t));
	if (add_h == NULL)
		return (NULL);
	add_h->str = strdup(str);
	add_h->len = strlen(str);
	add_h->next = *head;

	*head = add_h;
		return (*head);
}
