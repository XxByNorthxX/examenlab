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

22222222222222222
#include <iostream>

using namespace std;

int esPrimo(int x){
    for (int i=2; i < x; i++ )
      if ( x  % i == 0 ) return 0;

    return 1;}

int printNumber(int n){
    for(int i=1;i<n;i++)
        if (esPrimo(i)==1)
            cout<<i<<" ";

}

int main(){
    printNumber(35);


return 0;
}
3333333333333333333333333333
#include <iostream>

using namespace std;

int potencia(int x, int y){
    if(y==1)
        return x;
    else
        return x*potencia( x, y-1);


}


int main(){
    cout<<potencia(2,4);


return 0;
}

44444444444444444444444444444444
    
#include <iostream>

using namespace std;

void changeVar(int &a,int &b){
    a=a+b;
    b=a-b;
    a=a-b;

}
void inter(int a, int b){
    a^=b;
    b^=a;
    a^=b;
    cout<<a<<endl;
    cout<<b<<endl;
}

int main(){
    int a=1,b=2;
    int x=8,y=9;
    changeVar(a,b);
    
    cout<<a<<" "<<b<<endl;

    inter(x,y);






return 0;
}


