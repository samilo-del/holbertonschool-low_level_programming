#include "holberton.h"
#include <stdlib.h>
/**
 *_realloc - reallocates a memory block using malloc and free
 *@ptr: pointer to the old memory block
 *@old_size: lenght of the old memory block
 *@new_size: lenght of new block of memory
 *
 *Return: NULL if @new_size is equal to zero or malloc fails
 *        ptr if @new_size is equal to @old_size
 *        s pointer to the new block of memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s = NULL;
	unsigned int i = 0, min = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	s = malloc(new_size);
	if (s == NULL)
		return (NULL);
	if (ptr == NULL)
	{
		free(ptr);
		return (s);
	}
	else
	{
		if (new_size > old_size)
			min = old_size;
		else
			min = new_size;
		while (i < min)
		{
			s[i] = ((char *)ptr)[i];
			i++;
		}
	}
	free(ptr);
	return (s);
}
