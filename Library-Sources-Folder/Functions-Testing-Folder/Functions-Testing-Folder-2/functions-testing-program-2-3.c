
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int delete_matrix_array_test(int** matrix, int height,
  int index, int** output)
{
  matrix = delete_matrix_array(matrix, height, index);
  int width = matrix_array_length(matrix, 0);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int allocate_matrix_array_test(int** matrix, int index,
  int* array, int** output)
{
  matrix = allocate_matrix_array(matrix, index, array);
  int width = matrix_array_length(matrix, 0);
  int height = integer_matrix_height(matrix, width);
  return compare_integer_matrix(matrix, output,
    height, width);
}

int shuffle_integer_matrix_test(int**matrix,int height,
  int** output)
{
  int width = matrix_array_length(matrix, 0);
  matrix = shuffle_integer_matrix(matrix, height);
  int same=compare_integer_matrix(matrix,output,height,
    width);
  int content = compare_matrix_content(matrix, output,
    height, width); return (!same && content);
}

int matrix_array_total_test(int** matrix, int index,
  int output)
{
  int total = matrix_array_total(matrix, index);
  return compare_integer_variables(total, output);
}

int sort_integer_matrix_test(int** matrix, int height,
  int** output)
{
  matrix = sort_integer_matrix(matrix, height);
  int width = matrix_array_length(matrix, 0);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int matrix_array_greater_test(int** matrix, int height,
  int first, int second, int output)
{
  int boolean = matrix_array_greater(matrix, height,
    first, second);
  return compare_integer_variables(boolean, output);
}

int matrix_array_integer_test(int** matrix, int height,
  int width, int output)
{
  int integer = matrix_array_integer(matrix, height,
    width);
  return compare_integer_variables(integer, output);
}

int sort_matrix_iteration_test(int** matrix,int height,
  int iteration, int** output)
{
  matrix = sort_matrix_iteration(matrix, height,
    iteration);
  int width = matrix_array_length(matrix, 0);
  return compare_integer_matrix(matrix, output, height,
    width);
}

int matrix_integer_greater_test(int** matrix, int first,
  int second, int index, int output)
{
  int boolean = matrix_integer_greater(matrix, first,
    second, index);
  return compare_integer_variables(boolean, output);
}

int matrix_integer_smaller_test(int** matrix, int first,
  int second, int index, int output)
{
  int boolean = matrix_integer_smaller(matrix, first,
    second, index);
  return compare_integer_variables(boolean, output);
}

int matrix_array_smaller_test(int** matrix, int height,
  int first, int second, int output)
{
  int boolean = matrix_array_smaller(matrix, height,
    first, second);
  return compare_integer_variables(boolean, output);
}
