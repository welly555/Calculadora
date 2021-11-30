#include <iostream>
#include "funcoes.h"
using namespace std;


int main(){
  float n1,n2,resul;
  int con = 1,con2,x = 0;
  string oper;

  do{
    if(con == 1){
      if(x == 1){
        cout<<"Quer utilizar o resultado da operação anterior(1 - sim 0 - não)? \n";
      cin>>con2;
      }
      
      if(con2 == 1){
        n1 = resul;
        cout<<"Digite a operação matematica: \n";
        cin>>oper;
        cout<<"Digite o segundo numero: \n";
        cin>>n2;
        if(oper == "+"){
          resul = soma(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "-"){
          resul = menos(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "*"){
          resul = multiplicação(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "/"){
          resul = divisao(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }
      }else{
        cout << "Digite o primeiro numero: \n";
        cin >>n1;
        cout<<"Digite a operação matematica: \n";
        cin>>oper;
        cout<<"Digite o segundo numero: \n";
        cin>>n2;
        if(oper == "+"){
          resul = soma(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "-"){
          resul = menos(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "*"){
          resul = multiplicação(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }else if(oper == "/"){
          resul = divisao(n1,n2);
          cout<<"Resultado: "<<resul<<"\n";
        }
      }
    }
    
    cout<<"Fazer outra operação(1 - sim 0 - não)? \n";
    cin>>con;
    system("cls||clear");
    x = 1;
    
  }while(con != 0);
} 