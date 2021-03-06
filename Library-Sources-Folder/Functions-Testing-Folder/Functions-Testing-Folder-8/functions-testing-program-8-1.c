
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int integer_range_between_test(int integer,int minimum,
  int maximum, int output)
{
  int boolean = integer_range_between(integer, minimum,
    maximum);
  return compare_integer_variables(boolean, output);
}

int convert_decimal_percent_test(double decimal,
  double output)
{
  double percent = convert_decimal_percent(decimal);
  return compare_decimal_variables(percent, output);
}

int convert_percent_decimal_test(double percent,
  double output)
{
  double decimal = convert_percent_decimal(percent);
  return compare_decimal_variables(decimal, output);
}

int check_integer_divisible_test(int first, int second,
  int output)
{
  int boolean = check_integer_divisible(first, second);
  return compare_integer_variables(boolean, output);
}

int integer_between_integers_test(int first,int second,
  double output)
{
  double integer = integer_between_integers(first,
    second);
  return compare_decimal_variables(integer, output);
}

int increase_integer_variable_test(int variable,
  int integer, int output)
{
  variable=increase_integer_variable(variable,integer);
  return compare_integer_variables(variable, output);
}

int integer_variable_greater_test(int first,int second,
  int output)
{
  int boolean = integer_variable_greater(first,second);
  return compare_integer_variables(boolean, output);
}

int integer_variable_smaller_test(int first,int second,
  int output)
{
  int boolean = integer_variable_smaller(first,second);
  return compare_integer_variables(boolean, output);
}

int compare_integer_variables_test(int first,
  int second, int output)
{
  int boolean=compare_integer_variables(first, second);
  return compare_integer_variables(boolean, output);
}

int generate_fraction_variable_test(int numerator,
  int denominator, int* output)
{
  int* fraction = generate_fraction_variable(numerator,
    denominator);
  return compare_integer_arrays(fraction, output, 2);
}

int inverted_fraction_variable_test(int* fraction,
  int* output)
{
  int* inverted = inverted_fraction_variable(fraction);
  return compare_fraction_variables(inverted, output);
}

int least_common_denominator_test(int* first,
  int* second, int output)
{
  int denominator = least_common_denominator(first,
    second);
  return compare_integer_variables(denominator,output);
}

int decimal_variable_smaller_test(double first,
  double second, int output)
{
  int boolean = decimal_variable_smaller(first,second);
  return compare_integer_variables(boolean, output);
}
