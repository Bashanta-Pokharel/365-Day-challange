#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 100

int vstack[MAX];
int tos = -1;

void push(int val) {
    if (tos >= MAX - 1) {
        printf("Stack overflow\n");
        return;
    }
    vstack[++tos] = val;
}

int pop() {
    if (tos < 0) {
        printf("Stack underflow\n");
        return -1;
    }
    return vstack[tos--];
}

int isOperator(char ch) {
    return ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '%';
}

int evaluatePostfix(char postfix[]) {
    int i, op1, op2, result;
    int len = strlen(postfix);

    for (i = 0; i < len; i++) {
        if (isspace(postfix[i])) {
            continue; // Skip spaces
        } else if (isdigit(postfix[i])) {
            int num = 0;
            while (i < len && isdigit(postfix[i])) {
                num = num * 10 + (postfix[i] - '0');
                i++;
            }
            i--; // Adjust for the extra increment in the loop
            push(num);
        } else if (isOperator(postfix[i])) {
            op2 = pop();
            op1 = pop();
            switch (postfix[i]) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
                case '^': push((int)pow(op1, op2)); break;
                case '%': push(op1 % op2); break;
            }
        } else {
            printf("Invalid character in expression: %c\n", postfix[i]);
            exit(1);
        }
    }
    result = pop();
    return result;
}

int evaluatePrefix(char prefix[]) {
    int i, op1, op2, result;
    int len = strlen(prefix);

    for (i = len - 1; i >= 0; i--) {
        if (isspace(prefix[i])) {
            continue; // Skip spaces
        } else if (isdigit(prefix[i])) {
            int num = 0, power = 1;
            while (i >= 0 && isdigit(prefix[i])) {
                num = num + (prefix[i] - '0') * power;
                power *= 10;
                i--;
            }
            i++; // Adjust for the extra decrement in the loop
            push(num);
        } else if (isOperator(prefix[i])) {
            op1 = pop();
            op2 = pop();
            switch (prefix[i]) {
                case '+': push(op1 + op2); break;
                case '-': push(op1 - op2); break;
                case '*': push(op1 * op2); break;
                case '/': push(op1 / op2); break;
                case '^': push((int)pow(op1, op2)); break;
                case '%': push(op1 % op2); break;
            }
        } else {
            printf("Invalid character in expression: %c\n", prefix[i]);
            exit(1);
        }
    }
    result = pop();
    return result;
}

int main() {
    char expression[MAX];
    int result;

    printf("Enter a valid postfix or prefix expression: ");
    fgets(expression, MAX, stdin); // Use fgets instead of gets
    expression[strcspn(expression, "\n")] = 0; // Remove newline character

    if (isdigit(expression[0])) {
        result = evaluatePostfix(expression);
    } else if (isOperator(expression[0])) {
        result = evaluatePrefix(expression);
    } else {
        printf("Invalid expression\n");
        return 1;
    }

    printf("The result is: %d\n", result);
    return 0;
}
