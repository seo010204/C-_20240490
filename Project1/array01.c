#include <stdio.h>
#include <string.h>

int main()
{
	char str[100];
	char i, j;

	printf("���� ���ڸ� �Է� : ");
	fgets(str, sizeof(str), stdin);

	printf("���� ���ڿ� ���ο� ���� : ");
	scanf_s("%c %c", &i, &j);

	int len = strlen(str);

	for (int count = 0; count < len; count++)
	{
		if (i == str[count])
		{
			str[count] = j;
		}
	}

	printf("��ȯ�� ��� ==> %s\n", str);

	return 0;
}