
#include "../library-functions-headers.h"

char* generate_character_string(int length)
{
  char* string = malloc(sizeof(string) * (length + 1));
  return allocate_string_characters(string,length + 1);
}

int character_string_length(char* string)
{
  int length = 0;
  while(string_index_character(string, length) !=
    CHAR_MIN)
  {
    length = increase_integer_variable(length, 1);
  }
  return length;
}

int string_contains_character(char* string, int length,
  char character)
{
  for(int index = 0; index < length; index = index + 1)
  {
    char current=string_index_character(string, index);
    if(compare_character_variables(character, current))
      return true;
  }
  return false;
}

char* allocate_string_character(char* string,int index,
  char character)
{
  *(string + index) = character; return string;
}

char* switch_string_characters(char* string, int first,
  int second)
{
  char switch_character =string_index_character(string,
    first);
  *(string + first) = string_index_character(string,
    second);
  *(string + second) = switch_character; return string;
}

char* move_string_characters(char* string, int length,
  int start)
{
  for(int index = start; index < length; index += 1)
  {
    string = switch_adjacent_characters(string, index);
  }
  return string;
}

char* allocate_string_characters(char* string,
  int length)
{
  for(int index = 0; index < length; index = index + 1)
  {
    string = allocate_string_character(string, index,
      CHAR_MIN);
  }
  return string;
}

char* remove_string_character(char* string, int length,
  char character)
{
  int index = string_character_index(string, length,
    character);
  return delete_string_character(string, length,index);
}

char* append_string_character(char* string, int length,
  char character)
{
  string = allocate_string_character(string, length,
    character); return string;
}

char* append_string_characters(char* string,int length,
  char character, int amount)
{
  for(int index = 0; index < amount; index = index + 1)
  {
    string=append_string_character(string,length+index,
      character);
  }
  return string;
}
