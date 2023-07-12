#include "hash_tables.h"

/**
 * key_index - this finds the index at which a value
 *      should be stored.
 * @key: this is the key to get the index
 * @size: this is the size of the array of the hash table.
 * Return: On Success(index)
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
