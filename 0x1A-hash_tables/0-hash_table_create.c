#include "hash_tables.h"


/**
* hash_table_create - function that creates a hash table
* @size: size of the array
* Return: pointer to the newly created hash table else NULL
*/

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_table;
	unsigned long int i;

	hash_table = malloc(sizeof(hash_table_t));
	if (hash_table == NULL)
	{
		return (NULL);
	}
	else
	{
		hash_table->size = size;
		hash_table->array = malloc(sizeof(hash_node_t *) * size);
	}
	if (hash_table->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		hash_table->array[i] = NULL;
	}
	return (hash_table);
}
