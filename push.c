#include "monty.h"
/**
 * push_function - Pushes an element to the stack.
 * @h: Pointer to the head of the stack.
 * @c: Current line number of the bytecode file.
 *
 * Return: void
 */
void push_function(stack_t **h, unsigned int c)
{
	int x, y = 0, flg = 0;

	if (data.org_cmnd)
	{
		if (data.org_cmnd[0] == '-')
		{
			y++;
		}
		while (data.org_cmnd[y] != '\0')
		{
			if (data.org_cmnd[y] < 48 || data.org_cmnd[y] > 57)
				flg = 1;
			y++;
		}
		if (flg == 1)
		{
			fprintf(stderr, "L%d: usage: push integer\n", c);
			fclose(data.file_descriptor);
			free_td(*h);
			free(data.buff);
			exit(1);
		}
	}
	else
	{
		fprintf(stderr, "L%d: usage: push integer\n", c);
		fclose(data.file_descriptor);
		free_td(*h);
		free(data.buff);
		exit(1);
	}
	x = atoi(data.org_cmnds);
	add_node(h, x);
}
