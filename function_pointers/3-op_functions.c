#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - add
  * @a: operator a
  * @b: operator b
  *
  * Return: result add
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - soustraction
  * @a: operator a
  * @b: operator b
  *
  * Return: result soustraction
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - product
  * @a: operator a
  * @b: operator b
  *
  * Return: result product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - division
  * @a: operator a
  * @b: operator b
  *
  * Return: result division
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - modulo
  * @a: operator a
  * @b: operator b
  *
  * Return: result modulo
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}