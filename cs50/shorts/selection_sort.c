#include<stdio.h>

int main(void)
{
  int sort[] = {6, 3, 5, 2, 1, 0, 9};
  int array_len = (sizeof(sort)/sizeof(int));
  int i = 0;
  int new_sorted_val = 0;
  int sorted_index = 0;
  int temp_store = 0;
  while(i < array_len)
  {
    //printf("incoming array value: %d\n", sort[i]);
    new_sorted_val = sort[i];
    sorted_index = i;
    for(int j=i; j<array_len; j++)
    {
      //printf("array values: %d\t", sort[j]);
      if(new_sorted_val > sort[j])
      {
        new_sorted_val = sort[j];
        sorted_index = j;
        //printf("found a sorted val: %d\t", sort[j]);
      }
    }
    //sort[i] = new_sorted_val;
    temp_store = sort[i];
    sort[i] = sort[sorted_index];
    sort[sorted_index] = temp_store;
    for(int k=0;k<array_len;k++)
    {
      printf("array val: %d\t", sort[k]);
    }
    printf("\n");
    i++;
  }

}



















































//   int unsort_len = array_len;
//   int sort_len = 0;
//   int sorted_val = sort[0];
//   int start_index = 0;
//   int temp_storage = 0;
//   int sort_index = 0;
//   while(unsort_len > 0)
//   {
//     //printf("here\n");
//     sort_len = start_index;
//     //printf("sort_len: %d, unsort_len: %d\n", sort_len, unsort_len);
//     while(sort_len < array_len)
//     {
//       //printf("COMING VALUE: %d\n", sort[sort_len]);
//       if(sorted_val >= sort[sort_len])
//       {
//         //temp_storage = sorted_val;
//         sorted_val = sort[sort_len];
//         sort_index = sort_len;
//
//       }
//       // sort[sort_len] = temp_storage;
//       // sort[start_index] = sorted_val;
//       sort_len++;
//     }
//     printf("new sorted val is: %d\n", sorted_val);
//     printf("new sorted index is: %d\n", sort_index);
//     //printf("sort[start_index] is: %d\n", sort[start_index]);
//     temp_storage = sort[start_index];
//     sort[start_index] = sorted_val;
//     sort[sort_index] = temp_storage;
//     unsort_len--;
//     start_index++;
//     // for(int j=0;j<array_len;j++)
//     // {
//     //   printf("array is : %d\t", sort[j]);
//     // }
//     // printf("\n");
//   }
// }
