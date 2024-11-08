#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX_EXPRESSION_LENGTH 100

// Function prototypes
double add(double x, double y);
double subtract(double x, double y);
double multiply(double x, double y);
double divide(double x, double y);
double sine(double x);
double cosine(double x);
double tangent(double x);
double exponent(double x);
double logarithm(double x);

int main() {
    char expression[MAX_EXPRESSION_LENGTH];
    char operation[10];
    double x, y, result;

    printf("Welcome to My Scientific Calculator!\n");
    printf("Supported operations: +, -, *, /, sin, cos, tan, exp, log\n");
    printf("Enter 'quit' to exit\n");

    while (1) {
        printf("Enter an expression: ");
        fgets(expression, sizeof(expression), stdin);

        if (strcmp(expression, "quit\n") == 0)
            break;

        if (sscanf(expression, "%lf %s %lf", &x, operation, &y) != 3) {
            printf("Invalid expression\n");
            continue;
        }

        if (strcmp(operation, "+") == 0)
            result = add(x, y);
        else if (strcmp(operation, "-") == 0)
            result = subtract(x, y);
        else if (strcmp(operation, "*") == 0)
            result = multiply(x, y);
        else if (strcmp(operation, "/") == 0)
            result = divide(x, y);
        else if (strcmp(operation, "sin") == 0)
            result = sine(x);
        else if (strcmp(operation, "cos") == 0)
            result = cosine(x);
        else if (strcmp(operation, "tan") == 0)
            result = tangent(x);
        else if (strcmp(operation, "exp") == 0)
            result = exponent(x);
        else if (strcmp(operation, "log") == 0)
            result = logarithm(x);
        else {
            printf("Invalid operation\n");
            continue;
        }

        printf("Result: %lf\n", result);
    }

    printf("Goodbye!\n");
    return 0;
}

double add(double x, double y) {
    return x + y;
}

double subtract(double x, double y) {
    return x - y;
}

double multiply(double x, double y) {
    return x * y;
}

double divide(double x, double y) {
    if (y == 0) {
        printf("Error: Cannot divide by zero\n");
        exit(1);
    }
    return x / y;
}

double sine(double x) {
    return sin(x);
}

double cosine(double x) {
    return cos(x);
}

double tangent(double x) {
    return tan(x);
}

double exponent(double x) {
    return exp(x);
}

double logarithm(double x) {
    if (x <= 0) {
        printf("Error: Logarithm of non-positive number\n");
        exit(1);
    }
    return log(x);
}