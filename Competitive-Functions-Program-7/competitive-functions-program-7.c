
/* This program contains functions that deals with
*/

#include <stdlib.h>
#include <string.h>

#include "../Competitive-Functions-Program-4/\
competitive-functions-program-4.h"

#include "../Competitive-Functions-Program-5/\
competitive-functions-program-5.h"

// char* binary_left_shifting(char* binary, int length)
// {
//
// }
//
// char* binary_right_shifting(char* binary, int length)
// {
//
// }
//
// char calculate_and_character(char* first, char* second,
//   int index)
// {
//   return (*(first + index) - '0' * *(second + index) - '0' ) + '0';
// }
//
// char* binary_and_opperation(char* first, char* second)
// {
//   int length = calculate_string_length(first);
//   char* new_binary = generate_empty_string(length);
//   for(int index = 0; index < length; index++)
//   {
//     char character = calculate_and_character(first, second,
//       index);
//     new_binary = add_string_character(new_binary,
//       index, character);
//   }
//   return new_binary;
// }
//
// char* binary_or_opperation(char* first, char* second)
// {
//
// }
//
// char* binary_xor_opperation(char* first, char* second)
// {
//
// }

char* binary_not_opperation(char* binary, int length)
{
  char* new_binary = generate_empty_string(length);
  for(int index = 0; index < length; index++)
  {
    if(*(binary + index) == '1') { new_binary =
      allocate_string_value(new_binary, index, '0'); }
    else { new_binary =
      allocate_string_value(new_binary, index, '1'); }
  }
  return new_binary;
}

/* Made by Roy Hampus Fridholm */
