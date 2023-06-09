#include "hash_tables.h"
/**
* key_index - return index key
* @key: the key
* @size: array size
* Return: index
**/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
unsigned long int index = hash_djb2(key) %  size;

return (index);
}
