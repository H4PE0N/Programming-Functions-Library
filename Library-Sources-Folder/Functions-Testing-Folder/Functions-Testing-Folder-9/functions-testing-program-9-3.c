
#include "../../Library-Functions-Folder/\
library-functions-headers.h"

int shuffle_sentence_strings_test(char** sentence,
  int height, char** output)
{
  sentence = shuffle_sentence_strings(sentence,height);
  int width = sentence_string_length(sentence, 0);
  int same = compare_string_sentence(sentence, output,
    height, width);
  int content=compare_sentence_content(sentence,output,
    height, width); return (!same && content);
}

int sentence_character_greater_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_greater(sentence,
    first, second, index);
  return compare_integer_variables(boolean, output);
}

int sentence_character_smaller_test(char** sentence,
  int first, int second, int index, int output)
{
  int boolean = sentence_character_smaller(sentence,
    first, second, index);
  return compare_integer_variables(boolean, output);
}

int sentence_string_smaller_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_smaller(sentence, height,
    first, second);
  return compare_integer_variables(boolean, output);
}

int sentence_string_greater_test(char** sentence,
  int height, int first, int second, int output)
{
  int boolean=sentence_string_greater(sentence, height,
    first, second);
  return compare_integer_variables(boolean, output);
}

int sort_string_sentence_test(char** sentence,
  int height, char** output)
{
  sentence = sort_string_sentence(sentence, height);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int sort_sentence_iteration_test(char** sentence,
  int height, int iteration, char** output)
{
  sentence = sort_sentence_iteration(sentence, height,
    iteration);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int compare_sentence_content_test(char** first,
  char** second, int height, int width, int output)
{
  int boolean = compare_sentence_content(first, second,
    height, width);
  return compare_integer_variables(boolean, output);
}

int reverse_string_sentence_test(char** sentence,
  int height, int width, char** output)
{
  sentence = reverse_string_sentence(sentence, height,
    width);
  return compare_string_sentence(sentence, output,
    height, width);
}

int reverse_sentence_strings_test(char** sentence,
  int height, char** output)
{
  sentence = reverse_sentence_strings(sentence,height);
  int width = sentence_string_length(sentence, 0);
  return compare_string_sentence(sentence, output,
    height, width);
}

int sentence_string_index_test(char** sentence,
  int height, char* string, int output)
{
  int index = sentence_string_index(sentence, height,
    string);
  return compare_integer_variables(index, output);
}
