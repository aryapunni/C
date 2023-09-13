#include<stdio.h>

void print_array(int array[], int size);
void insertion_sort(int array[], int size);
int main(void)
{
  int sort[] = {5, 2, 1, 3, 6, 4};
  int array_len = (sizeof(sort)/sizeof(int));
  print_array(sort, array_len);
  insertion_sort(sort, array_len);
  print_array(sort, array_len);
}


void print_array(int array[], int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d\t", array[i]);
  }
  printf("\n");
}

void insertion_sort(int array[], int size)
{
  int current_value = 0;
  for(int sort_len = 1;sort_len < size;sort_len++)
  {
    current_value = array[sort_len];
    int i = sort_len - 1;
    while(i >= 0 && array[i] > current_value)
    {
      array[i+1] = array[i];
      i--;
    }
    array[i+1] = current_value;
  }
}

// void insertion_sort2(int array[], int size)
// {
//   int current_value = 0;
//   for(int sort_len = 1;sort_len < size; sort_len++)
//   {
//     current_value = array[sort_len];
//
//   }
// }
