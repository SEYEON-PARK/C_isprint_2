#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 't';

	if (isprint(a) != 0)
	{
		printf("����� �� �ֽ��ϴ�.\n");
	}
	else
	{
		printf("����� �� �����ϴ�.\n");
	}

	return 0;
}