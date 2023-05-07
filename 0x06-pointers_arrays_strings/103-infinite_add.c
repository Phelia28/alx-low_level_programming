0x06-pointers_arrays_strings
Task 0


#include "main.h"

#include <stdio.h>

/**

 * *_strcat - concatenates two strings

 * @dest: pointer destination

 * @src: pointer source

 * Return: void

 */


char *_strcat(char *dest, char *src)

{

int a = -1, i;

for (i = 0; dest[i] != '\0'; i++)

;


do {

        a++;

        dest[i] = src[a];

        i++;

} while (src[a] != '\0');


return (dest);

}


Task 1


#include "main.h"

#include <stdio.h>

/**

 * *_strncat - concatenates n bytes of two strings

 * @dest: pointer destination

 * @src: pointer source

 * @n: number of bytes

 * Return: void

 */


char *_strncat(char *dest, char *src, int n)

{


int dest_len, i;

for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)

;


for (i = 0; i < n && src[i] != '\0'; i++)

        dest[dest_len + i] = src[i];


/*should end with a end of string char*/

dest[dest_len + i] = '\0';


return (dest);

}


Task 2


#include <stdio.h>

#include "main.h"

/**

 * *_strncpy - find the length of a string

 * @dest: pointer to the string

 * @src: pointer

 * @n: int

 * Return: destination

 */


char *_strncpy(char *dest, char *src, int n)

{

int i;


for (i = 0; i < n && src[i] != '\0'; i++)

        dest[i] = src[i];


for ( ; i < n; i++)

        dest[i] = '\0';


return (dest);

}



Task 3


#include "main.h"

#include <stdio.h>

/**

 * _strcmp - compares two strings.

 * @s1: string to be compared.

 * @s2: string for comparation.

 * Return: Difference.

 */

int _strcmp(char *s1, char *s2)

{

        while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)

        {

                s1++;

                s2++;

        }

        if (*s1 == *s2)

        {

                return (0);

        }

        else

        {

        return (*s1 - *s2);

        }

}



Task 4


#include "main.h"

#include <stdio.h>

/**

 * reverse_array - prints reverse array.

 * @a: array to be compared.

 * @n: size of array.

 * Return: reversed array.

 */

void reverse_array(int *a, int n)

{

        int swap, begin, end;


        begin = 0;

        end = n - 1;

        while (begin < end)

        {

                swap = *(a + begin);

                *(a + begin) = *(a + end);

                *(a + end) = swap;

                begin++;

                end--;

        }

}



Task 5


#include "main.h"

#include <stdio.h>

/**

 * string_toupper - change lowercase letters to uppercase.

 * @s: analized string.

 *

 * Return: String with all letters Uppercased.

 */

char *string_toupper(char *s)

{

        int i = 0;


        while (*(s + i) != '\0')

        {

                if (*(s + i) >= 'a' && *(s + i) <= 'z')

                {

                        *(s + i) = *(s + i) - 32;

                }

                i++;

        }

        return (s);

}




Task 6


#include "main.h"

#include <stdio.h>

/**

 * cap_string - capitalizes most of the words in a string.

 * @s: analized string.

 *

 * Return: String with all words capitalized.

 */

char *cap_string(char *s)

{

        int i, j;

        int a[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};


        i = 0;

        while (*(s + i) != '\0')

        {

                if (*(s + i) >= 'a' && *(s + i) <= 'z')

                {

                        if (i == 0)

                        {

                                *(s + i) = *(s + i) - 32;

                        }

                        else

                        {

                                for (j = 0; j <= 12; j++)

                                {

                                        if (a[j] == *(s + i - 1))

                                        {

                                                *(s + i) = *(s + i) - 32;

                                        }

                                }

                        }

                }

        i++;

        }

        return (s);

}




Task 7


#include "main.h"

#include <stdio.h>

/**

 * leet - change vowels to numbers.

 * @s: analized string.

 *

 * Return: String with all vowels changed.

 */

char *leet(char *s)

