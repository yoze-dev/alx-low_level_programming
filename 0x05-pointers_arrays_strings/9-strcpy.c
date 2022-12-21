#include "main.h"

/**
 * _strcpy - copies the string pointed by src,
 * including terminating null byte \0, to the buffer
 * pointed by dest
 * @dest: The destination
 * @src: The source
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
