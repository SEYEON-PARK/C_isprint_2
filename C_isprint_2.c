#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 't';

	if (isprint(a) != 0)
	{
		printf("출력할 수 있습니다.\n");
	}
	else
	{
		printf("출력할 수 없습니다.\n");
	}

	return 0;
}