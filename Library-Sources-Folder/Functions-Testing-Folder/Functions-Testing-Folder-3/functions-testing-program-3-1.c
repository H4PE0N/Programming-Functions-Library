
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int hashmap_keyword_index_test(int** hashmap,
  int length, int keyword, int output)
{
  int index = hashmap_keyword_index(hashmap, length,
    keyword);
  return compare_integer_variables(index, output);
}

int convert_hashmap_array_test(int**hashmap,int length,
  int* output)
{
  int* array = convert_hashmap_array(hashmap, length);
  int a_length = integer_array_length(array);
  return compare_integer_arrays(array,output,a_length);
}

int increase_keyword_value_test(int** hashmap,
  int length, int keyword, int** output)
{
  hashmap = increase_keyword_value(hashmap, length,
    keyword);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int generate_integer_hashmap_test(int length,
  int** output)
{
  int** hashmap = generate_integer_hashmap(length);
  length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int hashmap_keyword_exists_test(int** hashmap,
  int length, int keyword, int output)
{
  int boolean=hashmap_keyword_exists(hashmap, length,
    keyword);
  return compare_integer_variables(boolean, output);
}

int generate_hashmap_keyword_test(int** hashmap,
  int keyword, int** output)
{
  hashmap = generate_hashmap_keyword(hashmap, keyword);
  int length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int hashmap_keyword_array_test(int**hashmap,int length,
  int* output)
{
  int* array = hashmap_keyword_array(hashmap, length);
  length = integer_array_length(array);
  return compare_integer_arrays(array, output, length);
}

int integer_hashmap_length_test(int** hashmap,
  int output)
{
  int length = integer_hashmap_length(hashmap);
  return compare_integer_variables(length, output);
}

int convert_array_hashmap_test(int* array, int length,
  int** output)
{
  int** hashmap = convert_array_hashmap(array, length);
  length = integer_hashmap_length(hashmap);
  return compare_integer_hashmaps(hashmap, output,
    length);
}

int hashmap_value_keywords_test(int** hashmap,
  int length, int value, int* output)
{
  int* keywords=hashmap_value_keywords(hashmap, length,
    length);
  int keywords_length = integer_array_length(keywords);
  return compare_integer_arrays(keywords, output,
    keywords_length);
}

int integer_hashmap_total_test(int**hashmap,int length,
  int output)
{
  int total = integer_hashmap_total(hashmap, length);
  return compare_integer_variables(total, output);
}
