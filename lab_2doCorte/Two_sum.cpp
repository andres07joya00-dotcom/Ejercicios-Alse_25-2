#include <iostream>
 
using namespace std;

class Solution {
public:
    void sumatarget(int ar[4], int target, int arr[2]){
        int a = 4;
        for(int i = 0; i<a; i++){
            for(int x = 0; x<a; x++){
                if(ar[x] + ar[i] == target){
                    arr[0] = x;
                    arr[1] = i;
                }
            }   
        };
    }
};

int main(){
    int nums[4] = {0};
    int target = 0;

    cout << "ingres los numeros del arreglo: " << endl;
    for(int i = 0; i<4; i++){
        cin >> nums[i];
    }

    cout << "ingrese el target: " << endl;
    cin >> target;

    int arrrr[2];
    Solution Solution;
    Solution.sumatarget(nums, target, arrrr);
    cout << "indices de los numeros que suman el target: " << endl;
    cout << arrrr[0] << endl;
    cout << arrrr[1] << endl;
    
    return 0;
}