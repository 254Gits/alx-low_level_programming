#include "main.h"

/**
 *  * _strncpy - function to copy string from source to dest
 *   * @dest: destination string
 *    * @src: source string
 *     * @n: maximum value of dtring
 *      * Return: dest  string
 *       */

char *_strncpy(char *dest, char *src, int n)
{
		int i;

			for (i = 0; i < n && src[i] != '\0'; i++)
					{
								dest[i] = src[i];
									}
				for (; i < n; i++)
						{
									dest[i] = '\0';
										}
					return (dest);
}
