#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int s[10], top = -1;

void push(int x) {
    s[++top] = x;
}

int pop() {
    return s[top--];
}

int main() {
    char expr[20], ch;
    int op1, op2, n;

    cout << "Enter the postfix expression: ";
    cin >> expr;

    n = strlen(expr);

    for (int i = 0; i < n; i++) {
        ch = expr[i];

        if (isdigit(ch)) {
            push(ch - '0'); // Convert char digit to int
        } else {
            op1 = pop();
            op2 = pop();

            switch (ch) {
                case '+':
                    push(op2 + op1);
                    break;

                case '-':
                    push(op2 - op1);
                    break;

                case '*':
                    push(op2 * op1);
                    break;

                case '/':
                    push(op2 / op1);
                    break;

                default:
                    cout << "Invalid operator: " << ch << endl;
                    return 1;
            }
        }
    }

    cout << "The result is = " << s[top] << endl;

    return 0;
}