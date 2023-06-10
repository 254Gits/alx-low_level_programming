#include "main.h"


/**
 *  * *_strspn - entry point
 *   * @s: pointer to the string
 *    * @accept:bytes store
 *     *
 *      * Return: leghth of prefix
 *       */

unsigned int _strspn(char *s, char *accept)
{
		unsigned int count = 0;

			while (*s)
					{
								char *p = accept;

										while (*p)
													{
																	if (*s == *p)
																					{
																										count++;
																														break;
																																	}
																				p++;
																						}
												if (!*p)
																break;
														s++;
															}
				return (count);
}
