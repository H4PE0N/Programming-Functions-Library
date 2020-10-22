<pre>
In the programming language C, there is not  a  lot  of
pre-made functions. Therefor have I created  a  library
of programming functions.  This  is  super  useful  for
people who does not program in C. They can program in a
low-level programming language,  but  still  enjoy  the
normal  functions  that  the   high-level   programming
languages has.

When you want to write your own program in this library
using the included functions, you will edit the program
called library-compile-program.c. You will have to know
some things about the programming language C before you
can write some code, like what datatypes  that  exists,
and so on. Here is an example of how you can write your
code:
</pre>
```C
int main(int argc, char** argv)
{
  srand(time(NULL));

  // This declares some variables for the program
  int length = 10, minimum = 0, maximum = 10;

  // This function generates a random integer array
  int* array = generate_random_array(length, minimum,
    maximum);

  // This function prints out the array to the console
  integer_array_stdout(array, length);

  return 0;
}
```
<pre>
The functions that are stored  in  this  library  could
look different, but some things stay the same. This  is
an example of how a normal  function  in  this  library
could look:
</pre>
```C
char* reverse_character_string(char* string,int length)
{
  char* reverse = generate_character_string(length);
  for(int index = 0; index < length; index = index + 1)
  {
    char character = string_index_character(string,
      length - (index + 1));
    reverse = add_string_character(reverse, index,
      character);
  }
  return reverse;
}
```
<pre>
This library makes use of  a  test-driven  development.
That means there is a test-function  for  every  normal
function stored in this library. That makes it easy  to
test if a function is working as it should. This is how
a test function could look like in the library:
</pre>
```C
int reverse_character_string_test(char* string,
  int length, char* output)
{
  char*reverse=reverse_character_string(string,length);
  return compare_character_strings(reverse, output,
    length);
}
```
<pre>
When you are located in a folder with multiple  folders
inside,  you  maybe  want  to  see  what  the   folders
contains. Or you maybe just want to see what the folder
you are in does. Then you can look in the file that  is
in  the  folder,  that  will  tell  you  the  directory
information. To see the information you  can type:
</pre>
```bash
$ cat directory-information.md
```
<pre>
This project has a license to protect  the  information
inside it. The license comes from the MIT  license  and
has been reformed to fit the style of this library.  To
see further information about the license, you can open
the license file. To open the markdown  file  with  the
license you can type:
</pre>
```bash
$ cat LICENSE.md
```
