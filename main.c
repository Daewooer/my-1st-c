#include <stdio.h>

int main(void) {
  //data types 
  int numb1 = 69;
  float number3 = 69.420;
  double number4 = 420.69;

  printf("Hello World\n");
  //Integer output
  int testInt = 69;
  printf("Number = %d", testInt);
  //float and double Output
  float number1 = 13.5;
  double number2 = 12.4;
    printf("number1 = %f\n", number1);
    printf("number2 = %lf\n", number2);
    //Print Characters
    char chr = 'a';    
    printf("character = %c\n", chr);  
    // Integer Input/Output

    printf("Enter an integer: ");
    scanf("%d", &testInt);  
    printf("Number = %d",testInt);
    // Float and Double Input/Output

    
    float num1;
    double num2;

    printf("Enter a number: ");
    scanf("%f", &num1);
    printf("Enter another number: ");
    scanf("%lf", &num2);

    printf("num1 = %f\n", num1);
    printf("num2 = %lf", num2);
    //
    char c;
    printf("Enter a character: ");
    scanf("%c",&chr);     
    printf("You entered %c.", chr);  
    //data types print 
    char  k;
    return 0;
    //done :)
}
