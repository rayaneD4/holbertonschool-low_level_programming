#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table
 *
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int boo = 0;
	hash_node_t *tmp = NULL;
	char *coma = "";

	if (ht == NULL)
		return;

	printf("{");

	while (boo < ht->size)
	{
		if (ht->array[boo] != NULL)
		{
			tmp = ht->array[boo];
			while (tmp != NULL)
			{
				printf("%s'%s': '%s'", coma, tmp->key, tmp->value);
				coma = (", ");
				tmp = tmp->next;
			}
		}
		boo++;
	}
	printf("}\n");
}
