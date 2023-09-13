//-------- pass by reference and pass by value example array------//
//variables copyvalue and pass to function
//arrays sends the reference. actual arrays
// #include<stdio.h>
// void set_int(int x);
// void set_array(int array[4]);
// int main(void)
// {
//   int a = 10;
//   int array[4] = {1,2,3,4};
//   set_int(a);
//   set_array(array);
//   printf("%d, %d\n",a, array[0]);
// }
//
// void set_int(int x)
// {
//   x = 100;
// }
// void set_array(int array[4])
// {
//   array[0] = 99;
// }
//----------------------------------------------------------------//
#include<stdio.h>
int main(void)
{
  int array[10] = {1,2,3,4,5,6,7,8,9,10};
  int size = 10;
  int start_index = 0;
  int end_index = 9;
  int mid_point = start_index+end_index/2;
  int find_val;
  printf("enter the find val");
  scanf("%d", &find_val);

  while(size != 0)
  {
    if(array[start_index+end_index/2] == find_val)
    {
      printf("index: %d\n value: %d\n", start_index+end_index/2, array[start_index+end_index/2]);
      return 0;
    }
    else
    {
      printf("not the center value");
      if(find_val > array[start_index+end_index/2])
      {
        start_index = (start_index+end_index/2) + 1;
      }
      else if(find_val < array[start_index+end_index/2])
      {
        end_index = (start_index+end_index/2) - 1;
      }
    }
  }
}
