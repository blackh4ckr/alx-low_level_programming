#include <stddef.h>
#include "lists.h"
#include <stdlib.h>
#include <strings.h>
#include <stdio.h>
/**
 * find_listint_loop - check description
 * Description: function that finds the loop in a linked list
 * @head: pointer
 * Returns: address of node where loop starts or NULL if there is no loop
 *
 */
listint_t *find_listint_loop(listint_t *head)

{

	listint_t *slow = head, *fast = head;

	while (slow && fast && fast->next)

	{

		slow = slow->next;

		fast = fast->next->next;

		if (slow == fast)

			break;

	}

	if (!slow || !fast || !fast->next)

		return (NULL);



	slow = head;

	while (slow != fast)

	{

		slow = slow->next;

		fast = fast->next;

	}

	return (slow);

}


