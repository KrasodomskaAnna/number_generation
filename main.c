#include <stdio.h>

unsigned int generator();

int main()
{
	unsigned int M = 1 << 31;
	int przedzialy[10] = { 0 };
	for (int i = 0; i < 100000; i++)
	{
		unsigned int nmb = generator();
		int idx = 10 * ((float)nmb / (float)M);
		przedzialy[idx]++;
	}

	for (int i = 0; i < 10; i++)
	{
		printf("Przedzial[%d] := %d\n", i, przedzialy[i]);
	}
	return 0;
}