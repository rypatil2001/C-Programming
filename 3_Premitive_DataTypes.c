#include<stdio.h>
//PRIMITIVE Data Types

int main()
{
   // local variables
   int No1 = 10;
   float No2 = 3.123764;
   double D = 2.87878787878787; 
   char ch = 'A';

   printf("Integer %d \n",No1); 
   printf("Float %f \n",No2);
   printf("Float %.2f \n",No2);
   printf("Double %lf \n",D);
   printf("Double %.9lf \n",D);
   printf("Character %c \n",ch);

/*      % stands for format specifier 
        %d int
        %f float
        %c character
        %lf double
*/

   return 0;  // Indicates Successful Execution
}