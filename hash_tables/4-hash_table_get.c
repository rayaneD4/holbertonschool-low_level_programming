#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 *
 * Return: key value or NULL
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (ht == NULL)
		return (NULL);

	if (ht != NULL)
	{
		index = key_index((const unsigned char *)key, ht->size);
		tmp = ht->array[index];

		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
				return (tmp->value);
			tmp = tmp->next;
		}
	}
	return (NULL);
}
