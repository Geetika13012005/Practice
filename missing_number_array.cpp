#include<iostream>
#include<vector>
using namespace std;

vector<int>missingNumber(vector<int>&nums)
{
    int n= nums.size();
    // mark seen element as  negative 
    for(int i=0;i<n;i++){
        int index=abs(nums[i])-1;
        if(nums[index]>0){
            nums[index]=-nums[index];
        }
    }
    //collect numbers which are missing 
    vector<int>result;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            result.push_back(i+1);
        }
    }
    return result;
}
int main(){
    vector<int>nums={4,3,2,7,8,2,3,1};
    vector<int>ans=missingNumber(nums);
    cout<<"Missing number :" ;
    for(int num:ans){
        cout<<num<<" ";
    }
    return 0;
}