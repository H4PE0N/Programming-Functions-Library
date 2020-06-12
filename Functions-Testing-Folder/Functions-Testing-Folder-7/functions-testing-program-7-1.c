
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-7/\
library-functions-program-7.h"

int binary_left_shifting_test(char*i_binary, int length,
  char* o_binary)
{
  i_binary = binary_left_shifting(i_binary, length);
  return compare_character_strings(i_binary, o_binary,
    length);
}

int binary_right_shifting_test(char*i_binary,int length,
  char* o_binary)
{
  i_binary = binary_right_shifting(i_binary, length);
  return compare_character_strings(i_binary, o_binary,
    length);
}

int binary_and_operation_test(char* first,char* second,
  int length, char* i_binary)
{
  char* binary = binary_and_operation(first, second,
    length);
  return compare_character_strings(binary, i_binary,
    length);
}

int binary_or_operation_test(char* first, char* second,
  int length, char* i_binary)
{
  char* binary = binary_or_operation(first, second,
    length);
  return compare_character_strings(binary, i_binary,
    length);
}

int binary_xor_operation_test(char* first,char* second,
  int length, char* i_binary)
{
  char* binary = binary_xor_operation(first, second,
    length);
  return compare_character_strings(binary, i_binary,
    length);
}

int binary_not_operation_test(char*i_binary,int length,
  char* o_binary)
{
  i_binary = binary_not_operation(i_binary, length);
  return compare_character_strings(i_binary, o_binary,
    length);
}
