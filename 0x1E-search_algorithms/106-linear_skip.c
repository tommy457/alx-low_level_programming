#include "search_algos.h"

skiplist_t *linear_search_(skiplist_t *list, skiplist_t *jump_, int value);
/**
 * linear_skip - Searches for a value in an list of integers
 * using Linear search in a skip list .
 *
 * @list: pointer to the first element of the array.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *curr = list, *jump_ = list;

	if (!list)
		return (NULL);

	for (; curr; )
	{
		if (curr->n < value)
		{
			printf("Value checked array [%lu] = [%d]\n",
					curr->express->index, curr->express->n);
			jump_ = curr;
			curr = curr->express;
		}
		else
			break;
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
			jump_->index, curr->index);
	return (linear_search_(jump_, curr, value));
}

/**
 * linear_search_ - Searches for a value in an array of list
 * using the Linear search algorithm.
 *
 * @list: pointer to the first element of the array.
 * @jump_: node where to start searching.
 * @value: value to search for.
 *
 * Return: return a pointer to the first node where value is located or NULL.
 */

skiplist_t *linear_search_(skiplist_t *list, skiplist_t *jump_, int value)
{
	skiplist_t *curr = list;

	if (!list)
		return (NULL);

	for (; curr->index <= jump_->index; curr = curr->next)
	{
		printf("Value checked at index [%lu] = [%d]\n", curr->index, curr->n);
		if (curr->n == value)
			return (curr);
	}
	return (NULL);
}
