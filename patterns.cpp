#include <iostream>
using namespace std;

//All the patterns mean nested loops


//outer loop is for rows and inner loop is for columns



void star_triangle(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }
    
    
    
        for(int j=0; j< 2*i+1; j++){
            cout<<"*";

        }

    
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        
        }
        cout<<endl;
        
    }

}
void star_triangle_inverted(int n){

    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";

        }

        for(int j=0; j< 2*n-(2*i + 1); j++){
            cout<<"*";

        }

        for(int j=0; j<i; j++){
            cout<<" ";

        }

        cout<<endl;


    }

}
void star_triangle_combined(int n){
    for(int i=0; i<n;i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }
    
    
    
        for(int j=0; j< 2*i+1; j++){
            cout<<"*";

        }

    
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        
        }
        cout<<endl;
    }

    for(int i=0; i<n; i++){

        for(int j=0; j<i; j++){
            cout<<" ";

        }

        for(int j=0; j< 2*n-(2*i + 1); j++){
            cout<<"*";

        }

        for(int j=0; j<i; j++){
            cout<<" ";

        }

        cout<<endl;

    }
}
void design(int n){

    for(int i=1; i<=n; i++){
        for(int j=0; j<i; j++){
            cout<<"*";

        }
        cout<<endl;

    }

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<"*";

        }
        cout<<endl;

    }


}
void imp(int n){
    /* pattern is like this 
       1      1
       12    21
       123  321
       12344321
    */

    int space= 2*(n-1);

    for(int i=1; i<=n; i++){


        
        //number
        for(int j=1; j<=i; j++){
            cout<<j;

        }

        //space

        for(int j=1; j<=space; j++ ){
            cout<<" ";
        }



        //number 
        for(int j=i; j>=1; j--){
            cout<<j;
            
        }

        cout<<endl;

        space -= 2;
        

    }
}
void number_ladder(int n){
    /*pattern like this 
    1
    23
    456
    78910 ... .. . .. . 
    . . . . .
     . . 
    */

    int num = 1;
    for(int i =0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<< num << " ";

            num += 1;

        }
        cout<<endl;
    }
}
void alphabet_tree(int n){
     /*
     pattern is like this 
     
     A
     AB
     ABC
     ABCD
     .....
     ....
     
     
     */


    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A' + i; ch++){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
    
}
void inv_alphabet_tree(int n){

    for(int i=0; i<n; i++){
        for(char ch='A'; ch<='A'+n-i-1; ch++){
            cout<<ch<<" ";

        }
        cout<<endl;

    }

}
void alphabet_tree2(int n){

    for(int i=0; i<n; i++){
        char ch='A'+i;
        for(int j=0; j<=i; j++){
            cout<<ch;


        }

        cout<<endl;
    }



}
void alphabet_pyramid(int n){
    for(int i=0; i<n; i++){



        /*
        pattern is like 
           A
          ABA
         ABCBA
        ABCDCBA
        */



        //space alphabet space
       
        for(int j=0; j<n-i-1; j++){
            cout<<" ";

        }
    
        char ch='A';
        for(int j=0; j<2*i+1; j++){
            cout<<ch;
            int breakpoint = (2*i+1 )/2;


            if(j<= breakpoint) ch++;
            else ch--;
             
        }
    
        

        

    
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        
        }
        cout<<endl;
        
    }






       
    


}

void ladder(int n){
    for(int i=0; i<n; i++){

        

        for(char ch = 'E' - i; ch<='E'; ch++ ){
            cout<< ch;
          

        }
        cout<<endl;

    }
}

void pattern1(int n) {
    int iniS= 0;

    for(int i=0; i<n; i++){
        //stars
        for(int j=0; j< n-i; j++){
            cout<<"*";

        }



        //spaces
        

        for(int j=0;j<iniS; j++){
            cout<<" ";

        }


        //stars

        for(int j=0; j< n-i; j++){
            cout<<"*";
            
        }
        iniS += 2;

        cout<<endl;
    }
}
 






int main(){

    int n;
    cin>>n;
    cout<<endl;

    pattern1(n);

}


 