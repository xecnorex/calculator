#include <stdio.h>

int main () 
{
  float input_one;
  float input_two;
  float ans;
  char operator;
  char anss;

beginning:
  printf("Enter your input: \n");
  scanf("%f", &input_one);

sec_input:
  printf("Enter your second input: \n");
  scanf("%f", &input_two);

  printf("Please choose your operator (+, -, *, /): \n");
  scanf(" %c", &operator);

  switch (operator)
  {
    case '+':
      ans = input_one + input_two;
      printf("%.2f\n", ans);
      break;

    case '-':
      ans = input_one - input_two;
      printf("%.2f\n", ans);
      break;

    case '*':
      ans = input_one * input_two;
      printf("%.2f\n", ans);
      break;
    
    case '/':
      if (input_two != 0)
      {
        ans = input_one / input_two;
        printf("%.2f\n", ans);
        break;
      }
      else {
        printf("The calculation is invalid. Please do not divide by 0.\n");
        goto sec_input;
      }

      break;

    default:
      printf("Invalid operator. Please try again\n");

      break;
  }

  printf("Try again? y/n \n");
  scanf(" %c", &anss);

  if (anss == 'y' || anss == 'Y') {
    goto beginning;
  }
  else {
    printf("babi");
  }
  return 0;
}
