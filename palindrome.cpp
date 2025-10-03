#include<iostream>
#include<string>
using namespace std;

int main(){
    string s;
    cout<<"enter your string : ";
    cin>>s;

    int i=0;

    int j = s.length() - 1; 
    bool isPal = true;      

    while (i < j) {
        if (s[i] != s[j]) { 
            isPal = false;  
            break;          
        }
        i++; 
        j--; 
    }

    if (isPal)
        cout << s << " is a palindrome\n";
    else
        cout << s << " is not a palindrome\n";

    return 0;

}
