#include<stdio.h>

int main(void)
{
  /* ------Input from the user------- */
  int length = 0;
  int search_value = 0;

  //take the length of the array input form user
  printf("enter the length: \n");
  scanf("%d", &length);
  printf("length is: %d\n", length);

  //defines an array with user specified length
  int user_array[length];
  //user inputs array value
  printf("enter array values: \n");
  for(int i=0;i<length; i++)
  {
    scanf("%d", &user_array[i]);
    /* printf("user_array[%d] is: %d\n", i, user_array[i]); */
  }

  //user inputs value to be searched
  printf("enter the value to be searched: \n");
  scanf("%d", &search_value);

  /* ------Input from the user------- */


  /* ------Linear Serch Algorithm------ */

  int i = 0;


  //searches the whole array one element by element
  while(i < length)
  {
    if(user_array[i] == search_value)
    {
      printf("user_array[%d] is: %d\n", i, search_value);
      //if the search value is found returns
      return 0;
    }
    //else continues
    i++;
  }
  //if the value is not found anywhere in the array prints that out
  printf("array does not have %d\n", search_value);
}

  /* ------Linear Serch Algorithm------ */
