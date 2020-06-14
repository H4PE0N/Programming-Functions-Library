
#include "../../Library-Functions-Folder/\
Library-Functions-Folder-4/\
library-functions-program-4.h"

#include "../../Library-Functions-Folder/\
Library-Functions-Folder-8/\
library-functions-program-8.h"

int generate_lower_alphabet_test(int characters,
  char* output)
{
  char* alphabet = generate_lower_alphabet(characters);
  return compare_character_strings(alphabet, output,
    characters);
}

int generate_higher_alphabet_test(int characters,
  char* output)
{
  char* alphabet =generate_higher_alphabet(characters);
  return compare_character_strings(alphabet, output,
    characters);
}

int lower_alphabet_character_test(int index,
  char output)
{
  char character = lower_alphabet_character(index);
  return (character == output);
}

int higher_alphabet_character_test(int index,
  char output)
{
  char character = higher_alphabet_character(index);
  return (character == output);
}

int delete_string_character_test(char* string,
  int length, int index, char* output)
{
  string=delete_string_character(string, length,index);
  return compare_character_strings(string, output,
    length);
}
