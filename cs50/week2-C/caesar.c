#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(int argc, string argv[])
{
    int cypher_key;
    //int len = strlen(argv[1]);
    //printf("argc: %d\n", argc);
    int i = 0;
    //char plain_text[100];
    char cypher_text[100];

    if((argc >= 2) && (argv[1][0] >= 48) && (argv[1][0] <= 57))
    {
        cypher_key =  atoi(argv[1]);
        //printf("argv: %d\n", cypher_key);
        //printf("enter plain text: ");
        //scanf("%s", &plain_text[0]);
        //printf("plain text: %s\n", plain_text);
        string plain_text = get_string("enter the string: ");
        while(plain_text[i]  > '\0')
        {

            if((plain_text[i] >= 'a') && (plain_text[i]  <= 'z'))
            {
                plain_text[i]  = plain_text[i]  - 'a';
                cypher_text[i] = (plain_text[i] + cypher_key) % 26;
                cypher_text[i] = cypher_text[i] + 'a';
            }
            else if((plain_text[i] >= 'A') && (plain_text[i]  <= 'Z'))
            {
                plain_text[i]  = plain_text[i]  - 'A';
                cypher_text[i] = (plain_text[i] + cypher_key) % 26;
                cypher_text[i] = cypher_text[i] + 'A';
            }
            else
            {
                cypher_text[i] = plain_text[i];

            }
            i++;
        }
         printf("ciphertext: %s\n", cypher_text);
    }
    else
    {
        printf("usage: ./caesar key\n");
        return 1;
    }
}
