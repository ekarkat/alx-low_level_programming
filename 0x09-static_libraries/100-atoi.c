#include "main.h"
/**
 * _atoi - function
 * @s : string
 * Return: return 0
 */
int _atoi(char *s)
{
int sign = 1;
int num = 0;

if (*s == '-')
{
sign = -1;
s++;
}
else if (*s == '+')
{
s++;
}

while (*s >= '0' && *s <= '9')
{
num = num * 10 + (*s - '0');
s++;
}
int answ = num *sign;
return (answ);
}
