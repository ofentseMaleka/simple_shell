#include <stdio.h>

/**
 * main - print the function eligible for work
 *
 * Description: A program that print people at the labour force
 *                 or not at the labour force
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int age;

printf("What is the age of those I want at the Labour Force? \n");
scanf("%d", &age);

int isAdult = age >= 18;
int isSenior = age >= 65;
int isTheWorkforce = isAdult && !isSenior;

if (isTheWorkforce)
{
printf("You are in the labour force\n");
}
else
{
printf("You are not in the labour force\n");
}

return (0);
}
