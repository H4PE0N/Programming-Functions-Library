
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

#include "../Competitive-Functions-Folder-3/\
competitive-functions-program-3.h"

int* hashmap_keyword_array(int** hashmap)
{
  int length = integer_hashmap_length(hashmap),
    *array = generate_integer_array(length);
  for(int index = 0; index < length; index = index + 1)
  {
    *(array + index) = *(*(hashmap + index) + 0);
  }
  return array;
}

int integer_hashmap_value(int** hashmap, int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  return (index >= 0 ? *(*(hashmap + index) + 1) : -1);
}

int* integer_value_keywords(int** hashmap, int value,
  int i_length)
{
  int* keywords = generate_integer_array(i_length);
  for(int index = 0; index < i_length; index = index+1)
  {
    if(*(*(hashmap + index) + 1) != value) continue;
    int length = integer_array_length(keywords);
    keywords = add_array_integer(keywords, length,
      *(*(hashmap + index) + 0));
  }
  return keywords;
}

int* integer_hashmap_keywords(int** hashmap, int value)
{
  int length = integer_hashmap_length(hashmap);
  return integer_value_keywords(hashmap, value, length);
}

int** delete_hashmap_keyword(int** hashmap, int length,
  int keyword)
{
  int index = integer_keyword_index(hashmap, keyword);
  hashmap = move_matrix_arrays(hashmap, length, index);
  *(hashmap + (length - 1)) = allocate_array_integers(
    *(hashmap + (length - 1)), 2); return hashmap;
}

int** reduce_hashmap_value(int** hashmap, int keyword)
{
  int index = integer_keyword_index(hashmap, keyword),
    length = integer_hashmap_length(hashmap);
  if(*(*(hashmap + index) + 1) > 1)
    { *(*(hashmap + index) + 1) -= 1; return hashmap; }
  return delete_hashmap_keyword(hashmap,length,keyword);
}
