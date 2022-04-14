#include "main.h"
/**
 * more_numbers - print numbers, fron 0 to 14
 *
 * Return: Always 0.
 */

void more_numbers(void)
{
int i;
int first_number;
int second_number;
int result;

i = 0;
result = 0;
while (i < 10)
{
while (result <= 14)
{
if (result < 10)
{
second_number = result;
}

else
{
first_number = result / 10;
second_number = result % 10;
_putchar (first_number + '0');
}

<<<<<<< HEAD
_putchar (second_number +_ '0');
=======
_putchar (second_number + '0');
>>>>>>> 574b53c8092d00d1612d83c808a345cc5fa925ae

result++;
result = 0;
_putchar ('\n');
}
}
