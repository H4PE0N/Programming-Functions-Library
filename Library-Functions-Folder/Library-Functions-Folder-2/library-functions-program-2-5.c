
#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int** reverse_integer_matrix(int** matrix, int height,
  int width)
{
  int** reverse = generate_matrix_array(height, width);
  for(int index = 0; index < height; index = index + 1)
  {
    *(reverse + index) = matrix_index_array(matrix,
      height - (index + 1));
  }
  return reverse;
}

int** reverse_matrix_arrays(int** matrix, int height,
  int width)
{
  for(int index = 0; index < height; index = index + 1)
  {
    int* array = matrix_index_array(matrix, index);
    *(matrix + index) = reverse_integer_array(array,
      width);
  }
  return matrix;
}

int matrix_array_index(int** matrix, int height,
  int* array)
{
  int array_index = height;
  for(int index = (height - 1); index >= 0; index -= 1)
  {
    int* index_array=matrix_index_array(matrix, index);
    int length = integer_array_length(array);
    if(compare_integer_arrays(array, index_array,
      length)) { array_index = index; break; }
  }
  return array_index;
}
