#include "holberton.h"
/**
 * _puts - function that prints a string, followed by a new line, to stdout
 * @str: pointer
 * Return: Always 0. (sucess)
 */
void _puts(char *str)
{

for (a = 0; str[a] != '\0'; a++)
{

_putchar(str[a]);
}
_putchar('\n');

}
