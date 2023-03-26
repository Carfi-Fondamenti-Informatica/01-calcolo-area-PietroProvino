#include <iostream>
using namespace std;

int main(){
    float a, b, c;
    cout << "inserisci tre valori reali:\n";
    cin >> a >> b >> c;
    cout <<" Area triangolo=" << (a*b)/2 << "\n";
    cout <<" Area quadrato=" << a * a<< "\n";
    cout <<" Area rettangolo=" << a * b <<"\n";
    cout <<" Area trapezio=" << ((a+b)*c)/2;
    return 0;
}
