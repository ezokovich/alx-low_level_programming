#include <string.h>

/**
 * get_op_func - Compares function with pointer and returns the equal
 *
 * @s: point to a character
 * Return: Retn function & the operator when =.
**/

int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {

{"+", op_add},

{"-", op_sub},

{"*", op_mul},

{"/", op_div},

{"%", op_mod},

{NULL, NULL}
};

int a = 0;

while (ops[a].op != NULL)
{
if (!strcmp(ops[a].op, s))
return (ops[a].f);
a++;
}
return (NULL);
}
