#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key
 *@ht: pointer to hash table
 *@key: the key to get the value
 * Return: NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = hash_djb2((const unsigned char *)key) % ht->size;
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}

