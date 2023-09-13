#include<stdio.h>

int binary_search(int *array, int array_len, int target);
void print_array(int *array, int size);

int main(void)
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 11;
  int array_len = (sizeof(array)/sizeof(int));
  int target_index = 0;
  target_index = binary_search(array, array_len, target);
  if(target_index == -1)
  {
    printf("target not present in the array\n");
  }
  else
  {
    printf("target_index is: %d\n", target_index);
  }
}

int binary_search(int *array, int array_len, int target)
{
  int start_index = 0;
  int end_index = array_len - 1;
  int target_index = 0;
  int mid_point = 0;
  // printf("end_index is: %d\n", end_index);
  while(end_index >= start_index)
  {
    mid_point = (start_index + end_index)/2;

    if(target == array[mid_point])
    {
      printf("Iam  here\n");
      return mid_point;
    }
    else if(target < array[mid_point])
    {
      end_index = mid_point - 1;
    }
    else if(target > array[mid_point])
    {
      start_index = mid_point + 1;
    }
  }
  if(end_index < start_index)
  {
    return -1;
  }
  //return 3;
}

void print_array(int *array, int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d\t", array[i]);
  }
  printf("\n");
}
