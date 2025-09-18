#include<stdio.h>
#include<math.h>



int main(){

    //program 1
    char vowel1='a',vowel2='e',vowel3='i',vowel4='o',vowel5='u';
    char ch;

    printf("Enter the character: ");
    scanf("%c", &ch);

    if(ch==vowel1 || ch==vowel2 || ch==vowel3 || ch==vowel4 || ch==vowel5 ){
        printf("%c is a vowel \n", ch);

    }
    else if(ch!=vowel1 || ch!=vowel2 || ch!=vowel3 || ch!=vowel4 || ch!=vowel5 ){
        printf("%c is a consonant \n", ch);

    }
    else printf("Invalid input\n");



    //program 2


    int time;
    printf("Enter the time as a positive integer(24H format): ");
    scanf("%d", &time);

    if(time>=5 && time<=10){
        printf("Hello, Sunny Morning \n");

    }
    else if(time>=11&& time<=16){
        printf("Good Afternoon \n");
        
    }
    else if(time>=17 && time<=19){
        printf("Good Evening \n");
        
    }
    else if(time>=20 && time<=22){
        printf("Good Night \n");
        
    }
    else if(time>=23 && time<=24){
        printf("Hi, Sleepy Head \n");
        
    }
    else if(time==1 || time==2 || time==3 || time==4 ){
        printf("Hi, Sleepy Head \n");
        
    }
    else printf("Wrong input \n");


    //program 3

    int a,b,c;
    int root1, root2;


    printf("The standard quadratic equation is in the form of ax^2 + bx + c = 0 \n");

    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);
    printf("Enter c: ");
    scanf("%d", &c);

    int discriminant= (b*b) - (4*a*c);

    if(discriminant >=0){
        root1= ((-b)/(2*a) + (sqrt(discriminant))/(2*a));
        root2= ((-b)/(2*a) - (sqrt(discriminant))/(2*a));

        printf("The roots are %d and %d \n", root1,root2);
        
    }

    else {
        printf("The roots are imaginary \n");

    }

    //program 4

    printf("This is a simple grade calculator \n");

    float maths,eng,hin,sci,sst;

    printf("Enter the marks in Maths: ");
    scanf("%f", &maths);
    printf("Enter the marks in English: ");
    scanf("%f", &eng);
    printf("Enter the marks in Hindi: ");
    scanf("%f", &hin);
    printf("Enter the marks in Science: ");
    scanf("%f", &sci);
    printf("Enter the marks in SST: ");
    scanf("%f", &sst);

    float total = maths+eng+hin+sci+sst;
    float average = total/5;

    printf("The Total marks are %f \n", total);
    printf("The average marks are %f \n", average);


    printf("The Grade is: ");


    int gr;

    if(average>=90){
        gr = 1;

    }
    else if(average>=81 && average<90){
        gr = 2;

    }
    else if(average>=71 && average<80){
        gr= 3;

    }
    else if(average>=61 && average<70){
        gr = 4;

    }
    else if(average>=51 && average<60){
        gr= 5;

    }
    else gr= 6;

    switch (gr)
    {

        case 1:
            printf("A");
            break;
        case 2:
            printf("B");
            break;
        case 3:
            printf("C");
            break;
        case 4:
            printf("D");
            break;
        case 5:
            printf("E");
            break;
        case 6:
            printf("F");
            break;
        default:
            printf("Invalid");

    
        
        
    
    }

    printf("\n");
    



    //program 5

    float dist;
    float fare = 0;



    printf("Enter the total Kilometers travelled: ");
    scanf("%f", &dist);
    if(dist<=12){
        printf("Your fare is 100 rs");

    }
    if (dist>12){
        if(dist<=16){
            fare = 100 +(dist-12)*8;

            

        }
        else if(dist>16 && dist<20){

            fare= 100 + 32 + (dist-16)*6;


            
        }

        else if(dist>20){

            fare = 100+32+24 + (dist-20)*5;


        }

        printf("Your fare is %f \n", fare);

    }



    
    






}