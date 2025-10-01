#include <iostream>
 
using namespace std;
 
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
 
int main(){
    int nums[4] = {2, 3, 4, 5};
    int target = 9;
    int arrrr[2];
    sumatarget(nums, target, arrrr);
    cout << arrrr[0] << endl;
    cout << arrrr[1] << endl;
    
    return 0;
}