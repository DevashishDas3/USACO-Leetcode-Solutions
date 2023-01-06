#include <iostream>
#include <string>

using  namespace  std;



int main(){

    int numSwaps = 0;

    cout<<"Number of swaps: "<<endl;
    cin>>numSwaps;

    string swapData[numSwaps];

    if(1 > numSwaps || numSwaps > 100){
        cout<<"Invalid number of swaps"<<endl;
    }

    for(int i = 0; i < numSwaps; i++){
        string data = " ";
        cout<<"Swap data: ";
        cin >> data;
        swapData[i] = data;
    }

    int pl_arr[3] = {1,2,3};

    int first_shell(){
        for(int i = 0; i < numSwaps; i++){
            string partialData = swapData[i];
            int index_one = ((int)(partialData[0])) - 1;
            int index_two = ((int)(partialData[1])) - 1;
            int guess = (int)(partialData[2]);
            pl_arr[index_one] = index_two;
        }


        return 0;
    }

    return 0;
}