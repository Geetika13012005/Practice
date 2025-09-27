#include<iostream>
#include<vector>
#include <string>
using namespace std;
 class geetika{
    public :
    vector<string>summaryRanges(vector<int>&nums){

    
    vector<string> result;
    int n = nums.size();

    for(int i=1;i<n;i++){
        int start = nums[i];

        while (i+1<n && nums[i+1] == nums[i]+1){
            i++;
        }
        int end = nums[i];
        if(start==end){
            result.push_back (to_string (start));

        }else{
            result.push_back(to_string (start)+ "->"+ to_string(end));
        }
    }
    return result;
    }

 };
 int main(){
    geetika sol;
    vector<int> nums={1,2,4,5,7};
    vector<string> ans =sol.summaryRanges(nums);
    cout<<"Output : ";
    for(string s:ans){
        cout<<s<<" ";
    }
    cout<<endl;
    return 0;
 }