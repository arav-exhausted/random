#include<stdio.h>
#include<math.h>



int main(){

    //program 1
    int a;
    float b;
    char ch;
    

    printf("Enter the integer  ");
    scanf("%d", &a);
    printf("floating-point number  ");
    scanf("%f", &b);
    printf("Enter the character:  ");
    scanf("%c", &ch);


    


    printf("The integer is %d\n", a);
    printf("The floating number is %f\n",b);
    printf("The character is %c\n", ch);
   

    //program 2

    int num, sum, d1, d2, d3;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    
    d1 = num / 100;          
    d2 = (num / 10) % 10;    
    d3 = num % 10;           

    sum = d1 + d2 + d3;

    printf("Sum of digits: %d\n", sum);



    //program 3

    int a1;
    int a2;
    int a3;
    int sum1,diff1;

    printf("Enter a:\n");
    scanf("%d",&a1);
    printf("Enter b:\n");
    scanf("%d", &a2);
    printf("Enter c:\n");
    scanf("%d",&a3);

    
    printf("a before change%d\n",a1);
    printf("b before change%d\n",a2);
    printf("c before change%d\n",a3);




    ++a1;
    a3++;

    sum1 = a1+a2;
    ++a3;
    

    a2--;
    diff1= a3-a2;

   printf("a after change%d\n",a1);
   printf("b after change%d\n",a2);
   printf("c after change%d\n",a3);



   //program 4

   int A,B;
   float C,D;

   printf("Enter A:");
   scanf("%d", &A);
   printf("Enter B:");
   scanf("%d", &B);
   
   printf("Enter C :");
   scanf("%f", &C);
   
   printf("Enter D:");
   scanf("%f", &D);
   

  
   

   float A1,A2,A3,A4,A5,A6;
    
   A1 = A + (C/4)* (D/3) +B;
   A2 = C + (A/4) * (B/3) + D;
   A3 = ((int)C / A )* (B/3);
   A4 = (A/B)*(B%5)%3;
   A5= 10-5- (7/4) * 4;
   A6 = 24/(1 + (2%3) + (4/5) + 6  + 31%8);

   printf("result1 %f\n", A1);
   printf("result2 %f\n", A2);
   printf("result3 %f\n", A3);
   printf("result4 %f\n", A4);
   printf("result5 %f\n", A5);
   printf("result6 %f\n", A6);
    

   //program 5
    int X=7,Y=11;
    printf("X Bitwise AND Y %d\n", X&Y);
    printf("A Bitwise OR B %d\n", X|Y);
    printf("A Bitwise exclusive OR B %d\n", X^Y);
    printf("A left shift 2 %d\n", X<<2);
    printf("B right shift 4 %d\n", Y>>4);


    //program 6

    float h;
    float g= 9.8;

    printf("Enter the height: ");
    

    scanf("%f",&h);

    float distance = h + h/2 + h/8;

    printf("The distance travelled is %f", distance);

    return 0;








    
}