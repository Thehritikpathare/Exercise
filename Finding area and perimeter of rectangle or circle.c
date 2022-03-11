#include<stdio.h>
//Find out the area and perimeter of Rectangle and circle
void Rect(int,int);
void cir(int); //using function
void main() 
{ 

int length, breadth;
int radius;
 
printf("\nFind Rectangle area and parameter");

printf("\n\nEnter the Length of Rectangle : ");
   scanf("%d", &length);
 
   printf("\nEnter the Breadth of Rectangle : ");
   scanf("%d", &breadth);
   
   printf("\nFind Circle area and parameter");
   printf("\n\nEnter the radius of circle: ");
   scanf("%d",&radius);
	Rect( length, breadth);
	cir(radius); 
	return 0;
}
void Rect(int length,int breadth)
 {
   int a;
   int p;
 
   	a = length * breadth;
   
   p=2*(length+breadth);
printf("\n\nRectangle");
   printf("\n\nArea of Rectangle : %d", a);
   printf("\nPerimeter of Rectangle : %d", p);
   
return 0;
}
void cir(int radius)
   {
  float area, perimeter;
      
   perimeter = 2*3.14*radius;
   printf("\n\nCircle");
   printf("\n\nPerimeter of the Circle = %f inches\n", perimeter);
	
	area = 3.14*radius*radius;
	printf("\nArea of the Circle = %f square inches\n", area);

 
   return 0;
   }