#include "main.h"
/**
 * is_printable - evaluates
 * @c: char
 * Return: 1 or 0
 */
int is_printable(char c)
{
	if (c >= 32 & c < 127)
		return (1);

	return (0);
}
/**
 * append_hexa_code - appends
 * @buffer: array of char
 * @i: index
 * @ascii_code: code
 * Return: 3
 */
int append_hexa_code(char ascii_code, char buffer, int i)
{
	char map_to = "0123456789ABCDEF";

	if (ascii_code < 0)
		ascii_code *= -1;

	buffer[i++] = '\\';
	buffer[i++] = 'x';

	buffer[i++] = map_to[ascii_code / 16];
	buffer[i] = map_to[ascii_code % 16];

	return (3);
}
/**
 * is_digit - verifies if char is adigit
 * @c: Char to be evaluated
 * Return: 1 or 0
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);

	return (0);
}
/**
 * convert_size_number - cast anmber to the specfied size
 * @num: number
 * @size: number indicated
 * Return: casted value
 */
long int convert_size_number(long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((short)num);

	return ((int)num);
}
/**
 * convert_size_unsgnd - cast a number to aspecified size
 * @num: number to be casted
 * @size: num indicating the type
 * Return: casted value
 */
long int convert_size_unsgnd(unsigned long int num, int size)
{
	if (size == S_LONG)
		return (num);
	else if (size == S_SHORT)
		return ((unsigned short)num);

	return ((unsigned int)num);
}
