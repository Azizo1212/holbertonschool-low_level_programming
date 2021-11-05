#ifndef DOG
#define DOG
#include <stdio.h>
/**
 * struct dog - structure Short description
 * @name: First member
 * @owner: Second member
 * @age: age of dog
 * Description: Longer description
 */
struct dog
	{
		char *name;
		float age;
		char *owner;
	};

typedef struct dog dog;

#endif
