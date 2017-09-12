//
// Created by Alex Orlovskyi on 12.09.17.
// Materials from Ivan Myroniv.
//

#include <iostream>
#include <cstdlib>
using namespace std;


int main() {
    //Міняємо кодування, щоб відобразити Українську кирилицю
    //у властивостях консолі треба вибрати шрифт Lucida console
    system("chcp 1251 > null");


    //операції порівняння та тип bool
    int x,y;
    cout<<"Input x,y:";
    cin>>x>>y;

    cout<<"\nx = "<<x<<" : y = "<<y<<endl;
    cout<<"\nx <= y :"<<(x<=y)<<endl;
    cout<<"x >= y :"<<(x>=y)<<endl;
    cout<<"x == y :"<<(x==y)<<endl;
    cout<<"x != y :"<<(x!=y)<<endl;
    cout<<"x < y  :"<<(x<y)<<endl;
    cout<<"x > y  :"<<(x>y)<<endl;

    /*//boolalpha виводить true замість 1
    //noboolalpha наоборот
    bool f = true;
    cout<<boolalpha<<f<<endl;
    cout<<noboolalpha<<f<<endl;*/

    cout.setf(ios_base::boolalpha);
    bool f1 = false, f2 = true;
    cout<<"f1 = "<<f1<<" : f2 = "<<f2<<endl;
    cout<<"!f1 = "<<!f1<<" : !f2 = "<<!f2<<endl<<endl;
    f2 = false;
    cout<<f1<<" || "<<f2<<" = "<<(f1||f2)<<endl;
    f2 = true;
    cout<<f1<<" || "<<f2<<" = "<<(f1||f2)<<endl;
    f1=true; f2 = false;
    cout<<f1<<" || "<<f2<<" = "<<(f1||f2)<<endl;
    f2 = true;
    cout<<f1<<" || "<<f2<<" = "<<(f1||f2)<<endl<<endl;

    f1 = false; f2 = false;
    cout<<f1<<" && "<<f2<<" = "<<(f1&&f2)<<endl;
    f2 = true;
    cout<<f1<<" && "<<f2<<" = "<<(f1&&f2)<<endl;
    f1=true; f2 = false;
    cout<<f1<<" && "<<f2<<" = "<<(f1&&f2)<<endl;
    f2 = true;
    cout<<f1<<" && "<<f2<<" = "<<(f1&&f2)<<endl<<endl;

    system("pause");
    //cin.get();
    return 0;
}