#include <stdio.h>
#include <stdlib.h>

#define TABLE_SIZE 10

// Hash table entry struct
typedef struct HashEntry 
{
    int key;
    int value;
    struct HashEntry* next;
} HashEntry;

// Hash table struct
typedef struct HashTable 
{
    HashEntry* entries[TABLE_SIZE];
} HashTable;

// Hash function using division method
int hash_division(int key) 
{
    return key % TABLE_SIZE;
}

// Initialize the hash table
void init_hash_table(HashTable* table) 
{
    for (int i = 0; i < TABLE_SIZE; i++) 
    {
        table->entries[i] = NULL;
    }
}

// Insert a key-value pair into the hash table
void hash_table_insert(HashTable* table, int key, int value, int(*hash_function)(int)) 
{
    int index = hash_function(key);
    HashEntry* entry = (HashEntry*)malloc(sizeof(HashEntry));
    entry->key = key;
    entry->value = value;
    entry->next = NULL;
    if (table->entries[index] == NULL) 
    {
        table->entries[index] = entry;
    }
    else 
    {
        HashEntry* current = table->entries[index];
        while (current->next != NULL) 
        {
            current = current->next;
        }
        current->next = entry;
    }
}

// Search for a key-value pair in the hash table
HashEntry* hash_table_search(HashTable* table, int key, int(*hash_function)(int)) 
{
    int index = hash_function(key);
    HashEntry* current = table->entries[index];
    while (current != NULL) 
    {
        if (current->key == key) 
        {
            return current;
        }
        current = current->next;
    }
    return NULL;
}

// Delete a key-value pair from the hash table
void hash_table_delete(HashTable* table, int key, int(*hash_function)(int)) 
{
    int index = hash_function(key);
    HashEntry* current = table->entries[index];
    HashEntry* previous = NULL;
    while (current != NULL) 
    {
        if (current->key == key) 
        {
            if (previous == NULL) 
            {
                table->entries[index] = current->next;
            }
            else 
            {
                previous->next = current->next;
            }
            free(current);
            return;
        }
        previous = current;
        current = current->next;
    }
}

// Print the contents of the hash table
void print_hash_table(HashTable* table) 
{
    printf("Hash Table Contents:\n");
    for (int i = 0; i < TABLE_SIZE; i++) 
    {
        HashEntry* current = table->entries[i];
        printf("[%d]: ", i);
        while (current != NULL) 
        {
            printf("(%d,%d) ", current->key, current->value);
            current = current->next;
        }
        printf("\n");
    }
}

// Main function
int main() 
{
    HashTable table;
    init_hash_table(&table);
    int choice, key, value;
    HashEntry* entry;
    while (1) 
    {
        printf("\n1. Insert a key-value pair");
        printf("\n2. Search for a key-value pair");
        printf("\n3. Delete a key-value pair");
        printf("\n4. Print hash table contents");
        printf("\n5. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) 
        {
            case 1:
                printf("\nEnter key: ");
                scanf("%d", &key);
                printf("Enter value: ");
                scanf("%d", &value);
                hash_table_insert(&table, key, value,hash_division);
                printf("Key-value pair inserted successfully\n");
                break;
            case 2:
                printf("\nEnter key to search: ");
                scanf("%d", &key);
                entry = hash_table_search(&table, key, hash_division);
                if (entry != NULL)
                {
                    printf("Found key=%d value=%d\n", entry->key, entry->value);
                }
                else
                {
                    printf("Key not found\n");
                }
                break;
            case 3:
                printf("\nEnter key to delete: ");
                scanf("%d", &key);
                hash_table_delete(&table, key, hash_division);
                printf("Key-value pair deleted successfully\n");
                break;
            case 4:
                print_hash_table(&table);
                break;
            case 5:
                printf("\nExit\n");
                return 0;
            default:
                printf("\nInvalid choice\n");
                break;
        }
    }
}



