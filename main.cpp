#include <iostream>

using namespace std;
int divisor(int z){
    for(int i=1;i<z;i++)
        if(z%i==0)
            cout<<i<<endl;
}

bool perfect(int a){
    int sum=0;
    for(int i=1;i<a;i++){
        if(a%i==0)
            sum=sum+i;

    }
    if(sum==a){
        cout<<"Divisores: \n";
        divisor(a);
        return true;}

    return false;
}

void print(int x){
    for(int i=5;i<x;i++){
        if(perfect(i)){
            cout<<"Numero Perfecto: ";
            cout<<i<<endl;
        }

    }

}


int main()
{
    print(10000);
    return 0;
}