{

        char a[] = "aeotlAEOTL";

        char n[] = "4307143071";

        int i = 0;

        int j;


        while (*(s + i) != '\0')

        {

                for (j = 0; j <= 9; j++)

                {

                        if (*(s + i) == a[j])

                        {

                                *(s + i) = n[j];

                        }

                }

                i++;

        }

        return (s);

}




Task 100


#include "main.h"


/**

 * rot13 - encodes a string using rot13

 * @s: the string

 *

 * Return: the encoded string

 */


char *rot13(char *s)

{

        int i, j;

        char *letters1 = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};

        char *letters2 = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};


        for (i = 0; s[i] != '\0'; i++)

        {

                for (j = 0; j < 52; j++)

                {

                        if (s[i] == letters1[j])

                        {

                                s[i] = letters2[j];

                                break;

                        }

                }

        }

        return (s);

}



Task 101


#include "main.h"

#include <stdio.h>

/**

 * print_number - print an int numbers

 * @n: number tested

 * Return: Always 0

 */

void print_number(int n)

{

        int i, j, digit, digits, power;

        unsigned int temp, numchar, number;


        digit = 0;

        if (n < 0)

        {

                _putchar('-');

                temp = -n;

        }

        else

        {

                temp = n;

        }


        number = temp;


        while (number >= 10)

        {

                number = number / 10;

                digit++;

        }

        digits = digit + 1;

        power = 1;

        i = 1;


        while (i < digits)

        {

                power = power * 10;

                i++;

        }

        j = power;

        while (j >= 1)

        {

                numchar = (temp / j) % 10;

                _putchar(numchar + '0');

                j = j / 10;

        }

}



Task 102


#include <stdio.h>


int main(void)

{

  int n;

  int a[5];

  int *p;


  a[2] = 1024;

  p = &n;

  /*

   * write your line of code here...

   * Remember:

   * - you are not allowed to use a

   * - you are not allowed to modify p

   * - only one statement

   * - you are not allowed to code anything else than this line of code

   */

  *(p + 5) = 98;

  /* ...so that this prints 98\n */

  printf("a[2] = %d\n", a[2]);

  return (0);

}



Task 103



#include "main.h"


/**

 * rev_string - reverse array

 * @n: integer params

 * Return: 0

 */


void rev_string(char *n)

{

        int i = 0;

        int j = 0;

        char temp;


        while (*(n + i) != '\0')

        {

                i++;

        }

        i--;


        for (j = 0; j < i; j++, i--)

        {

                temp = *(n + j);

                *(n + j) = *(n + i);

                *(n + i) = temp;

        }

}


/**

 * infinite_add - add 2 numbers together

 * @n1: text representation of 1st number to add

 * @n2: text representation of 2nd number to add

 * @r: pointer to buffer

 * @size_r: buffer size

 * Return: pointer to calling function

 */


char *infinite_add(char *n1, char *n2, char *r, int size_r)

{

        int overflow = 0, i = 0, j = 0, digits = 0;

        int val1 = 0, val2 = 0, temp_tot = 0;


        while (*(n1 + i) != '\0')

                i++;

        while (*(n2 + j) != '\0')

                j++;

        i--;

        j--;

        if (j >= size_r || i >= size_r)

                return (0);

        while (j >= 0 || i >= 0 || overflow == 1)

        {

                if (i < 0)

                        val1 = 0;

                else

                        val1 = *(n1 + i) - '0';

                if (j < 0)

                        val2 = 0;

                else

                        val2 = *(n2 + j) - '0';

                temp_tot = val1 + val2 + overflow;

                if (temp_tot >= 10)

                        overflow = 1;

                else

                        overflow = 0;

                if (digits >= (size_r - 1))

                        return (0);

                *(r + digits) = (temp_tot % 10) + '0';

                digits++;

                j--;

                i--;

        }

        if (digits == size_r)

                return (0);

        *(r + digits) = '\0';

        rev_string(r);

        return (r);

}
