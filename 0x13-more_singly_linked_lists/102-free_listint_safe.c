#include "lists.h"

/**
* free_listint_safe - frees a linked list
* @j: points to first node in the linked list
*
* Return: number of elements in freed list
*/
size_t free_listint_safe(listint_t **j)
{
size_t len = 0;
int diff;
listint_t *temp;

if (!j || !*j)
return (0);

while (*j)
{
diff = *j - (*j)->next;
if (diff > 0)
{
temp = (*j)->next;
free(*j);
*j = temp;
len++;
}
else
{
free(*j);
*j = NULL;
len++;
break;
}
}

*j = NULL;

return (len);
}

