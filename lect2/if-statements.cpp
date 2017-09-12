//
// Created by Alex Orlovskyi on 12.09.17.
// Materials from Ivan Myroniv.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {

    int n1,n2,n3;
    cout<<"Input n1,n2,n3:";
    cin>>n1>>n2>>n3;
    cout<<"\nn1 = "<<n1<<" : n2 = "<<n2<<" : n3 = "<<n3<<endl;
    int p;
    if(n1>n2){
        p=n1; n1=n2; n2=p;
    }
    if(n2>n3){
        p=n2; n2=n3; n3=p;
    }
    if(n1>n2){
        p=n1; n1=n2; n2=p;
    }
    cout<<"\nn1 = "<<n1<<" : n2 = "<<n2<<" : n3 = "<<n3<<endl;


    system("pause");
    system("cls");

    int Chuslo,Ldiapazon,Pdaipazon;
    cout<<"Input Chuslo-->";
    cin>>Chuslo;
    cout<<"Input Ldiapazon,Pdaipazon-->";
    cin>>Ldiapazon>>Pdaipazon;

    if((Chuslo>=Ldiapazon) && (Chuslo<=Pdaipazon)){
        cout<<"Chuslo in Diapason!"<<endl;
    }else{
        cout<<"Chuslo not in Diapason!"<<endl<<endl;
    }

    if((Chuslo<=Ldiapazon) || (Chuslo>=Pdaipazon)){
        cout<<"Chuslo not in Diapason!"<<endl;
    }else{
        cout<<"Chuslo in Diapason!"<<endl;
    }


    //задача A, B, C - дійсні числа. Вибрати з них ті, які належать інтервалу (1, 3).
    //Дані дійсні числа A, B, C. Знайти ті з них, які не належать відрізку [0,2].
    cout<<"------------------------------------\n"<<endl;

    //Дане ціле число, що лежить у діапазоні від -999 до 999.
    //Вивести рядок - словесний опис даного числа виду "від’ємне
    //двозначне число", "нуль", "додатне однозначне число" і т.п.
    system("pause");
    system("cls");
    int k;
    cout<< "Введіть число: ";
    cin>>k;
    if(k>-999 && k<-99)
    {
        cout<< "Трьохзначне від'ємне число!" <<endl;
    }
    else if(k>-99 && k<-9)
    {
        cout<< "Від'ємне двозначне число!" <<endl;
    }
    else if(k>-9 && k<0)
    {
        cout<< "Від'ємне однозначне число число!" <<endl;
    }
    else if(k==0)
    {
        cout<< "Нуль!" <<endl;
    }
    else if(k>9 && k<9)
    {
        cout<< "Додатнє однозначне число!" <<endl;
    }
    else if(k>9 && k<99)
    {
        cout<< "Додатнє двозначне число!" <<endl;
    }
    else if(k>99 && k<999)
    {
        cout<< "Додатнє трьохзначне число!" <<endl;
    }
    else
    {
        cout<< "Число не у діапазоні!" <<endl;
    }
    cout<<"------------------------------------\n"<<endl;
    system("pause");
    system("cls");
    //cin.get();
    return 0;
}