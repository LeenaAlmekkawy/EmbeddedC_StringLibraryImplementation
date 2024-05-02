/*******************************************************************************/
/************* Author: Leena Almekkawy                       *******************/
/************* file : Leena_string.h                         *******************/
/************* Project: Implementing string.h Library        *******************/
/************* SW version : 1.0.0                            *******************/
/************* Date : 24/4/2024                              *******************/
/*******************************************************************************/

#ifndef LEENA_STRING_H_
#define LEENA_STRING_H_


/************* Functions Declaration Section ****************/
/**--------------------------------------------------------**/

/*******************************************************************************************************************

Description: The C library function void Leena_memset(void *StartAddress,unsigned char value, unsigned int length )
copies the character value (an unsigned char) to the first n characters of the string pointed to, by the argument str.

Return Value:
-> This function returns a pointer to the memory area str.

**********************************************************************************************************************/

void* Leena_memset(void *str,unsigned char c, unsigned int n );





/*******************************************************************************************************************

Description: The C library function int Leena_memcmp(void const *str1,void const *str2, unsigned int Length )
compares the first n bytes of memory area str1 and memory area str2.

Return Value:
-> if Return value < 0 then it indicates str1 is less than str2.

-> if Return value > 0 then it indicates str2 is less than str1.

-> if Return value = 0 then it indicates str1 is equal to str2.

**********************************************************************************************************************/

int Leena_memcmp(void const *str1,void const *str2, unsigned int Length );





/*******************************************************************************************************************

Description:The C library function void Leena_memcpy(void *src,void const *dest, unsigned int n )
 copies n characters from memory area src to memory area dest.

Return Value:
->This function returns a pointer to destination, which is dest.

**********************************************************************************************************************/

void* Leena_memcpy(void *src,void const *dest, unsigned int n );





/*******************************************************************************************************************

Description:The C library function void* Leena_memchr(const void *str, int c, int n);
searches for the first occurrence of the character c (an unsigned char)
in the first n bytes of the string pointed to, by the argument str.

Return Value:
->This function returns a pointer to the matching byte or NULL if the character does not occur in the given memory area.

**********************************************************************************************************************/

void* Leena_memchr(const void *str, unsigned char c, int n);





/*******************************************************************************************************************

Description:The C library function char *Leena_strcat(char *dest, const char *src)
appends the string pointed to by src to the end of the string pointed to by dest.

Return Value:
->This function returns a pointer to the resulting string dest.

**********************************************************************************************************************/

char *Leena_strcat(char *dest, const char *src);





/*******************************************************************************************************************

Description:The C library function char *Leena_strncat(char *dest, const char *src, int n)
appends the string pointed to by src to the end of the string pointed to by dest up
to n characters long.

Return Value:
->This function returns a pointer to the resulting string dest.

**********************************************************************************************************************/

char *Leena_strncat(char *dest, const char *src,int n);





/*******************************************************************************************************************

Description:The C library function void *Leena_strchr(const char *str, unsigned char c);
searches for the first occurrence of the character c (an unsigned char)
in the string pointed to by the argument str.

Return Value:
->This returns a pointer to the first occurrence of the character c in the string str,
or NULL if the character is not found.

**********************************************************************************************************************/

void *Leena_strchr(const char *str, unsigned char c);





/*******************************************************************************************************************

Description:The C library function int Leena_strcmp(const char *str1, const char *str2)
compares the string pointed to, by str1 to the string pointed to by str2.

Return Value:
->if Return value < 0 then it indicates str1 is less than str2.

->if Return value > 0 then it indicates str2 is less than str1.

->if Return value = 0 then it indicates str1 is equal to str2.

**********************************************************************************************************************/

int Leena_strcmp(const char *str1, const char *str2);





/*******************************************************************************************************************

Description:The C library function int Leena_strcmp(const char *str1, const char *str2 ,int n)
compares at most the first n bytes of str1 and str2.

Return Value:
->if Return value < 0 then it indicates str1 is less than str2.

->if Return value > 0 then it indicates str2 is less than str1.

->if Return value = 0 then it indicates str1 is equal to str2.

**********************************************************************************************************************/

int Leena_strncmp(const char *str1, const char *str2, int n);





/*******************************************************************************************************************

Description:The C library function char *Leena_strcpy(char *dest, const char *src)
copies the string pointed to, by src to dest.

Return Value:
->This returns a pointer to the destination string dest.

**********************************************************************************************************************/

char *Leena_strcpy(char *dest, const char *src);





/*******************************************************************************************************************

Description:The C library function char *Leena_strncpy(char *dest, const char *src, int n)
copies up to n characters from the string pointed to, by src to dest.
In a case where the length of src is less than that of n,
the remainder of dest will be padded with null bytes.

Return Value:
->This returns a pointer to the destination string dest.

**********************************************************************************************************************/

char *Leena_strncpy(char *dest, const char *src, int n);





/*******************************************************************************************************************

Description:The C library function int Leena_strcspn(const char *str1, const char *str2)
calculates the length of the initial segment of str1, which consists entirely of characters not in str2.

Return Value:
->This function returns the number of characters in the initial segment of string str1 which are not in the string str2.

**********************************************************************************************************************/

int Leena_strcspn(const char *str1, const char *str2);





/*******************************************************************************************************************

Description:The C library function int Leena_strlen(const char *str)
computes the length of the string str up to, but not including the terminating null character.

Return Value:
->This function returns the length of string.

**********************************************************************************************************************/

int Leena_strlen(const char *str);





/*******************************************************************************************************************

Description:The C library function char *Leena_strpbrk(const char *str1, const char *str2)
finds the first character in the string str1 that matches any character specified in str2.
This does not include the terminating null-characters.

Return Value:
->This function returns a pointer to the character in str1 that matches one of the characters in str2,
or NULL if no such character is found.

**********************************************************************************************************************/

char *Leena_strpbrk(const char *str1, const char *str2);





/*******************************************************************************************************************

Description:The C library function char *Leena_strrchr(const char *str, int c)
searches for the last occurrence of the character c (an unsigned char)
in the string pointed to, by the argument str.

Return Value:
->This function returns a pointer to the last occurrence of character in str.
If the value is not found, the function returns a null pointer.

**********************************************************************************************************************/

char *Leena_strrchr(const char *str, int c);





/*******************************************************************************************************************

Description:The C library function int Leena_strspn(const char *str1, const char *str2)
calculates the length of the initial segment of str1 which consists entirely of characters in str2.

Return Value:
->This function returns the number of characters in the initial segment of str1
which consist only of characters from str2.
**********************************************************************************************************************/

int Leena_strspn(const char *str1, const char *str2);





/*******************************************************************************************************************

Description:The C library function char *Leena_strstr(const char *str, const char *subStr)
function finds the first occurrence of the substring subStr in the string str.
The terminating '\0' characters are not compared.

Return Value:
->This function returns a pointer to the first occurrence in str of any of the entire sequence
of characters specified in subStr, or a null pointer if the sequence is not present in str.
**********************************************************************************************************************/

char *Leena_strstr(const char *str, const char *subStr);





/*******************************************************************************************************************

Description:The C library function char *Leena_strtok(char *str, const char *delim)
breaks string str into a series of tokens using the delimiter delim.

Return Value:
->This function returns a pointer to the first token found in the string.
A null pointer is returned if there are no tokens left to retrieve.
**********************************************************************************************************************/

char *Leena_strtok(char *str, const char *delim);





/**-----------------------------------------------------**/
/********** End of Functions Declaration Section  ********/

#endif // LEENA_STRING_H_


