#include <stdio.h>

int main()
{
	int type, receive, sale, ID;
	int total_receive[100];
	int total_sale[100];

	printf("��ǰ ����(����)�Է� ");
	scanf_s("%d", &type);
	printf("��ǰ �� �԰���� �Է� ");
	for (int i = 0; i < type; i++)
	{
		scanf_s("%d", &receive);
		total_receive[i] = receive;
	}
	printf("��ǰ �� �Ǹż��� �Է� ");
	for (int j = 0; j < type; j++)
	{
		scanf_s("%d", &sale);
		total_sale[j] = sale;
	}	
	printf("ID �Է� ");
	scanf_s("%d", &ID);
	printf("�Է��� ID�� �ش��ϴ� ��ǰ�� ��� ���� => %d\n", total_receive[ID - 1] - total_sale[ID - 1]);
	printf("��� ��ǰ�� ��� ���� ��� = > ");
	for (int k = 0; k < type; k++)
	{
		printf("%d ", total_receive[k] - total_sale[k]);
	}
	



	return 0;
}