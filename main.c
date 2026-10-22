#include <stdio.h>

float operator_func(float operand1, char operators, float operand2){
    float result = 0;
    if(operators == '+')
        result = operand1 + operand2;
    else if(operators == '-')
        result = operand1 - operand2;
    else if(operators == '*')
        result = operand1 * operand2;
    else if(operators == '/')
        result = operand1 / operand2;
    else{
        printf("Invalid operator!\n");
        return -1;
    }
    return result;
}

int main(void){
    float op1, op2;
    char operators;
    char temp;

    scanf("%f %c", &op1, &operators);


    while(1){
        scanf("%f", &op2);
        op1 = operator_func(op1, operators, op2);
        while(1){
            temp = getchar();
            if(temp == '+' || temp == '-' || temp == '*' || temp == '/'){
                operators = temp;
                break;
            }else if(temp == '\n')
                goto result;
        }
    }
    result:
    printf("result = %.2f\n", op1);
    return 0;
}
