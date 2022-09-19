#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - mainfn
 *
 * Return: ret val
 */
int main(void)
{
	char pass[84];
	int i = 0, s = 0, dh, dh2;

	srand(time(0));

	while (s < 2727)
	{
		pass[i] = 33 + rand() % 94;
		s += pass[i++];
	}

	pass[i] = '\0';

	if (s != 2772)
	{
		dh = (s - 2772) / 2;
		dh2 = (s - 2772) / 2;
		if ((s -2772) % 2 != 0)
			dh++;

		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + dh))
			{
				pass[i] -= dh;
				break;
			}
		}
		for (i = 0; pass[i]; i++)
		{
			if (pass[i] >= (33 + dh2))
			{
				pass[i] -= dh2;
				break;
			}
		}
	}

	printf("%s", pass);

	return (0);
}
