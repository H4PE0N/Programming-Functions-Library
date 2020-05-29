
#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-1/\
competitive-functions-program-1.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-2/\
competitive-functions-program-2.h"

#include "../../Competitive-Program-Folder/\
Competitive-Functions-Folder-3/\
competitive-functions-program-3.h"

#include "../Competitive-Functions-Testing-3/\
competitive-functions-testing-3.h"

int integer_value_keywords_test(int** hashmap,
  int value, int i_length, int* o_keywords)
{
  int* i_keywords = integer_value_keywords(hashmap,
    value, i_length);
  int length = integer_array_length(i_keywords);
  return compare_integer_arrays(i_keywords,o_keywords,
    length);
}

int integer_hashmap_keywords_test(int** hashmap,
  int value, int* i_keywords)
{
  int* keywords = integer_hashmap_keywords(hashmap,
    value);
  int length = integer_array_length(keywords);
  return compare_integer_arrays(keywords, i_keywords,
    length);
}

int integer_hashmap_value_test(int** hashmap,
  int keyword, int i_value)
{
  int value = integer_hashmap_value(hashmap, keyword);
  return (value == i_value);
}

int delete_hashmap_keyword_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  int length = integer_hashmap_length(i_hashmap);
  i_hashmap = delete_hashmap_keyword(i_hashmap,length,
    keyword);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length, 2);
}

int reduce_hashmap_value_test(int** i_hashmap,
  int keyword, int** o_hashmap)
{
  i_hashmap = reduce_hashmap_value(i_hashmap,keyword);
  int length = integer_hashmap_length(i_hashmap);
  return compare_matrix_arrays(i_hashmap, o_hashmap,
    length - 1, 2);
}