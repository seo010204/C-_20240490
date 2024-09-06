#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1���� 45 ������ ���� ���ڸ� ��ȯ�ϴ� �Լ�
int getNumber()
{
    return rand() % 45 + 1;
}

int main()
{
    short int lotto[6] = { 0 }; // �ζ� ��ȣ�� ������ �迭
    int i, k, num;
    char dup;

    printf("�ζ� ��÷�� �����մϴ�. **\n\n");
    srand((unsigned)time(NULL)); // ���� �õ� �ʱ�ȭ

    i = 0;
    while (i < 6)
    {
        num = getNumber();
        dup = 'N'; // �ߺ� üũ �ʱ�ȭ

        // �ߺ� ���� Ȯ��
        for (k = 0; k < i; k++)
        {
            if (lotto[k] == num)
            {
                dup = 'Y';
                break;
            }
        }
        // �ߺ��� �ƴϸ� �迭�� ���� ����
        if (dup == 'N')
        {
            lotto[i] = num;
            i++;
        }
    }

    printf("��÷�� �ζ� ��ȣ ==> ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", lotto[i]);
    }

    printf("\n\n");

    return 0;
}
