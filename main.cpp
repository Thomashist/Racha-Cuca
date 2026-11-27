#include <iostream>

using namespace std;


int main(){
 int N = 0;
 int vetor[6][6];
 
 cout<< "Digite um valor entre N > 2 e N < 6: ";
 cin>> N;

 while(N<2 || N>6){
    cout<< "Numero invalido! \n";
    cout<< "Digite um valor valido! \n";
    cin>> N;
 }
 
 for(int i=0; i < N; i++){
    for(int j=0; j < N; j++){
    
    }
 }


 return 0;
}