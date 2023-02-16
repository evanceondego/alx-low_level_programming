#include <stdio.h>
/**
*main - Entry point
*
*Description: 'a program that prints various types on a computer'
*Return: Always 0 (Success)
*/
int main(void)
{
int a;
char b;
long int c;
long long int d;
float e;
printf("Size of char:%lu byte(s)\n", sizeof(b));
printf("Size of int:%lu byte(s)\n", sizeof(a));
printf("Size of long int:%lu byte(s)\n", sizeof(c));
printf("Size of long long int:%lu byte(s)\n", sizeof(d));
printf("Size of floast:%lu byte(s)\n", sizeof(e));
return (0);
