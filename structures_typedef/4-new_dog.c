#include <stdio.h>
#include "dog.h"

/**
 * new_dog - create a crew dog
 * @name: name dog
 * @age: age dog
 * @owner: owner dog
 * Return: NULL if fail,
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	int i, new_dog_name; new_dog_owner;

	new_dog = malloc(sizeof(
