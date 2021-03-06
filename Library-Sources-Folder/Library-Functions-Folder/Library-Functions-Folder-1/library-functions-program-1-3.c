
#include "../library-functions-headers.h"

int compare_array_content(int* first, int* second,
  int length)
{
  first = sort_integer_array(first, length);
  second = sort_integer_array(second, length);
  return compare_integer_arrays(first, second, length);
}

void integer_array_stdout(int* array, int length,
  int new_line, int spaces)
{
  for(int index = 0; index < length; index = index + 1)
  {
    array_integer_stdout(array, index, spaces);
  }
  if(compare_integer_variables(new_line, true))
    printf("\n");
}

int* duplicate_integer_array(int* array, int length)
{
  int* doublet = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    doublet = allocate_array_integer(doublet, index,
      array_index_integer(array, index));
  }
  return doublet;
}

int array_integer_greater(int* array, int first,
  int second)
{
  int f_integer = array_index_integer(array, first);
  int s_integer = array_index_integer(array, second);
  return integer_variable_greater(f_integer,s_integer);
}

int array_index_integer(int* array, int index)
{
  int integer = *(array + index); return integer;
}

int* shuffle_integer_array(int* array, int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    int random = generate_random_integer(0,length - 1);
    array = switch_array_integers(array, index,random);
  }
  return array;
}

int* generate_integer_pair(int first, int second)
{
  int* pair = generate_integer_array(2);
  pair = allocate_array_integer(pair, 0, first);
  return allocate_array_integer(pair, 1, second);
}

int integer_array_total(int* array, int length)
{
  int total = 0;
  for(int index = 0; index < length; index = index + 1)
  {
    int integer = array_index_integer(array, index);
    if(compare_integer_variables(integer, INT_MIN))
      continue;
    total = increase_integer_variable(total, integer);
  }
  return total;
}

int* integer_array_section(int* array, int first,
  int second)
{
  int* section=generate_integer_array(second-first +1);
  for(int index = first; index <= second; index += 1)
  {
    int length = integer_array_length(section);
    int integer = array_index_integer(array, index);
    section = append_array_integer(section, length,
      integer);
  }
  return section;
}

int compare_array_integers(int* array, int first,
  int second)
{
  int f_integer = array_index_integer(array, first);
  int s_integer = array_index_integer(array, second);
  return compare_integer_variables(f_integer,
    s_integer);
}
