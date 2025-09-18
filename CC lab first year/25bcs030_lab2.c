#include<stdio.h>

int main(){
    /*Question 1*/

    printf("Name: Arav Prajapat \n");
    printf("Roll Number: 25bcs030 \n");
    printf("Branch: CSE \n");
    return 0;

    /*Question 2*/

    printf("Enter the distance in meters: ");
    float a;

    scanf("%f", &a);

    float e= a*100;


    printf("The distance in centimeters is %f cm \n", e);
    return 0;
    

    /*Question 3*/

    float length, width, area;
    printf("Enter the length ");
    scanf("%f", &length);
    printf("Enter the width ");
    scanf("%f", &width);
    area = length*width;

    printf("The area is %f \n", area);
    return 0;

    /*Question 4*/


    int c,d,add,sub, mul,div,mod;


    printf("Enter the first number(a) ");
    scanf("%d", &c);
    printf("Enter the second number(b) ");
    scanf("%d", &d);

    add = c+d;
    sub= c-d;
    mul= c*d;
    div= c/d;
    mod= c%d;

    printf("Addition %d \n",add);
    printf("Subtraction %d \n",sub);
    printf("Multiplication %d \n",mul);
    printf("Division %d \n",div);
    printf("Modulus %d \n",mod);
    return 0;

    /*Question 5*/


    float x,y,z, sol;

    printf("Enter x ");
    scanf("%f", &x);
    printf("Enter y ");
    scanf("%f", &y);
    printf("Enter z ");
    scanf("%f", &z);


    sol= ((((2*x + 4*y)/2)+3)*z)- (((4*z + 6*y)/2)*x);

    printf("The answer is %f", sol);
    return 0;
    




    

}