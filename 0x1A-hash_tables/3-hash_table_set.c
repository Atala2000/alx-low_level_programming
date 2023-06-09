#include "hash_tables.h"
/**
* hash_table_set - element
* @ht: ht
* @key: key
* @value: value
* Return: 1 on suc, o on fail
**/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{

hash_node_t *node;
hash_node_t *new_node;
unsigned long int index;

if (ht == NULL || *key == '\n' || *value == '\n')
        return (0);

index = key_index((const unsigned char *)key, ht->size);
node = ht->array[index];

if (node == NULL)
{
        new_node = create_new_node(key, value);
        if (new_node == NULL)
                return (0);

        ht->array[index] = new_node;
        return (1);
}

while (node != NULL)
{
        if (strcmp(key, node->key) == 0)
        {
                free(node->value);
                node->value = strdup(value);
                return (1);
        }
        node = node->next;
}

new_node = create_new_node(key, value);
if (new_node == NULL)
        return (0);

new_node = ht->array[index];
ht->array[index] = new_node;
return (1);
}

/**
* create_new_node - new  node
* @key: key
* @value: value
* Return: 1 or 0
**/
hash_node_t *create_new_node (const char *key, const char *value)
{
        hash_node_t *new_node;
        new_node = malloc(sizeof(hash_node_t));

        if (new_node == NULL)
                return (NULL);

        new_node->key = strdup(key);
        new_node->value = strdup(value);
        new_node->next = NULL;

        return (new_node);
}
