
#include <stdlib.h>
#include <stdbool.h>

#include "../Competitive-Functions-Folder-4/\
competitive-functions-program-4.h"

char* remove_string_characters(char* string,int length,
  char character)
{
  while(string_contains_character(string, length,
    character))
  {
    string = remove_string_character(string, length,
      character);
  }
  return string;
}
