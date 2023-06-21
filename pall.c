#include "monty.h"
/**
 * pall_function - Prints all values on the stack.
 * @h: Pointer to the head of the stack.
 * @c: Current line number of the bytecode file.
 *
 * Return: void
 */
void pall_function(stack_t **h, unsigned int c)
{
	stack_t *temp;
	(void)c;

	temp = *h;
	if (temp == NULL)
		return;
	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
	}
}
