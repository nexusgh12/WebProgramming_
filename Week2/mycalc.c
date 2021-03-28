#include <stdio.h>
int main(){
        int num1, num2, sum, multiple;
        double div;
        printf("첫번째 숫자를 입력해주세요: ");
        scanf("%d", &num1);
        printf("두번째 숫자를 입력해주세요: ");
        scanf("%d", &num2);

        sum = num1 + num2;
        multiple = num1 * num2;
        div = num1 / num2;
    

        printf("입력한 두 값은 %d, %d 입니다.", num1, num2);
        printf("sum : %d\n", sum);
        printf("multiple : %d\n", multiple);
        printf("divide : %02f\n", div);

        return 0;
}
