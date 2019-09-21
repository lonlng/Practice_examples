#include <stdio.h>
int main(int argc, char const *argv[])
{
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i; j++)
		{
			for (int k = 0; k < j; k++)
			{
				for (int l = 0; l < k; l++)
				{
					printf("%d%d%d%d\n", i, j, k, l);
				}
			}
		}
	}
	return 0;
}
