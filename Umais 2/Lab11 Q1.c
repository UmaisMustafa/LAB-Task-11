#include<stdio.h>
 
 	struct Rectangle{
 		float length;
 		float width;
	 };
 		float Perimeter(struct Rectangle r1){
 			float P=(r1.length+r1.width);
 				printf("Perimter of Rectangle is %f\n",P);
 		}		
 		float Area(struct Rectangle r1){
 			float A=r1.length*r1.width;
 					printf("Area of Rectangle is %f\n",A);
		 }
		 
		 void check(struct Rectangle r1){
		 	if(r1.length>0 && r1.length<20 )
		 		printf("Length is between 0 and 20\n");
		 		else
		 		printf("Length is not Between 0 and 20\n ");
		 		if( r1.width >0 && r1.width<20)
		 		printf("Width is between 0 and 20\n");
		 		else 
		 		printf("Width is  not between 0 and 20\n");
 				}
int main(){
	struct Rectangle r1;
	r1.length=6.0;
	r1.width=2.0;
	check(r1);
	Perimeter(r1);
	Area(r1);
} 
