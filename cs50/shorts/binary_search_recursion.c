#include<stdio.h>

int binary_search(int *array, int array_len, int target);
int binary_search_recursion(int *array, int target, int start_idx, int end_idx);

// void print_array(int *array, int size); /*  */

int main(void)
{
  int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  int target = 1;
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
  return binary_search_recursion(array, target, 0, array_len-1);
}


int binary_search_recursion(int *array, int target, int start_idx, int end_idx)
{
  if (start_idx > end_idx) {
    return -1;
  } else if (start_idx == end_idx) {
    
    if (array[start_idx] == target) {

      return start_idx;
    } else {
      return -1;
    }
  } else {

    /* start_idx > end_idx */

    int mid_idx = (start_idx + end_idx) / 2;
    if (array[mid_idx] == target) {
      return mid_idx;
    } else if (array[mid_idx] > target) {
      return binary_search_recursion(array, target, start_idx, mid_idx - 1);
    } else {
      return binary_search_recursion(array, target, mid_idx + 1, end_idx);
    }

  }

}
	
