#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char i, j;

	printf("여려 글자를 입력 : ");
	fgets(str, sizeof(str), stdin);

	printf("기존 문자와 새로운 문자 : ");
	scanf_s("%c %c", &i, &j);

	int len = strlen(str);

	for (int count = 0; count < len; count++)
	{
		if (i == str[count])
		{
			str[count] = j;
		}
	}

	printf("반환된 결과 ==> %s\n", str);

	return 0;
}