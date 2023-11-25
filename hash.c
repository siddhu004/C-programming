#include <stdio.h>
#include <stdlib.h>
#define TABLE_SIZE 10

// Hash table entry struct
typedef struct HashEntry 
{
    int key;
    int value;
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

// Hash function using mid-square method
int hash_mid_square(int key) 
{
    int square = key * key;
    int mid = square / 100 % 100;
    return mid % TABLE_SIZE;
}

// Hash function using digit folding method
int hash_digit_folding(int key) 
{
    int sum = 0;
    while (key > 0) 
    {
        sum += key % 10;
        key /= 10;
    }
    return sum % TABLE_SIZE;
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
    if (table->entries[index] != NULL) 
    {
        printf("\nCollision detected at index %d\n", index);
    }
    HashEntry* entry = (HashEntry*)malloc(sizeof(HashEntry));
    entry->key = key;
    entry->value = value;
    table->entries[index] = entry;
}

// Print the contents of the hash table
void print_hash_table(HashTable* table) 
{
    printf("\nHash Table Contents:\n");
    for (int i = 0; i < TABLE_SIZE; i++) 
    {
        if (table->entries[i] != NULL) 
        {
            printf("[%d] Key: %d, Value: %d\n", i, table->entries[i]->key, table->entries[i]->value);
        }
        else 
        {
            printf("[%d] Empty\n", i);
        }
    }
}

int main() 
{
    int n;
    printf("Enter the number of values to insert into the hash table: ");
    scanf("%d", &n);

    // Initialize the hash table
    HashTable table;
    init_hash_table(&table);

    // Insert values using division method
    printf("\nDivision Method:\n");
    for (int i = 0; i < n; i++) 
    {
        int key, value;
        printf("Enter key and value: ");
        scanf("%d %d", &key, &value);
        hash_table_insert(&table, key, value, hash_division);
    }
    print_hash_table(&table);

    // Initialize the hash table again
    init_hash_table(&table);

    // Insert values using mid-square method
    printf("\nMid-Square Method:\n");
    for (int i = 0; i < n; i++) 
    {
        int key, value;
        printf("Enter key and value: ");
        scanf("%d %d", &key, &value);
        hash_table_insert(&table, key, value, hash_mid_square);
    }
    print_hash_table(&table);
    init_hash_table(&table);
}