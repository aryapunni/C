#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
} node;
int main(void)
{
  //list of size zero
  node *list = NULL;
  //add number to list
  node *n = malloc(sizeof(node));

  if(n == NULL)
  {
    return 1;
  }
  n->number = 1;
  n->next = NULL;

  list = n;

  //add number to the list
  n = malloc(sizeof(node));
  if(n == NULL)
  {
    return 1;
  }
  n->number = 2;
  n->next = NULL;
  list->next = n;

  //add number to list
  n = malloc(sizeof(node));
  if(n == NULL)
  {
    return 1;
  }
  n->number = 3;
  n->next = NULL;
  list->next->next = n;

  for(node *temp = list;temp != NULL; temp = temp->next)
  {
    printf("%d\n", temp->number);
  }

  while(list != NULL)
  {
    node *temp = list->next;
    free(list);
    list = temp;
  }

}
/*
typedef struct name_list
{
  char name;
  struct name_list *next_name;
} name_list;

struct name_list *n = malloc(sizeof(name_list));
(*n).name = 'a';
(*n).next_name = malloc(sizeof(name_list));

(*((*n).next_name)).name = b;*/
