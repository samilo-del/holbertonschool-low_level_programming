#include "holberton.h"
/**
 * _strcat - concatenates two strings.
 * @src: array with the string source
 * @dest: pointer where the text is append
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	int u_s;
	int u_d;
	int i_s;
	int i_d;

	for (u_d = 0; dest[u_d] != 0; u_d++)
	for (u_s = 0; src[u_s] != 0; u_s++)
	i_s = 0;
	for (i_d = u_d; i_d < (u_s + u_d); i_d++)
	{
		dest[i_d] = src[i_s];
		i_s++;
	}
	dest[u_s + u_d] = 0;
	return (dest);
}
