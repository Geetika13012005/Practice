// #include<iostream>
// using namespace std;
// int main(){
//     int age ;
//     cin>>age;
//     if(age>=18){
//         cout<<"Adult"<<endl;

//     }else{cout<<"Minor";
//     }
// return 0;
// }

//IF-Else
// //for marks for school grading system
// #include<iostream>
// using namespace std;
// int main ()
// {
//     int marks;
//     cin>>marks;
//     if(marks < 25)
//     {
//         cout<<"F";
//     }
//      else if(marks>=25 && marks<=44){      //&& for multiple comparison conditions 
//             cout<<"E";
//         }
//         else if(marks>=45 && marks<=49){
//             cout<<"D";

//         }
//         else if(marks>=50 && marks<=59){
//             cout<<"C";
//         }
//         else if(marks>=60 && marks<=79){
//             cout<<"B";
//         }
//         else if(marks>=80 && marks<=100){
//             cout<<"A";
//         }
//         return 0;
    
// }

//Job ELIGIBLE OR NOT BY AGE 

#include<iostream>
using namespace std;
int main (){
    int age ;
    cin>>age;
    if(age<18){
        cout<<"Not eligible for job ";
    }else if(age<=54 ){
        cout<<"Eligible for job";
    }else if(age<=57){
        cout<<"Eligible for job but Retirement soon";
    }else if(age>57){
        cout<<"Retirement Soon";
    }
    return 0;
}