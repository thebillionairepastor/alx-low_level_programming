0x13. C - More singly linked lists
Learning Objectives
General

How to use linked lists
Requirements
All files are created and compiled on Ubuntu 14.04.4 LTS on gcc 4.8.4 using the flags -Wall -Werror -Wextra and -pedantic
All files are linted for syntax and style with Betty
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
