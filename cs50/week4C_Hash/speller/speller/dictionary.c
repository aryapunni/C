// Implements a dictionary's functionality

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <strings.h>
#include <ctype.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Number of buckets in hash table
const unsigned int N = 1024;

// Hash table
node *table[N];


// Add value to hash table
node * add_to_linkedlist(node *head, char array[46])
{
    //creating a new node for adding
    node *new_node = NULL;
    new_node = malloc(sizeof(node));
    strcpy(new_node->word, array);
    new_node->next = NULL;

    //temporary node for copying
    node *temp_node = NULL;

    /*if the head passed is null
    assign the created node to it*/

    if(head == NULL)
    {

        head = new_node;

    }
    /* If the passed head is not null,
       Iterate through it untill you get the null
       and add the new node in that location*/
    else
    {
        temp_node = head;
        while(temp_node->next != NULL)
        {
            temp_node = temp_node->next;
        }
        temp_node->next = new_node;

    }

    //printing out each node in the linked list
    for(temp_node = head; temp_node != NULL; temp_node = temp_node->next)
    {
        // printf("word is: %s\n", temp_node->word);
    }


    return head;
}

// Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    int length = strlen(word) + 1;
    char *lowercase_word = malloc(sizeof(char) * length);
    strcpy(lowercase_word, word);
    // printf("text word: %s\n", lowercase_word);
    for(int i = 0;i < length; i++)
    {
        // printf("hash char: %c\n", lowercase_word[i]);
        if(!(islower(lowercase_word[i])))
        {
            lowercase_word[i] = tolower(lowercase_word[i]);

        }
        // printf("hash char: %c\n", lowercase_word[i]);
    }
    // printf("lowercase_word: %s\n", lowercase_word);

    unsigned int hash_value = hash(lowercase_word);
    node *temp_node = NULL;
    for(temp_node = table[hash_value];temp_node != NULL;temp_node = temp_node->next)
    {
        // printf("dictionary word: %s\n", temp_node->word);
        if(strcasecmp(word, temp_node->word) == 0)
        {
            // printf("New word is: %s\n", word);
            // printf("found the word\n");
            // printf("\n");
            free(lowercase_word);
            return true;
        }
        else
        {
            // printf("no word found\n");
            // printf("\n");
        }
    }
    free(lowercase_word);
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO
    int len = strlen(word);
    unsigned int hash_value = 0;
    for(int i = 0;i < len;++i)
    {
        hash_value = hash_value + *(word + i);
    }


    hash_value = hash_value % N;

    return hash_value;
    // return 0;
}

// Loads dictionary into memory, returning true if successful else false
bool load(const char *dictionary)
{
    // TODO
    char ch;
    char word_array[46];
    unsigned int hash_val = 0;

    //open input dictionary
    FILE *words = fopen(dictionary, "r");
    if (words == NULL)
    {
        fprintf(stderr, "Could not open %s.\n", dictionary);
        return false;
    }
    else
    {
        int i = 0;
        while((ch = fgetc(words)) != EOF)
        {

            if(ch != '\n')
            {
                word_array[i] = ch;
                i++;
            }
            else
            {
                word_array[i] = '\0';
                i = 0;

                //get hash value
                hash_val = hash(word_array);

                //allocate to hash table
                table[hash_val] = add_to_linkedlist(table[hash_val], word_array);

            }
        }
        fclose(words);
        return true;
    }

}

// Returns number of words in dictionary if loaded else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    node *temp_node = NULL;
    unsigned int count = 0;
    for(int i = 0;i < N;++i)
    {
        if(table[i] != NULL)
        {
            for(temp_node = table[i];temp_node != NULL; temp_node = temp_node->next)
            {
                ++count;
            }
        }
    }
    // printf("count is: %d\n", count);
    return count;
}

// Unloads dictionary from memory, returning true if successful else false
bool unload(void)
{
    // TODO
    node *temp_node = NULL;
    node *temp_next = NULL;
    // int i_next = 0;

    for(int i = 0;i < N;++i)
    {
        if(table[i] != NULL)
        {
            temp_node = table[i];
            while(temp_node != NULL)
            {
                temp_next = temp_node->next;
                free(temp_node);
                temp_node = temp_next;
            }
        }
    }
    return true;
}

/* Returns true if word is in dictionary else false
bool check(const char *word)
{
    // TODO
    int length = strlen(word) + 1;
    char *lowercase_word = malloc(sizeof(char) * length);
    memcpy(lowercase_word, word, length);
    // printf("text word: %s\n", lowercase_word);
    for(int i = 0;i < length; i++)
    {
        // printf("hash char: %c\n", lowercase_word[i]);
        if(!(islower(lowercase_word[i])))
        {
            lowercase_word[i] = tolower(lowercase_word[i]);

        }
        // printf("hash char: %c\n", lowercase_word[i]);
    }
    // printf("lowercase_word: %s\n", lowercase_word);

    unsigned int hash_value = hash(lowercase_word);
    node *temp_node = NULL;
    for(temp_node = table[hash_value];temp_node != NULL;temp_node = temp_node->next)
    {
        // printf("dictionary word: %s\n", temp_node->word);
        if(strcasecmp(word, temp_node->word) == 0)
        {
            // printf("New word is: %s\n", word);
            // printf("found the word\n");
            // printf("\n");
            return true;
        }
        else
        {
            // printf("no word found\n");
            // printf("\n");
        }
    }
    free(lowercase_word);
    return false;
}
*/
