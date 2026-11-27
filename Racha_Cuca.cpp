#include <iostream>
#include <vector>

using namespace std;


int main(){
 //variavel para armazenar o tamanho do tabuleiro
 int N = 0;
 
 //solicitar ao usuario o tamanho do tabuleiro, que deve ser entre 2 e 6
 do{
   //solicitar ao usuario o tamanho do tabuleiro
    cout << "Digite o tamanho do tabuleiro (N): ";
    cin >> N;

    //verificar se o valor digitado é valido
    if(N < 2){
       cout << "Numero invalido, digite um valor entre 2 e 6." << endl;
    }
    //verificar se o valor digitado é valido
   }while(N < 2 || N > 6);
 
 //criar o tabuleiro
 vector<vector<int>> tabuleiro(N, vector<int>(N));
 //preencher o tabuleiro
 for(int i=0; i < N; i++){
    for(int j=0; j < N; j++){
      //preencher o tabuleiro com os valores de 1 a N*N-1 e o ultimo valor com 0 
      if(i==N-1 && j==N-1){
         //ultimo valor do tabuleiro é 0
        tabuleiro[i][j] = 0;
        //tabuleiro[i][j] = (i*N) + j + 1;
      }else{
         //preencher o tabuleiro com os valores de 1 a N*N-1
        tabuleiro[i][j] = (i*N) + j + 1;  
      }
    }
 }

 //imprimir o tabuleiro
 for(int i=0; i < N; i++){
    for(int j=0; j < N; j++){
      //imprimir o tabuleiro, se o valor for 0 imprimir espaço em branco
      if(tabuleiro[i][j] == 0){
         //imprimir espaço em branco
        cout<< "  ";
      }else{
         //imprimir o valor do tabuleiro
        cout<< tabuleiro[i][j] << " ";
      }
    }
    //imprimir uma linha em branco entre as linhas do tabuleiro
    cout<< "\n";
  }



 return 0;
}