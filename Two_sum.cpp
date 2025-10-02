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
    int nums[4] = {0};
    int target = 0;

    cout << "ingres los numeros del arreglo: " << endl;
    for(int i = 0; i<4; i++){
        cin >> nums[i];
    }

    cout << "ingrese el target: " << endl;
    cin >> target;

    int arrrr[2];
    sumatarget(nums, target, arrrr);
    cout << "posicion en al arreglo: " << arrrr[0] << endl;
    cout << "posicion en el arreglo: " << arrrr[1] << endl;
    
    return 0;
}