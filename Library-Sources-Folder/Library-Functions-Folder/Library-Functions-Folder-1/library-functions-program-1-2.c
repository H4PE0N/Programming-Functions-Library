
#include "../library-functions-headers.h"

int* remove_array_integer(int* array, int length,
  int integer)
{
  int index =array_integer_index(array,length,integer);
  return delete_array_integer(array, length, index);
}

int compare_integer_arrays(int* first, int* second,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    if(!compare_arrays_integer(first, second, index))
      return false;
  }
  return true;
}

int* append_array_integers(int* array, int length,
  int integer, int amount)
{
  for(int index = 0; index < amount; index = index + 1)
  {
    int current = (length + index);
    array=append_array_integer(array,current, integer);
  }
  return array;
}

int* remove_array_integers(int* array, int length,
  int integer)
{
  while(array_contains_integer(array, length, integer))
  {
    array = remove_array_integer(array,length,integer);
  }
  return array;
}

int array_integer_amount(int* array, int length,
  int integer)
{
  int amount = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    int current = array_index_integer(array, index);
    if(compare_integer_variables(integer, current))
      amount = increase_integer_variable(amount, 1);
  }
  return amount;
}

int integers_range_between(int* array, int minimum,
  int maximum)
{
  int length = integer_array_length(array);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    if(!integer_range_between(integer, minimum,
      maximum)) return false;
  }
  return true;
}

int* reverse_integer_array(int* array, int length)
{
  int* reverse = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, length -
      (index + 1));
    reverse = append_array_integer(reverse, index,
      integer);
  }
  return reverse;
}

int* generate_random_array(int length, int minimum,
  int maximum)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    array = allocate_array_integer(array, index,
      generate_random_integer(minimum, maximum));
  }
  return array;
}

int* switch_array_integers(int* array, int first,
  int second)
{
  int switch_integer = array_index_integer(array,
    first);
  *(array + first) = array_index_integer(array,second);
  *(array + second) = switch_integer; return array;
}
