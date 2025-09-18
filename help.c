#include <stdio.h>

int main() {
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
}
