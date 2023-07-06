#include "main.h"

int check_palindrome(char *s, int start, int end);
int _strlen_recursion(char *s);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int is_palindrome(char *s)
{
	int length = _strlen_recursion(s);
	return check_palindrome(s, 0, length - 1);
}

/**
 * _strlen_recursion - returns the length of a string
 * @s: string to calculate the length of
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return 1 + _strlen_recursion(s + 1);
}

/**
 * check_palindrome - checks if a string is a palindrome recursively
 * @s: string to check
 * @start: start index of the string
 * @end: end index of the string
 *
 * Return: 1 if it is a palindrome, 0 if it's not
 */
int check_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);
	return check_palindrome(s, start + 1, end - 1);
}
