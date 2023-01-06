// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
#include <stdexcept>
#include <algorithm>

using namespace std;

int main() {
    int numCows = 0;
    string cowSequence = "";
    
    cin >> numCows;
    cout << endl;
    
    cin >> cowSequence;
    cout << endl;
    
    int counter  = 0;
    
    for(int i = 0; i < numCows; i++){
        try{
        string threeSequence = cowSequence[i] + cowSequence[i+1] + cowSequence[i+2];
        }

        catch(const out_of_range){
            break;
        }
        
       
        string::difference_type numGuernsey = count(threeSequence.begin(),threeSequence.end(), "G");
        
        string::difference_type numHolstein = count(threeSequence.begin(),threeSequence.end(), "H");
        
        
        if(numGuernsey == 1 || numHolstein  == 1){
            counter++;
        }
        
        else{
            continue;
        }
        
    }
    
    cout<<counter<<endl;

    return 0;
}