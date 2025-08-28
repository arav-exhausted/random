#include <bits/stdc++.h>  //This contains all the libraries
using namespace std;

//#include<math.h> ~ this will include all maths algor and functions etc



// types of functions : void(it assigns the function its role but on its own do nothing), syntax~  void functionname(){task}
// return type function: syntax~ int functionname(){taskk, operation and everything and then return what you want to return like
// //int slash(int a, int b){
//     return a+b;

// }

//pair concept done
/*
containers - vectors, lists,deque, stack, queue, priority queue, sets, multiset,maps
iterators- 
*/

void pairs(){
    pair<int,int>p = {4,5};
    pair<int, pair<int,int>> pp = {3,{4,5}};
    //to print 4 in p
    cout<< p.first();

}

void vector(){
    vector<int>v;// creates a empty vector []
    v.push_back(4); //emptry container will take input as 4 . now v =[4]
    v.emplace_back(3);//the vector will increase its size and take 3 as an input. now v =[4,3]


    //to define a already defined vector

    vector<int> v1 (5,100); //this prints a vector containing 5 instances of 100. now v = [100,100,100,100,100]
    vector<int> v1 (5); //now v = [0,0,0,0,0]

    //let us say we have a vector v_1 [1,2,3,4,5] and if we want to access 3 we can simply make the same syntax as of matrix
    //like to access 3 which is on 2 nd position we use 
    v_1[2];// thhis prints 3

    //we have more methods to do the same one of which is to use iterators like begin, end etc
    vector<int>::iterator it = v.begin();//here this v.begin points to the memory of the element but not the adress of the element
    //agar hame element print krna h to ham * laga ke kr skta h
    //also if we want to do print last element we use v.end() but it will end at the memory last to the last element but not the last element

    cout<< it; //prints the memory of begin element i.e. 1
    cout<<*(it); // prints 1
    //if we do it++ it moves to next person

    // also we can define iterator useing auto function 
    auto it = v.begin();



    // to print the vector
    //for(variable, condition, increment)
    for(auto it= v.begin(), it!=v.end(), it++ ){
        cout<< *(it);

    }

    //to erase we use 
    v.erase(v.begin()+1) // this deletes the second element in the vector

    //to insert an element

    v.insert(v.begin(), 3) //adds an element 3 to the first position
    v.size(); //gets us the size of vector
    v.pop_back(); //erases the last element
    v.clear(); // erases the vector
    v.empty(); //zero thing in ector
    v1.swap(v2); // swaps v1 with v2

}


//else all containers are related to vector functions so no need to do one by one




