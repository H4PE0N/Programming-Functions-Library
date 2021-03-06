
#include "../library-functions-headers.h"

int** sort_matrix_iteration(int** matrix, int height,
  int iteration)
{
  for(int index = 0; index < (iteration - 1); index++)
  {
    if(matrix_array_smaller(matrix, height, index,
      index + 1)) continue;
    matrix = switch_adjacent_arrays(matrix, index);
  }
  return matrix;
}

int** sort_integer_matrix(int** matrix, int height)
{
  for(int index = height; index >= 0; index =index - 1)
  {
    matrix=sort_matrix_iteration(matrix,height, index);
  }
  return matrix;
}

int matrix_integer_greater(int** matrix, int first,
  int second, int index)
{
  int f_integer = matrix_array_integer(matrix, first,
    index);
  int s_integer = matrix_array_integer(matrix, second,
    index);
  return integer_variable_greater(f_integer,s_integer);
}

int matrix_integer_smaller(int** matrix, int first,
  int second, int index)
{
  int f_integer = matrix_array_integer(matrix, first,
    index);
  int s_integer = matrix_array_integer(matrix, second,
    index);
  return integer_variable_smaller(f_integer,s_integer);
}

int matrix_array_integer(int** matrix, int height,
  int width)
{
  int* array = matrix_index_array(matrix, height);
  int integer = array_index_integer(array, width);
  return integer;
}

int matrix_array_greater(int** matrix, int height,
  int first, int second)
{
  matrix = sort_matrix_arrays(matrix, height);
  int width = matrix_array_length(matrix, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(matrix_integer_smaller(matrix, first, second,
      index)) return false;
    if(matrix_integer_greater(matrix, first, second,
      index)) return true;
  }
  return false;
}

int matrix_array_smaller(int** matrix, int height,
  int first, int second)
{
  matrix = sort_matrix_arrays(matrix, height);
  int width = matrix_array_length(matrix, 0);
  for(int index = 0; index < width; index = index + 1)
  {
    if(matrix_integer_greater(matrix, first, second,
      index)) return false;
    if(matrix_integer_smaller(matrix, first, second,
      index)) return true;
  }
  return false;
}

int** insert_matrix_integers(int** matrix, int* first,
  int* second, int integer)
{
  for(int index = first[1]; index <= second[1];index++)
  {
    int* array = matrix_index_array(matrix, index);
    array = insert_array_integers(array, first[0],
      second[0], integer);
    matrix = allocate_matrix_array(matrix,index,array);
  }
  return matrix;
}
