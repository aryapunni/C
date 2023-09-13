#include<stdio.h>
#include<stdlib.h>

typedef struct name_list
{
  char letter;
  struct name_list *next_name;
} name_list;

void add_to_list(name_list *n, char val)
{
  if(n == NULL)
  {
    n = malloc(sizeof(name_list));
    n->next_name = NULL;
    n->letter = 'a';
    name_list *copy = n;
  }
  else
  {
    
  }


}
int main(void)
{
  name_list *first = malloc(sizeof(name_list));

  first->next_name = NULL;
  first->letter = 'a';
  name_list *ptr = first;

  for(char letter = 'b'; letter <= 'z'; ++letter)
  {
    ptr->next_name = malloc(sizeof(name_list));
    ptr = ptr->next_name;
    ptr->letter = letter;
    ptr->next_name = NULL;
  }

  for(ptr = first; ptr != NULL; ptr = ptr->next_name)
  {
    printf("%c", ptr->letter);
  }
  printf("\n");
  ptr = first;
  while(ptr != NULL)
  {
    printf("%c", ptr->letter);
    ptr = ptr->next_name;
  }
  printf("\n");
}
