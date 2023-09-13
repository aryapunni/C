# include <stdio.h>
#include <string.h>

int main(void)
{

    char * strs[] = {"flower", "flow", "flight"};

    int array_size = sizeof(strs)/sizeof(strs[0]);

    char * prefix = strs[0];
    printf("%s\n", prefix);


    printf("array size: %d\n", array_size);

    for(int i = 0; i < array_size; i++)
    {
        int length = strlen(strs[i]);
        char * word = strs[i];
        printf("length: %d\n", length);
        for(int j = 0; word[j] != '\0'; j++)
        {
            while(prefix[j] != '\0')
            {
                if(prefix[j] != word[j])
                {
                    prefix[j] = '\0';
                }


            }

            /* int diff = strlen(word) - strlen(prefix); */
            /* if(diff != 0) */
            /* { */
            /*     if(prefix[j] != word[j]) */
            /*     { */
            /*         prefix[j] = '\0'; */
            /*     } */

            /* } */
            /* printf("%c\n", word[j]); */
        }
        /* printf("difference in length: %ld\n", strlen(word) - strlen(prefix)); */
        /* printf("%s\n", prefix); */
    }

    return 0;
}
