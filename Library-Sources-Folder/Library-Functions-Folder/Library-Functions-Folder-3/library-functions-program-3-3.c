
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../library-functions-headers.h"

int* hashmap_keyword_array(int** hashmap, int length)
{
  int* array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    int keyword = hashmap_index_keyword(hashmap,index);
    array=allocate_array_integer(array,index, keyword);
  }
  return array;
}

int** allocate_index_value(int** hashmap, int index,
  int value)
{
  hashmap = allocate_matrix_integer(hashmap, index, 1,
    value); return hashmap;
}

int compare_integer_hashmaps(int** first, int** second,
  int length)
{
  return compare_integer_matrix(first,second,length,2);
}

int** sort_hashmap_iteration(int** hashmap, int length,
  int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(hashmap_keyword_smaller(hashmap,index, index+1))
      continue;
    hashmap = switch_adjacent_arrays(hashmap, index);
  }
  return hashmap;
}

int** sort_integer_hashmap(int** hashmap, int length)
{
  for(int index = length; index >= 0; index =index - 1)
  {
    hashmap = sort_hashmap_iteration(hashmap, length,
      index);
  }
  return hashmap;
}

int compare_hashmap_content(int** first, int** second,
  int length)
{
  first = sort_integer_hashmap(first, length);
  second = sort_integer_hashmap(second, length);
  return compare_integer_hashmaps(first,second,length);
}

int** generate_integer_hashmap(int length)
{
  int** matrix = generate_integer_matrix(length, 2);
  return matrix;
}

int hashmap_keyword_value(int** hashmap, int keyword)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  return hashmap_index_value(hashmap, index);
}

int** duplicate_integer_hashmap(int** hashmap,
  int length)
{
  return duplicate_integer_matrix(hashmap, length, 2);
}

int** remove_hashmap_keyword(int** hashmap, int length,
  int keyword)
{
  int index = hashmap_keyword_index(hashmap, keyword);
  return delete_hashmap_keyword(hashmap, length,index);
}
