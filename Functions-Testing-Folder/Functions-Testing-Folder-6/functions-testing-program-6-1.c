
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-2/\
library-functions-program-2.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-3/\
library-functions-program-3.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int update_typical_variables_test(int* variables,
  int amount, int integer, int* output)
{
  variables=update_typical_variables(variables, amount,
    integer);
  return compare_integer_arrays(variables, output, 2);
}

int integer_array_typical_test(int* array, int length,
  int output)
{
  int typical = integer_array_typical(array, length);
  return (typical == output);
}

int array_integer_frequency_test(int* array,int length,
  int integer, double output)
{
  double amount = array_integer_frequency(array,length,
    integer); return (amount == output);
}

int array_integer_percent_test(int* array, int length,
  int integer, double output)
{
  double percent = array_integer_percent(array, length,
    integer); return (percent == output);
}

int integer_array_median_test(int* array, int length,
  double output)
{
  double median = integer_array_median(array, length);
  return (median == output);
}

int integer_array_average_test(int* array, int length,
  double output)
{
  double average = integer_array_average(array,length);
  return (average == output);
}

int integer_odd_median_test(int* array, int length,
  double output)
{
  double median = integer_odd_median(array, length);
  return (median == output);
}

int integer_even_median_test(int* array, int length,
  double output)
{
  double median = integer_even_median(array, length);
  return (median == output);
}

int array_integers_sequences_test(int*array,int length,
  int output)
{
  int sequences = array_integers_sequences(array,
    length); return (sequences == output);
}
