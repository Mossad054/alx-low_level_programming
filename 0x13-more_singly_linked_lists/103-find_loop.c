#include "lists.h"

/**
* find_listint_loop - finds loop in a linked list
* @top: linked list to search
*
* Return: addreses of  node where the loop starts, or 0
*/
listint_t *find_listint_loop(listint_t *top)
{
listint_t *slow = top;
listint_t *fast = top;

if (!top)
return (NULL);

while (slow && fast && fast->next)
{
fast = fast->next->next;
slow = slow->next;
if (fast == slow)
{
slow = top;
while (slow != fast)
{
slow = slow->next;
fast = fast->next;
}
return (fast);
}
}

return (NULL);
}

