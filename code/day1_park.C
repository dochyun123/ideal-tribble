#include <stdio.h>  // 표준 입출력 헤더 파일 포함

int main() {
    int num1, num2, sum;  // 정수 변수 선언

    // 사용자에게 두 개의 정수를 입력받기
    printf("첫 번째 정수를 입력하세요: ");
    scanf("%d", &num1);

    printf("두 번째 정수를 입력하세요: ");
    scanf("%d", &num2);

    // 두 정수의 합 계산
    sum = num1 + num2;

    // 결과 출력
    printf("두 수의 합은 %d 입니다.\n", sum);

    return 0;  // 프로그램 종료
}
