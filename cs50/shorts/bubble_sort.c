#include<stdio.h>

void bubble_sort(int array[], int size);
void print_array(int array[], int size);
int main(void)
{
  //int sort[] = {0, 2, 1, 8, 3, 7, 5, 4, 6};
  //int sort[] = {1,2,3,3,5,4,7,2,8,8,3,6,2,3,4,7,8,6,4,8,6,2,8,3,2,8,6,3,8,6,8,6,4,8,6,4,8,2,6,3};
  //int sort[] = {123, 345, 2635, 567, 432, 907, 0};
  //int sort[] = {1,1,1,1,1,1,1,1,1,1,1,1};
  int sort[] = {2,1};
  int array_len = (sizeof(sort)/sizeof(int));
  print_array(sort, array_len);
  bubble_sort(sort, array_len);
  print_array(sort, array_len);
}

void bubble_sort(int array[], int size)
{
  int temp_store = 0;
  int counter = -1;
  while(counter != 0)
  {
    counter = 0;
    for(int i=1; i<size; i++)
    {
      if(array[i-1] > array[i])
      {
        temp_store = array[i];
        array[i] = array[i-1];
        array[i-1] = temp_store;
        counter ++;
      }
    }
    size--;
  }
}

void print_array(int array[], int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d\t", array[i]);
  }
  printf("\n");
}
