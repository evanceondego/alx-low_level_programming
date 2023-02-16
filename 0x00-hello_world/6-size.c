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
printf("Size of char:%zu", sizeof(b));
printf("Size of int:%zu", sizeof(a));
printf("Size of long int:%zu", sizeof(c));
printf("Size of long long int:%zu", sizeof(d));
printf("Size of floast:%zu", sizeof(e));
return (0);
