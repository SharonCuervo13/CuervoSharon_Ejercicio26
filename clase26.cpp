#include<iostream>

using namespace std;
void relleno(int n,float **l);

void imprime(int n,float **l);

int main(){
	cout<<"Escriba un numero"<<endl;

    int n=0;
	cin>>n;
	if(n>=0){
        
        float **l = new float *[n];  //Creo la lista para numeros positivos
        
        for (int i=0; i < n; ++i)
		{
            l[i] = new float[n+2];
        }
	}
	else{
		cout<<"El numero es negativo"<<endl;
	}
	

    if(n==0){ //Cuando el numero es 0 el factorial es 1
		int fact=1;
	}
    else{
        for (int i = 1; i <= n; i++){  //Factorial
            int fact = fact*i;
        }
    }
	
return 0;

}


