//
// Created by Alex Orlovskyi on 12.09.17.
// Materials from Ivan Myroniv.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    // Приклад №1
    cout<<"Введiть кiлькiсть Гривень -->";
    int Chuslo;
    cin>>Chuslo;
    cout<<"У вас "<<Chuslo;
    if((Chuslo%100)>=11&&(Chuslo%100)<=19){
        cout<<" Гривень"<<endl;
    } else
        switch(Chuslo%10){
            case 1: cout<<" Гривня"<<endl;break; // Одна гривня
            case 2:
            case 3:
            case 4: cout<<" Гривнi"<<endl;break; //Чотири гривні
            default: cout<<" Гривень"<<endl;break;
        }
    cout<<"------------------------------------\n"<<endl;

    system("pause");
    system("cls");

    // Приклад №2
    char Operation;
    int a,b;
    cout<<"Input a operation b:";
    cin>>a>>Operation>>b;

    cout<<"Result: ";
    switch(Operation){
        case '+': cout<<a+b<<endl; break;
        case '-': cout<<a-b<<endl; break;
        case '*': cout<<a*b<<endl; break;
        case '/': cout<<a/b<<endl; break;
        default: cout<<"Not an operation!"<<endl; break;
    }

    system("pause");
    //cin.get();
    return 0;
}
