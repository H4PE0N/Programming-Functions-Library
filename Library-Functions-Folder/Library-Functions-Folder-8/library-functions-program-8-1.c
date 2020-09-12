
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int greatest_common_table(int greater, int smaller)
{
  for(int index = smaller; index > 0; index =index - 1)
  {
    if(greater % index == 0 && smaller % index == 0)
      return index;
  }
  return false;
}

int integer_range_between(int integer, int minimum,
  int maximum)
{
  return (!integer_variable_greater(integer, maximum)
    && !integer_variable_smaller(integer, minimum));
}

double convert_decimal_percent(double decimal)
{
  double percent = (decimal * 100); return percent;
}

int calculate_common_denominator(int*first, int*second)
{
  int first_d = fraction_variable_denominator(first);
  int second_d = fraction_variable_denominator(second);
  return (first_d * second_d);
}

int increase_integer_variable(int variable)
{
  variable = (variable + 1); return variable;
}

int* smallest_fraction_form(int* fraction)
{
  if(integer_variable_greater(fraction[0],fraction[1]))
  {
    int table = greatest_common_table(fraction[0],
      fraction[1]);
    return shorten_fraction_variable(fraction, table);
  }
  int table = greatest_common_table(fraction[1],
    fraction[0]);
  return shorten_fraction_variable(fraction, table);
}

int integer_power_operation(int integer, int power)
{
  int product = 1;
  for(int index = 0; index < power; index = index + 1)
  {
    product = (product * integer);
  }
  return product;
}

int fraction_variable_smaller(int* first, int* second)
{
  double f_decimal = convert_fraction_decimal(first);
  double s_decimal = convert_fraction_decimal(second);
  return decimal_variable_smaller(f_decimal,s_decimal);
}

int compare_integer_variables(int first, int second)
{
  int boolean = (first == second); return boolean;
}

int compare_percent_variables(double first,
  double second)
{
  int boolean = (first == second); return boolean;
}

int* generate_random_fraction(double minimum,
  double maximum)
{
  double decimal = generate_random_decimal(minimum,
    maximum); return convert_decimal_fraction(decimal);
}

int integer_variable_smaller(int first, int second)
{
  int boolean = (first < second); return boolean;
}
