
/* This program contains functions that test the
functions in file competitive-functions-program-1.h */

#include <stdlib.h>

#include "../Competitive-Functions-Program-1/\
competitive-functions-program-1.h"

// Input array, index, number, output array;
int allocate_array_value_test(int* i_array, int index,
  int number, int* o_array)
{
  i_array = allocate_array_value(i_array,index,number);
  int length = calculate_array_length(o_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Input array, total length, index, output array;
int delete_array_value_test(int* i_array, int t_length,
  int index, int* o_array)
{
  i_array = delete_array_value(i_array,t_length,index);
  return compare_integer_arrays(i_array,o_array,t_length);
}

// Input array, total length, output array;
int allocate_array_values_test(int* i_array,int t_length,
  int* o_array)
{
  i_array = allocate_array_values(i_array, t_length);
  return compare_integer_arrays(i_array,o_array,t_length);
}

// Total length, output array;
int generate_empty_array_test(int t_length, int* o_array)
{
  int* array = generate_empty_array(t_length);
  return compare_integer_arrays(array,o_array,t_length);
}

// Input array, output length;
int calculate_array_length_test(int* i_array, int length)
{
  int o_length = calculate_array_length(i_array);
  return (o_length == length);
}

// Input array, length, number, output boolean;
int array_contains_number_test(int* i_array, int length,
  int number, int boolean)
{
  int answer=array_contains_number(i_array,length,number);
  return (answer == boolean);
}

// Input array, index, output array;
int switch_array_numbers_test(int* i_array, int index,
  int* o_array)
{
  i_array = switch_array_numbers(i_array, index);
  int length = calculate_array_length(o_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Input array, index, output array;
int bubble_sort_iteration_test(int* i_array, int index,
  int* o_array)
{
  i_array = bubble_sort_iteration(i_array, index);
  int length = calculate_array_length(o_array);
  return compare_integer_arrays(i_array,o_array,length);
}

// Input array, current length, output array;
int bubble_sort_array_test(int* i_array, int c_length,
  int* o_array)
{
  i_array = bubble_sort_array(i_array, c_length);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Input array, current length, number, output array;
int add_array_number_test(int* i_array, int c_length,
  int number, int* o_array)
{
  i_array = add_array_number(i_array, c_length, number);
  c_length = calculate_array_length(o_array);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Input array, current length, start, output array;
int move_array_numbers_test(int* i_array, int c_length,
  int start, int* o_array)
{
  i_array = move_array_numbers(i_array,c_length,start);
  return compare_integer_arrays(i_array,o_array,c_length);
}

// Input array, current length, number, output array;
int remove_array_number_test(int* i_array, int c_length,
  int number, int* o_array)
{
  i_array = remove_array_number(i_array,c_length,number);
  return compare_integer_arrays(i_array,o_array,c_length);
}

/* Made by Roy Hampus Fridholm */
