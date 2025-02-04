#include <iostream>
using namespace std;

int main();
int encontrarMax(int x, int y);

main(){
    int n1,n2;

    cout<<"Ingrese 2 numeros: ";
    cin>>n1>>n2;

    cout<<"El mayor de los dos numeros es: "<<encontrarMax(n1,n2)<<endl;

    return 0;

}

int encontrarMax(int x, int y)
{

    int numMax;

    if (x>y){
        numMax = x;

    } else if (x<y){
        numMax = y;
    }
    return numMax;
}
