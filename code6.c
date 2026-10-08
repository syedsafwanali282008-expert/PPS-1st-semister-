 #include <stdio.h>

  int main ()

  {
      float a;
      float b;
      float c;
      float average;
      printf ("Enter the 1st number :");
      scanf("%f",&a);
      printf("Enter the 2nd number :");
      scanf("%f",&b);
      printf("Enter the 3rd number :");
      scanf("%f",&c);
      average =(a+b+c)/ 3;
      printf("The average is : %f", average);
      return 0;
  }
