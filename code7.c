  #include <stdio.h>

  int main()

   {
       float a;
       float b;
       float c;
       float simple_intrest ;
      printf ("Enter the principle :");
      scanf("%f",&a);
      printf("Enter the time :");
      scanf("%f",&b);
      printf("Enter the rate of intrest :");
      scanf("%f",&c);
      simple_intrest =(a+b+c)/100;
      printf("The simple intrest is : %f", simple_intrest );
      return 0;
   }
