#include <stdio.h>
/**
 * main - program that prints all single digit numbers of base 10 starting from
 * Return: always 0
 */
int main(void)
{
int i;
for (i = 0; i <= 9; ++i)
putchar ('0' + i);
putchar ('\n');
return (0);
}
