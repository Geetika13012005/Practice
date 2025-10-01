#include <iostream>
using namespace std;
 class Bottle
    {
    public:
    int numWaterBottles(int numBottles,int numExchange)
        {
        
            int total = numBottles;
            while (numBottles >= numExchange)
            {
                int exchange = numBottles /numExchange;
                int leftover = numBottles % numExchange;
                total += exchange ;
                numBottles = exchange +leftover ;
            }
            return total ;
        }
    };

int main ()
{
    Bottle bol;
    int numBottles , numExchange ;
    cout<<"Enter number of bottles :";
    cin >>numBottles;
    cout<<"Enter Exchnage rate : ";
    cin >>numExchange;
    cout<<"total bottles you can drink = "<<bol.numWaterBottles(numBottles,numExchange)<<endl;
    return 0 ;
}


