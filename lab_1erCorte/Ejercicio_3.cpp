#include <iostream>

using namespace std;
void MCD(int a, int b){
  int MaxComDiv = 1;
  
  for (int i = 1; i <= (a < b ? a : b); i++){
    if(a%i==0 && b%i==0){
      MaxComDiv = i;
    }
  }
  cout << "El MCD de " << a << " y " << b << " es: " << MaxComDiv << endl;  
}
int main(){
  int num1, num2;
  cout << "Ingrese dos numeros: ";
  cin >> num1 >> num2;
  MCD(num1, num2);
  return 0;
  }
