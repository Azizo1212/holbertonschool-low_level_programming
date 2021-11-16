#ifndef MAIN_L
#define MAIN_L
#include <stdlib.h>
#include <string.h>
#include <stdio.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 *
 * @next: points
 * Return: Always 0.
 */

typedef struct listint_s
{
	int n;
	struct listint_s *next;

} listint_t;

size_t print_listint(const listint_t *h);

#endif
