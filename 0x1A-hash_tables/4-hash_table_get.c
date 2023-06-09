#include "hash_tables.h"
/**
* hash_table_get - return index key
* @key: the key
* @ht: array size
* Return: index
**/
char *hash_table_get(const hash_table_t *ht, const char *key)
{

hash_node_t *node;
unsigned long int index;

if (ht == NULL)
return (NULL);

index = key_index((const unsigned char *) key, ht->size);
node = ht->array[index];

while (node != NULL)
{
if (strcmp(node->key, key) == 0)
return (node->value);

node = node->next;
}
return (NULL);
}
