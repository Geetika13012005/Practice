#include<iostream>   //for i\p and o\p
#include<stack>
#include<string>
using namespace std;

//solution class to hold our function 

class Solution {
    public:
    //fun to check if string is valid 
    bool isValid(string s){
        stack<char> st; //stack to store opening brackets

        //loop through each char in the string 

        for (char c:s){

            //case 1 
            if(c=='(' || c=='{' || c=='['){
                st.push(c);
            }
            else{
                //case2
                if(st.empty())return false;

                char top = st.top();
                st.pop();

                if((c==')' && top != '(' ) ||
                  (c == '}'&& top != '{')||
                   (c==']' && top != '[')){
                    return false; //mismatch =invalid
                   }
            }
        }
        return st.empty();
   } 
};

int main(){
    Solution sol;
    string s;

    cout<<"Enter a string of brackets: "<<endl;
    cin>> s;

    //call fun and print result 
    if(sol.isValid(s))
    cout<<"Valid parentheses"<<endl;
    else
    cout<<"Invalid Parantheses"<<endl;

    return 0;

}