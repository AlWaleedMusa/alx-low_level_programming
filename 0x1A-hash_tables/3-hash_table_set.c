#include "hash_tables.h"

/**
 * hash_table_set - Add or update element in a hash table.
 * @ht: A pointer to hash table.
 * @key: The key to add.
 * @value: The value associated with key.
 * Return: Upon failure - 0. else 1.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *to_add;
	char *value_copy;
	unsigned long int idx, i;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);

	value_copy = strdup(value);

	if (value_copy == NULL)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	for (i = idx; ht->array[i]; i++)
	{
		if (strcmp(ht->array[i]->key, key) == 0)
		{
			free(ht->array[i]->value);
			ht->array[i]->value = value_copy;
			return (1);
		}
	}

	to_add = malloc(sizeof(hash_node_t));
	if (to_add == NULL)
	{
		free(value_copy);
		return (0);
	}
	to_add->key = strdup(key);
	if (to_add->key == NULL)
	{
		free(to_add);
		return (0);
	}
	to_add->value = value_copy;
	to_add->next = ht->array[idx];
	ht->array[idx] = to_add;

	return (1);
}
