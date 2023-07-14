#nary_to_uint - converts a binary to an unsigned int
 * @b: the binary number as a string
 *  *
 *   * Return: the converted value
 *    */
 unsigned int binary_to_uint(const char *b)
{
		unsigned int decimal = 0;
			int str_len = 0, base = 1;

				if (!check_valid_string(b))
							return (0);
					while (b[str_len] != '\0')
								str_len++;
						while (str_len)
								{
											decimal += ((b[str_len - 1] - '0') * base);
													base *= 2;
															str_len--;
																}

							return (decimal);
}include "lists.h"
/**
 *add_nodeint- list entry point
 *@head : double pointer
 *@n : stores member variable
 *
 *Return: newnode
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

nif (newNode == NULL)
	{
		return (NULL);
	}
	else
	{
		newNode->n = n;
		newNode->next = *head;
		*head = newNode;

		return (newNode);

	}
n
