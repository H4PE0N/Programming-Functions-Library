
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-1/\
library-functions-program-1.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-6/\
library-functions-program-6.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int fraction_variable_denominator(int* fraction)
{
  int denominator = array_index_integer(fraction, 1);
  return denominator;
}

int* generate_random_fraction(int minimum, int maximum)
{
  int numerator = generate_random_integer(minimum,
    maximum);
  int denominator = generate_random_integer(minimum,
    maximum);
  return generate_fraction_variable(numerator,
    denominator);
}

int fraction_variable_numerator(int* fraction)
{
  int numerator = array_index_integer(fraction, 0);
  return numerator;
}

void fraction_variable_stdout(int* fraction)
{
  int numerator =fraction_variable_numerator(fraction);
  int denominator = fraction_variable_denominator(
    fraction);
  printf("%d / %d\n", numerator, denominator);
}
