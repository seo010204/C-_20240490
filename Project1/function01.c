#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// 1부터 45 사이의 랜덤 숫자를 반환하는 함수
int getNumber()
{
    return rand() % 45 + 1;
}

int main()
{
    short int lotto[6] = { 0 }; // 로또 번호를 저장할 배열
    int i, k, num;
    char dup;

    printf("로또 추첨을 시작합니다. **\n\n");
    srand((unsigned)time(NULL)); // 랜덤 시드 초기화

    i = 0;
    while (i < 6)
    {
        num = getNumber();
        dup = 'N'; // 중복 체크 초기화

        // 중복 여부 확인
        for (k = 0; k < i; k++)
        {
            if (lotto[k] == num)
            {
                dup = 'Y';
                break;
            }
        }
        // 중복이 아니면 배열에 숫자 저장
        if (dup == 'N')
        {
            lotto[i] = num;
            i++;
        }
    }

    printf("추첨된 로또 번호 ==> ");
    for (i = 0; i < 6; i++)
    {
        printf("%d ", lotto[i]);
    }

    printf("\n\n");

    return 0;
}
