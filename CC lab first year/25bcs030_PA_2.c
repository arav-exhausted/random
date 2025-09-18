#include <stdio.h>

int main() {
    //program 1
    float P,R,T;

    printf("Enter the Principal value: ");
    scanf("%f", &P);
    printf("Enter the Rate of interest: ");
    scanf("%f", &R);

    printf("Enter the Time period: ");
    scanf("%f", &T);

    int si= (P*R*T)/100;

    printf("The Simple Interest is %f", si);

    //program 2

    int sum =0;

    printf("%d", sum+=10);
    printf("%d", sum+=20);
    printf("%d", sum+=30);


    //program 3

    int n;
    printf("Enter the neumber: ");
    scanf("%d", &n);

    n= n>>3;
    printf("%d", n);


    //program 4

    int x;
    printf("Enter the number: ");
    scanf("%d", &x);

    (x>0)? printf("positive"):printf("negative");



    //program 5

    
    


    

    return 0;
}