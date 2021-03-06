
#include "../library-functions-headers.h"

int** generate_integer_matrix(int height, int width)
{
  int** matrix =malloc(sizeof(*matrix) * (height + 1));
  for(int index = 0; index <= height; index =index + 1)
  {
    int* array = generate_integer_array(width);
    matrix = append_matrix_array(matrix, index, array);
  }
  return matrix;
}

int** allocate_matrix_integer(int** matrix, int height,
  int width, int integer)
{
  int* array = matrix_index_array(matrix, height);
  array = allocate_array_integer(array,width, integer);
  return allocate_matrix_array(matrix, height, array);
}

int** delete_matrix_integer(int** matrix, int height,
  int width)
{
  int* array = matrix_index_array(matrix, height);
  int length = matrix_array_length(matrix, height);
  array = delete_array_integer(array, length, width);
  return allocate_matrix_array(matrix, height, array);
}

int integer_matrix_height(int** matrix, int width)
{
  int height = 0;
  while(matrix_array_length(matrix, height) >= width)
  {
    height = increase_integer_variable(height, 1);
  }
  return height;
}

int matrix_contains_integer(int** matrix, int height,
  int width, int integer)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    if(array_contains_integer(array, width, integer))
      return true;
  }
  return false;
}

int matrix_array_contains(int** matrix, int index,
  int integer)
{
  int* array = matrix_index_array(matrix, index);
  int length = matrix_array_length(matrix, index);
  return array_contains_integer(array, length,integer);
}

int** remove_matrix_integer(int** matrix, int height,
  int integer)
{
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    if(!matrix_array_contains(matrix, index, integer))
      continue;
    matrix[index] = remove_array_integer(matrix[index],
      matrix_array_length(matrix, index), integer);
    break;
  }
  return matrix;
}

int** append_matrix_integer(int** matrix, int height,
  int integer)
{
  int* array = matrix_index_array(matrix, height);
  int length = matrix_array_length(matrix, height);
  array = append_array_integer(array, length, integer);
  return allocate_matrix_array(matrix, height, array);
}

int** remove_matrix_array(int** matrix, int height,
  int* array)
{
  int index = matrix_array_index(matrix, height,array);
  return delete_matrix_array(matrix, height, index);
}

int** append_matrix_array(int** matrix, int height,
  int* array)
{
  matrix = allocate_matrix_array(matrix, height,array);
  return matrix;
}
