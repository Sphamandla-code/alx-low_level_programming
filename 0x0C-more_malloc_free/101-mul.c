#include "main.h"


/**
 * main - Multiplies two positive numbers.
 * @argv: param 1
 * @argc: param 2
 * Return: 0
 */
int main(int argc, char *argv[])
{
unsigned long mul;
int i, j;

if (argc != 3)
{
prinf("Error\n");
exit(98);
}

for (i =1; i < argc; i++)
{
for (j = 0; argv[i][j] != '\0'; j++)
{
if (argv[i][j] > 57 || argv[i][j] < 48)
{
printf("Error\n");
exit(98);
}
}
}
mul = atol(argv[1] *atol(argv[2]);
print("%lu\n", mul);

return (0);
}