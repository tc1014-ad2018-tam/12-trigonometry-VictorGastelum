/*
   This program will help to the user to calculate all the
   trigonometric functions (sine,cosine,tangent,secant, cosecant and cotangent), 
   with the values that the user give.
   
   Author: Victor Manuel Gastelum Huitzil
   e-mail: A01411985@itesm.mx
   Date: 04/10/18
*/
#include<stdio.h>
#include<math.h>

#define PI 3.14159265

//Function for sine
double sine(double a){
	
    double s=0;
    s=(sin(a));
    printf("\nSine: %lf\n",s);
    return 0;
}

//Function for cosine
double cosine(double a){
	
	double c=0;
    c=(cos(a));
    printf("\nCosine: %lf\n",c);
    return 0;
}

//Function for tangent
double tangent(double a){
	
	double t=0;
    t=(tan(a));
    printf("\nTangent: %lf\n",t);
    return 0;
	
}

//Function for secant
double secant(double t){
	
	double se=0;
    se=(1/cos(t));
    printf("\nSecant: %lf\n",se);
    return 0;
	
}

//Function for cosecant
double cosecant(double o){
	
	double co=0;
    co=(1/sin(o));
    printf("\nCosecant: %lf\n",co);
    return 0;
	
}

//Function for cotangent
double cotangent(double a){
	
	double cot=0;
    cot=(1/tan(a));
    printf("\nCotangent: %lf\n",cot);
    return 0;
	
}

main (){
	double angle=0;
	double radians=0;
	
	// I ask the user the angle in degrees
	printf("Give me the angle in degrees: ");
	scanf("%lf", &angle);
	
	// Convert the degrees to radians
	radians=(angle*0.0174533);
	
	// Calculate all the trigonometric functions that 
	// stablish in the functions above, with the values that converted before
	sine(radians);
	cosine(radians);
	tangent(radians);
	secant(radians);
	cosecant(radians);
	cotangent(radians);
	
return 0;
}
