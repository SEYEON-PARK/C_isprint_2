#include <stdio.h>
#include <ctype.h>

int main(void)
{
	char a = 't'; // 초기화

	if (isprint(a) != 0)
	{
		printf("출력할 수 있습니다.\n");
	}
	else
	{
		printf("출력할 수 없습니다.\n");
	} // 상황에 맞게 출력하기

	return 0;
}
