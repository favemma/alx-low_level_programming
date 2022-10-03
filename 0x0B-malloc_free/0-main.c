#include "main.h"

#include <stdio.h>

#include <stdlib.h>



/**

 * simple_print_buffer - prints buffer in hexa

  * @buffer: the address of memory to print

   * @size: the size of the memory to print

    *

     * Return: Nothing.

      */

      void simple_print_buffer(char *buffer, unsigned int size)

      {

          unsigned int i;



	      i = 0;

	          while (i < size)

		      {

		              if (i % 10)

			              {

				                  printf(" ");

						          }

							          if (!(i % 10) && i)

								          {

									              printf("\n");

										              }

											              printf("0x%02x", buffer[i]);

												              i++;

													          }

														      printf("\n");

														      }



														      /**

														       * main - check the code for ALX School students.

														        *

															 * Return: Always 0.

															  */

															  int main(void)

															  {

															      char *buffer;



															          buffer = create_array(98, 'H');

																      if  (buffer == NULL)

																          {

																	          printf("failed to allocate memory\n");

																		          return (1);

																			      }

																			          simple_print_buffer(buffer, 98);

																				      free(buffer);

																				          return (0);

																					  }

																					  julien@ubuntu:~/0x0a. malloc, free$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-create_array.c -o a

																					  julien@ubuntu:~/0x0a. malloc, free$ ./a 

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  0x48 0x48 0x48 0x48 0x48 0x48 0x48 0x48

																					  julien@ubuntu:~/0x0a. malloc, free$ 

																					  Repo:



																					  GitHub repository: alx-low_level_programming

																					  Directory: 0x0B-malloc_free

																					  File: 0-create_array.c

																					     

																					     1. The woman who has no imagination has no wings

																					     mandatory

																					     Write a function that returns a pointer to a newly allocated space in memory, which contains a copy of the string given as a parameter.



																					     Prototype: char *_strdup(char *str);

																					     The _strdup() function returns a pointer to a new string which is a duplicate of the string str. Memory for the new string is obtained with malloc, and can be freed with free.

																					     Returns NULL if str = NULL

																					     On success, the _strdup function returns a pointer to the duplicated string. It returns NULL if insufficient memory was available

																					     FYI: The standard library provides a similar function: strdup. Run man strdup to learn more.



																					     julien@ubuntu:~/0x0a. malloc, free$ cat 1-main.c

																					     #include "main.h"

																					     #include <stdio.h>

																					     #include <stdlib.h>



																					     /**

																					      * main - check the code for ALX School students.

																					       *

																					        * Return: Always 0.

																						 */

																						 int main(void)

																						 {

																						     char *s;



																						         s = _strdup("ALX SE");

																							     if (s == NULL)

																							         {

																								         printf("failed to allocate memory\n");

																									         return (1);

																										     }

																										         printf("%s\n", s);

																											     free(s);

																											         return (0);

																												 }
