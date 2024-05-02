# String Library Implementation

This project aims to implement a custom version of the `string.h` library in the C programming language. The `Leena_string.h` header file contains various functions that provide functionality similar to the standard library functions found in `string.h`.

## Functions Included

The following functions are implemented in this library:

1. `void* Leena_memset(void *str, unsigned char c, unsigned int n)`: This function copies the character `c` to the first `n` characters of the string pointed to by `str`. It returns a pointer to the memory area `str`.

2. `int Leena_memcmp(void const *str1, void const *str2, unsigned int Length)`: This function compares the first `n` bytes of memory area `str1` and memory area `str2` and returns an integer indicating the comparison result.

3. `void* Leena_memcpy(void *src, void const *dest, unsigned int n)`: This function copies `n` characters from the memory area `src` to the memory area `dest`. It returns a pointer to the destination memory area.

4. `void* Leena_memchr(const void *str, unsigned char c, int n)`: This function searches for the first occurrence of the character `c` in the first `n` bytes of the memory area pointed to by `str`. It returns a pointer to the matching byte or `NULL` if the character is not found.

5. `char* Leena_strcat(char *dest, const char *src)`: This function appends the string pointed to by `src` to the end of the string pointed to by `dest`. It returns a pointer to the resulting string `dest`.

6. `char* Leena_strncat(char *dest, const char *src, int n)`: This function appends the string pointed to by `src` to the end of the string pointed to by `dest` up to `n` characters long. It returns a pointer to the resulting string `dest`.

7. `void* Leena_strchr(const char *str, unsigned char c)`: This function searches for the first occurrence of the character `c` in the string pointed to by `str`. It returns a pointer to the first occurrence of the character or `NULL` if the character is not found.

8. `int Leena_strcmp(const char *str1, const char *str2)`: This function compares the string pointed to by `str1` to the string pointed to by `str2`. It returns an integer indicating the comparison result.

9. `int Leena_strncmp(const char *str1, const char *str2, int n)`: This function compares at most the first `n` bytes of `str1` and `str2`. It returns an integer indicating the comparison result.

10. `char* Leena_strcpy(char *dest, const char *src)`: This function copies the string pointed to by `src` to `dest`. It returns a pointer to the destination string `dest`.

11. `char* Leena_strncpy(char *dest, const char *src, int n)`: This function copies up to `n` characters from the string pointed to by `src` to `dest`. If the length of `src` is less than `n`, the remainder of `dest` will be padded with null bytes. It returns a pointer to the destination string `dest`.

12. `int Leena_strcspn(const char *str1, const char *str2)`: This function calculates the length of the initial segment of `str1` that consists entirely of characters not in `str2`. It returns the number of characters in the initial segment of `str1` that are not in `str2`.

13. `int Leena_strlen(const char *str)`: This function computes the length of the string `str` up to, but not including, the terminating null character. It returns the length of the string.

14. `char* Leena_strpbrk(const char *str1, const char *str2)`: This function finds the first character in the string `str1` that matches any character specified in `str2`. It returns a pointer to the character in `str1` that matches one of the characters in `str2` or `NULL` if no such character is found.

15. `char* Leena_strrchr(const char *str, int c)`: This function searches for the last occurrence of the character `c` in the string `str`. It returns a pointer to the last occurrence of the character in `str` or `NULL` if the character is not found.

16. `int Leena_strspn(const char *str1, const char *str2)`: This function calculates the length of the initial segment of `str1` that consists entirely of characters in `str2`.

17. `char* Leena_strstr(const char *str1, const char *str2)`: This function finds the first occurrence of the substring `str2` in the string `str1`. It returns a pointer to the first occurrence of `str2` in `str1` or `NULL` if `str2` is not found.

18. `char* Leena_strtok(char *str, const char *delim)`: This function breaks the string `str` into a series of tokens using the delimiter string `delim`. It returns a pointer to the next token in `str` or `NULL` if there are no more tokens.

