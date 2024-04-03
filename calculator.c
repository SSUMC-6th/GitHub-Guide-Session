#include <stdio.h>

void add(int a, int b)
{
    printf("a + b = %d\n", a + b);
}
void sub(int a, int b)
{
	printf("a - b = %d\n", a - b);
}
void mul()
{
    printf("a * b = %d\n", a * b);
}
void div()
{
}

int main(void)
{
    while (1)
    {
        printf("===== 계산기 프로그램 =====\n");
        printf("[*] 연산 선택: ");
        int ipt = getchar();
        int a = getchar();
        int b = getchar();
        switch (ipt)
        {
        case '+':
            printf("[*] 더하기를 진행합니다.\n");
            add(a, b);
        case '-':
            printf("[*] 빼기를 진행합니다.\n");
            sub(a, b);
        case '*':
            printf("[*] 곱하기를 진행합니다.\n");
            mul(a, b);
        case '/':
            printf("[*] 나누기를 진행합니다.\n");
            div(a, b);
        }
    }
    return 0;
}
