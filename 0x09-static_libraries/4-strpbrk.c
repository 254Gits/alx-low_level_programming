#include "main.h"
#include <stddef.h>

/**
 *  * *_strpbrk - entry point
 *   * @s: pointer to character string
 *    * @accept:bytes store
 *     *
 *      * Return: pointer that matches btyte in accept or null if mo such bytte exsist
 *       */
char *_strpbrk(char *s, char *accept)
{
		char *p;

			while (*s)
					{
								for (p = accept; *p; p++)
											{
															if (*p == *s)
																			{
																								return (s);
																											}
																	}
										s++;
											}
				return (NULL);
}
