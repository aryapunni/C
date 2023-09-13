#include <cs50.h>
#include <stdio.h>
#include<string.h>
void error_message()
{
    printf("Usage: ./vigenere keyword\n");
    exit(1);
}
int main(int argc, string argv[])
{
    string cypher_key;
    int j = 0;
    int k = 0;
    if(argc == 2)
    {
        cypher_key = argv[1];
        int length = strlen(cypher_key);
        for(int i=0; i<length; i++)
        {
            if((cypher_key[i] >= 'A') &&(cypher_key[i] <= 'Z'))
            {
                cypher_key[i] = cypher_key[i] - 'A';
            }
            else if((cypher_key[i] >= 'a') &&(cypher_key[i] <= 'z'))
            {
                cypher_key[i] = cypher_key[i] - 'a';
            }
            else
            {
                error_message();
            }

        }

        string plain_text = get_string("Enter the plain text: \n");
        //printf("plain text: %s\n", plain_text);
        string cypher_text = plain_text;

        while(plain_text[j] != '\0')
        {
            if(k >= length)
            {
                k = 0;
            }
            if((plain_text[j] >= 'A') && (plain_text[j] <= 'Z'))
            {
                plain_text[j] = plain_text[j] - 'A';
                cypher_text[j] = (plain_text[j] + cypher_key[k]) % 26;
                cypher_text[j] = cypher_text[j] + 'A';
                k++;
            }
            else if((plain_text[j] >= 'a') && (plain_text[j] <= 'z'))
            {
                plain_text[j] = plain_text[j] - 'a';
                cypher_text[j] = (plain_text[j] + cypher_key[k]) % 26;
                cypher_text[j] = cypher_text[j] + 'a';
                k++;
            }
            else
            {
                cypher_text[j] = plain_text[j] ;
            }
            j++;
        }

        printf("ciphertext: %s\n", cypher_text);
    }
    else
    {
        error_message();
    }
}
