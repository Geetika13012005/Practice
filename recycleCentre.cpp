#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        long long c;
        cin >> n >> c;

        vector<long long> a(n);
        for(int i=0;i<n;i++)
            cin >> a[i];

        sort(a.begin(), a.end());

        int time = 0;
        int coins = 0;

        for(int i=0;i<n;i++){
            long long weight = a[i];

            if(weight <= (c >> time)){
                time++;
            }else{
                coins++;
            }
        }

        cout << coins << endl;
    }
}