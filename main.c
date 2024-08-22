// this execution file is an integration test
//
// includes the header file(s) which contains the function prototypes
// build with the following command: 
// cc -Wall -Wextra -Werror main.c -L . -l ftprintf -o main
//
// to build linking against multiple static libraries:
// (note that if a library depends on other, the dependency must be added last)
// cc -Wall -Wextra -Werror main.c -L . -l ftprintf -L ./libft -l ft -o main

#include <stdio.h>
#include "libft/libft.h"
#include "libftprintf.h"

void	print_todo()
{
	int	x = 10;
	int	*pointer;
	printf("\n## TODO ##\n\n");
	// 
	// TODO: basic conversions to implement
	// 
	// character: %c
	printf("Character:%c\n", 'a');
	// string: %s
	printf("String:%s\n", "test string");
	// pointer: %p
	pointer = &x;
	printf("Pointer address:%p\n", (void *) pointer);
	// decimal: %d
	printf("Decimal:%d\n", 23);
	// integer: %i
	printf("Integer:%i\n", 23);
	// unsigned integer: %u
	printf("Unsigned integer (1):%u\n", 27);
	printf("Unsigned integer (2):%u\n", -27);
	// lowercase hexadecimal: %x
	printf("Lowercase hexadecimal:%x\n", 255);
	// uppercase hexadecimal: %X
	printf("Uppercase hexadecimal:%X\n", 255);
	// percentage: %%
	printf("Percentage:%%\n");
	printf("\n## ADVANCED FLAGS ##\n\n");
	// 
	// TODO: advanced flags to implement
	//
	// minus flag: '-'
	// left-justifies the output within the given field width, adding spaces to the right.
	printf("Minus flag:\n");
	printf("%-10s", "test");
	printf("$\n");
	// zero flag: '0'
	// adds trail zeros until the specified width.
	printf("Zero flag:\n");
	printf("%05d\n", 23);
	// precision flag: '.'
	// specifies the amount of digits printed after the decimal point of a floating-point value.
	printf("Precision flag:\n");
	printf("%.2f\n", 1.2345);
	// field minimum width: "%5d"
	// specifies the output width, if the output is smaller, it's left-padded with spaces.
	printf("Field Minimum Width:\n");
	printf("%5d$\n", 23);
	printf("\n## FLAG COMBINATIONS ##\n\n");
	//
	// TODO: possible flag combinations
	//
	// zero and minus flags (zero flag is ignored when minus flag is present):
	printf("Zero and minus flags:\n");
	//printf("%0-5d$\n", 23);
	// minus and zero flags (zero flag is ignored when minus flag is present):
	printf("Minus and zero flags:\n");
	//printf("%-05d$\n", 23);
	// minus and precision flags:
	printf("Minus and precision flags:\n");
	printf("%-.2f$\n", 1.2345);
	// zero and precision flags:
	printf("Zero and precision flags:\n");
	printf("%010.3f\n", 1.2345);
	// minus, zero and precision flags:
	printf("Minus, zero and precision flags:\n");
	//printf("%-08.3f$\n", 1.2345);
	// 
	// TODO: advanced flags to implement (part two)
	//
	// sharp flag: '#'
	// when used with the 'o' specifier, adds a leading '0' to the octal output.
	printf("\n## SHARP FLAG ##\n\n");
	printf("Octal sharp flag (1):%o\n", 23);
	printf("Octal sharp flag (2):%#o\n", 23);
	// when used with the 'x' or 'X' specifiers, it prefixes the output with "0x" or "0X" respectively.
	printf("Hexadecimal sharp flag (1):%#x\n", 23);
	printf("Hexadecimal sharp flag (2):%#X\n", 23);
	// when used with the 'f', 'F', or 'e' specifiers, it ensures that the output always contains a decimal point.
	printf("\"f\" sharp flag:%#f\n", 23.0);
	printf("\"F\" sharp flag:%#F\n", 23.0);
	printf("\"e\" sharp flag:%#e\n", 23.0);
	// when used with the 'g' or 'G' specifiers, it ensures that the output always contains a decimal point.
	printf("\"g\" sharp flag:%#g\n", 23.0);
	printf("\"G\" sharp flag:%#G\n", 23.0);
	// plus flag: '+'
	printf("\n## PLUS FLAG ##\n\n");
	// when used with the 'd', 'i' or 'f' specifiers, adds a value sign even for positive numbers.
	printf("\"d\" plus flag:%+d\n", 23);
	printf("\"i\" plus flag:%+i\n", 23);
	printf("\"f\" plus flag:%+f\n", 1.2345);
	// when used with the 'e' or 'E' specifiers, it ensures that the exponent always has a sign.
	printf("\"e\" plus flag:%+e\n", 23.0);
	// space flag: ' '
	// when used with the 'd' or 'i' specifiers, and the value is positive, adds a space to the left of the value.
	printf("\n## SPACE FLAG ##\n\n");
	printf("Negative \"d\" space flag:% d\n", -23);
	printf("Positive \"d\" space flag:% d\n", 23);
	printf("Negative \"i\" space flag:% i\n", -23);
	printf("Positive \"i\" space flag:% i\n", 23);
}

int	main(void)
{
	char	*format;
	int	length;
	int	value;

	value = -3;
	format = "this is a test string %x %y with placeholders %%\n";
	length = printf(format, value);
	printf("(length:%i)\n\n", length);
	length = ft_printf(format, value);
	printf("(length:%i)\n\n", length);
}

