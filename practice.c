#include<stdio.h>
#include<math.h>
int main(){
    
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
    }

        



    


    


}