#include<stdio.h>
int main()

{
    char op;
  double first, second;

  printf("Enter two numbers with operator: ");
  scanf("%lf %c %lf", &first,&op,&second);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
      break;
    case '*':
      printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
      break;
    case '/':
      printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
      break;

    default:
      printf("operator is not correct");
  }

  return 0;
}
