#include <stdio.h>
#include <math.h>

int main(void) {
   
   double value1;
   double value2;
   double answer;
   int operation;
   

   printf("This is a calculator\n");
   printf("Enter your first value.\n");
   scanf("%lf",&value1);
   printf("Enter your second value.\n");
   scanf("%lf",&value2);

   while(operation < 898){
         printf("Select your operation:\n 1 = Addition\n 2 = Subtraction\n 3 = Multiplication\n 4 = Division\n 5 = Exponent Calculation\n ");
         scanf("%d",&operation);

      switch(operation) {
      case 1 :
         answer = value1 + value2; 
         printf("Your answer is: %.2lf",answer);
         operation = 898;
         break; 
      case 2 :
         answer = value1 - value2;
         printf("Your answer is: %.2lf\n",answer);
         operation = 898;
         break;
      case 3:
         answer = value1 * value2;
         printf("Your answer is: %.2lf\n",answer);
         operation = 898;
         break;
      case 4:
         answer = value1 / value2;
         printf("Your answer is: %.2lf\n",answer);
         operation = 898;
         break;
      case 5:
         answer = pow(value1,value2);
         printf("Your answer is: %.2lf\n",answer);
         operation = 0;
         break;
      default:
         printf("Error! Input a value between 1-5\n");
      }
   }

    return 0;
}