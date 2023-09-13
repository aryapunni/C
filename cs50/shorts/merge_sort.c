#include<stdio.h>
#include<stdlib.h>

int merge_sort(int *array, int n);
void print_array(int array[], int size);
void merge(int *array1, int l, int *array2, int m, int *array, int n);

int main(void)
{
   int array[] = {5, 1, 3, 2, 4};
   int n = (sizeof(array)/sizeof(int));
   merge_sort(array, n);
   print_array(array, n);
}

int merge_sort(int *array, int n)
{
  if(n < 2)
  {
    return 1;
  }

  int m = n/2;
  int *array1 = malloc((m)*sizeof(int));
  int *array2 = malloc((n-m)*sizeof(int));

  for(int i = 0;i < m;i++)
  {
    array1[i] = array[i];
  }

  for(int i = 0;i<n - m;i++)
  {
    array2[i] = array[i + m];
  }

  merge_sort(array1, m);
  merge_sort(array2, n-m);

  merge(array1, m, array2, n-m, array, n);

  free(array1);
  free(array2);

  return 0;
}

void merge(int *array1, int m, int *array2, int l, int *array, int n)
{
  int i = 0;
  int j = 0;
  int k = 0;
  // printf("m: %d, l: %d, n: %d\n", m, l, n);
  while((i < m) && (j < l) && (k < n))
  {
    printf("i: %d, j: %d, k: %d\n", i, j, k);

    if(array1[i] < array2[j])
    {
      array[k] = array1[i];
      i++;
      k++;
    }
    else
    {
      array[k] = array2[j];
      j++;
      k++;
    }

    print_array(array, n);
  }
  // printf("i: %d, j: %d, k: %d\n", i, j, k);

  while((i < m) && (k < n))
  {
    array[k] = array1[i];
    i++;
    k++;
  }
  while((j < l) && (k < n))
  {
    array[k] = array2[j];
    j++;
    k++;
  }
  print_array(array, n);
}

void print_array(int *array, int size)
{
  for(int i=0;i<size;i++)
  {
    printf("%d\t", array[i]);
  }
  printf("\n");
}
