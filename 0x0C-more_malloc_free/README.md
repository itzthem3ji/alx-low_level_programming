# The ALX Low-Level Programming Projects In C: Understanding Memory Allocation II.
* ## Automatic and dynamic allocation, malloc and free.

#### Areas Covered
* Do I cast the result of malloc?
* How to use the exit function
* What are the functions `calloc` and `realloc` from the standard library and how to use them

## Tasks :page_with_curl:

* **0. Trust no one**
  * [0-malloc_checked.c](./0-malloc_checked.c) 
    * Write a C program that prints its name, followed by a new line.
      * If the program is renamed, the program will print the new name without having
      to be compiled again.
      * The path should not be removed before the name of the program.

* **1. string_nconcat**
  * [1-string_nconcat.c](./1-string_nconcat.c) 
    * Write a C program that prints the number of arguments passed to
  it, followed by a new line.

* **2. _calloc**
  * [2-calloc.c](./2-calloc.c): C program that prints all arguments it receives, including
  the first one.
    * Arguments are printed one per line, ending with a new line.

* **3. array_range**
  * [3-array_range.c](./3-array_range.c): 
  * Write a function that creates an array of integers.
    * The array created should contain all the values from `min` (included) to `max` (included), ordered from `min` to `max`.
    * Return: the pointer to the newly created array.
    * If `min > max`, return `NULL`.
    * If `malloc` fails, return `NULL`.

* **4. _realloc**
  * [100-realloc.c](./100-realloc.c) 
    * Write a function that reallocates a memory block using malloc and free.
      * Prototype: `void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)`;
      * where `ptr` is a pointer to the memory previously allocated with a call to malloc: `malloc(old_size)`
      * `old_size` is the size, in bytes, of the allocated space for `ptr`
      * and `new_size` is the new size, in bytes of the new memory block
      * The contents will be copied to the newly allocated space, in the range from the start of ptr up to the minimum of the old and new sizes.
      * If `new_size > old_size`, the “added” memory should not be initialized.
      * If `new_size == old_size` do not do anything and return ptr.
      * If `ptr` is `NULL`, then the call is equivalent to `malloc(new_size)`, for all values of `old_size` and `new_size`.
      * If `new_size` is equal to zero, and `ptr` is not `NULL`, then the call is equivalent to `free(ptr)`. Return `NULL`.
      * Don’t forget to free `ptr` when it makes sense.

* **5. We must accept finite disappointment, but never lose infinite hope**
  * [101-mul.c](./101-mul.c) 
    * Write a C program that prints the minimum number of coins to
    make change for an amount of money.
      * Usage: `mul` `num1` `num2`.
      * `num1` and `num2` will be passed in base 10.
      * Print the result, followed by a new line
      * If the number of arguments is incorrect, print `Error`, followed by a new line, and exit with a status of `98`
      * `num1` and `num2` should only be composed of digits. If not, print `Error`, followed by a new line, and exit with a status of `98`.
      * You are allowed to use more than 5 functions in your file.

[Home](/../../)
[Previous](../0x0B-malloc_free/)
[Next](../0x0D-preprocessor/)
                                   

