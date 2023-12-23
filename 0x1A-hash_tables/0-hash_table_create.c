#nclude "hash_tables.h"

/**
 *  * key_index - Get the index at which a key/value
 *   *      pair should be stored in array of a hash table.
 *    * @key: The key to get the index of.
 *     * @size: The size of the array of the hash table.
 *      *
 *       * Return: The index of the key.
 *        * Description: Uses the djb2 algorithm.
 *         */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
		return (hash_djb2(key) % size);
}include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
