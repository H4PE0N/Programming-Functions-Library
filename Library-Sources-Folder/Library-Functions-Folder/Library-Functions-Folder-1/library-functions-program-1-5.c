
#include "../library-functions-headers.h"

int* generate_random_coordinate(int width, int height)
{
  int r_width = generate_random_integer(0, width - 1);
  int r_height = generate_random_integer(0, height-1);
  return generate_coordinate_variable(r_width,
    r_height);
}

int array_integer_smaller(int* array, int first,
  int second)
{
  int f_integer = array_index_integer(array, first);
  int s_integer = array_index_integer(array, second);
  return integer_variable_smaller(f_integer,s_integer);
}

int* generate_random_pair(int minimum, int maximum)
{
  int* pair = generate_random_array(2,minimum,maximum);
  return pair;
}

int* insert_array_integers(int* array, int first,
  int second, int integer)
{
  for(int index=first; index <= second;index=index + 1)
  {
    array=allocate_array_integer(array, index,integer);
  }
  return array;
}

int compare_arrays_integer(int* first, int* second,
  int index)
{
  int f_integer = array_index_integer(first, index);
  int s_integer = array_index_integer(second, index);
  return compare_integer_variables(f_integer,
    s_integer);
}

void array_integer_stdout(int* array, int index,
  int spaces)
{
  char integer = array_index_integer(array, index);
  if(!compare_integer_variables(integer, INT_MIN))
    printf("%d", integer); else printf("+");
  if(compare_integer_variables(spaces, true))
    printf(" ");
}
