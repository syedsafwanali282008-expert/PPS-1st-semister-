 #include <stdio.h>

  int main()

   {
       float a;
       float Pie;
       float Perimeter;
       float area;
      printf("Enter the Radius :");
      scanf("%f",&a);
      Pie = 3.14;
      area = Pie * (a*a);
      Perimeter = 2*Pie*a;
      printf("The area is : %f", area);
      printf("The Perimeter is : %f", Perimeter);
      return 0;
   }
