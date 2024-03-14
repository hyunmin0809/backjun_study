#include <stdio.h>
#define N 209 //The 1000th Fibonacci number has 209 decimal digits.
void print_digits(char d[N])
{
   int i = 0;
   while (d[i] == 0)
      i++;
   while (i < N)
      printf("%d", d[i++]); // "%d" instead of "%c"
}
// Add aa and bb and store the result in bb.
// aa is assumed to be always larger. //aa가 항상 크다고 가정. 근데 여기서 bb는 aa랑 bb 더한거니까 위치를 계속 바꿔주면 될듯
void add_digits(char aa[N], char bb[N])    //보니까 char aa랑 char bb는 main에서 선언하고 배열은 포인트값으로 받아오니까 main에 있는 것도 같이 바뀌는듯?
{
   int i = 0;
   int carry = 0;
   int j, s;
   while (aa[++i] == 0); // after loop, i is the first "non-zero" place //보면 non-zero 나올때까지 계속 가잖음 그러면 독특한게 맨 마지막에 값이 있음 
   for (j = N - 1; j >= i - 1; j--) { // the sum can have non-zero at (i-1)th place // 그럼 i-1 까지는 값이 되어있음  이건 그냥 더하는거 
      if ((s = carry + aa[j] + bb[j]) > 9) { //carry는 얘를 들어 5 + 8 = 13 에서 여기 십의 자리 1이 carry
         bb[j] = s - 10; //근데 여기 보면 J가 점점 줄어든단 말임 1의 자리부터 천천히 넣고 있음
         carry = 1;
      }
      else {
         bb[j] = s;
         carry = 0;
      }
   }
}
int main()
{
    //피보나치는 1, 1, 2, 3, 5, 8, 13, 21 이런 식으로 호출되길 바람. 
    char fib1[N] = {0}; // 첫 번째 피보나치 수
    char fib2[N] = {0}; // 두 번째 피보나치 수
    char fib_sum[N] = {0}; // 더한 피보나치 수를 임시로 저장하는 배열

    // 초기값 설정
    fib1[N - 1] = 1;
    fib2[N - 1] = 0;

    // 피보나치 수열 생성 및 출력
    for (int i = 1; i <= 100; i++) { // 100번째까지의 피보나치 수열을 생성
        print_digits(fib1); // 현재 피보나치 수 출력
        printf("\n");

        // 다음 피보나치 수 계산
        add_digits(fib1, fib2);
        for (int j = 0; j < N; j++) {
            fib_sum[j] = fib2[j];
            fib2[j] = fib1[j];
            fib1[j] = fib_sum[j];
        }
    }

    return 0;
}