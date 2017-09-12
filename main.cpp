#include <iostream>

using namespace std;

int main() {
    //перекидуєм місцями значення 2-х змінних без використання 3-ї допоміжної змінної.
    int a=5,b=7;
    cout<<"a = "<<a<<" : b = "<<b<<endl;
    a ^= b;
    b ^= a;
    a ^= b;
    cout<<"a = "<<a<<" : b = "<<b<<endl;

    system("pause");
    //cin.get();
    return 0;
}