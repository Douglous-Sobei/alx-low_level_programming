#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: size of the array
 *
 * Return: pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int a;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == 0)
		return (0);
	hash_table->size = size;
	hash_table->array = malloc(size * sizeof(hash_node_t *));
	if (hash_table->array == 0)
	{
		free(hash_table);
		return (0);
	}
	for (a = 0; i < size; i++)
		hash_table->array[a] = 0;
	return (hash_table);
}
