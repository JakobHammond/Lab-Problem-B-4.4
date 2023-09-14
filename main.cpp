//
//  main.cpp
//  p4-4
//
//  Created by Jakob Hammond on 9/14/23.
//

#include <iostream>
using namespace std;

int main(void){
    double amountDue;
    double amountPaid;
    double amountReturned;
    double amountReturnedCents;
    
    int dollarsReturned;
    int quartersReturned;
    int dimesReturned;
    int nickelsReturned;
    int penniesReturned;
    
    cout << "Customer owes $";
    cin >> amountDue;
    cout << "Customer pays $";
    cin >> amountPaid;
    
    amountReturned = amountPaid - amountDue;
    amountReturnedCents = amountReturned * 100;
    
    cout << "Change due: " << amountReturned << endl;
    
    
    //dollars returned
    if(amountReturnedCents >= 100){
        dollarsReturned = amountReturnedCents / 100;
        cout << dollarsReturned << " dollars" << endl;
        amountReturnedCents -= (dollarsReturned * 100);
    }
    //quarters returned
    if(amountReturnedCents >= 25){
        quartersReturned = amountReturnedCents / 25;
        cout << quartersReturned << " quarters" << endl;
        amountReturnedCents -= (quartersReturned * 25);
    }
    //dimes returned
    if(amountReturnedCents >= 10){
        dimesReturned = amountReturnedCents / 10;
        cout << dimesReturned << " dimes" << endl;
        amountReturnedCents -= (dimesReturned * 10);
    }
    //nickels returned
    if(amountReturnedCents >= 5){
        nickelsReturned = amountReturnedCents / 5;
        cout << nickelsReturned << " nickels" << endl;
        amountReturnedCents -= (nickelsReturned * 5);
    }
    //pennies returned
    if(amountReturnedCents >= 1){
        penniesReturned = amountReturnedCents;
        cout << penniesReturned << " pennies" << endl;
    }
        
    
    
    
    
    
    //first try at problem (didn't work)
    //dollars returned
/*    if(amountReturned >= 1){
        dollarsReturned = (int) amountReturned;
        cout << dollarsReturned << " dollars" << endl;
        amountReturned -= dollarsReturned;
    }
    //quarters returned
    if(amountReturned >= 0.25){
        quartersReturned = (int)(amountReturned * 4);
        cout << quartersReturned << " quarters" <<endl;
        amountReturned -= quartersReturned / 4;
        cout << amountReturned << endl;
        
    }
    //dimes returned
    if(amountReturned >= 0.1){
        dimesReturned = (int)(amountReturned * 10);
        cout << dimesReturned << " dimes" << endl;
        amountReturned -= dimesReturned / 10;
        cout << amountReturned;
    }
*/
}
