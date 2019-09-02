
#include <iostream>

using namespace std;

int main(void) {
    int ent[10],i=0,j=0,sum=0;
    float prom=0;
    
     cout<<"Digite 10 enteros"<<endl;
    while (i<10){
        cin>>ent[i];
        i++;   
          prom=prom+ent[j];
          sum=sum+ent[j];
         j++;
    }
     
      cout<<"La suma de los numeros es "<<sum<<endl;   
    cout<<"El promedio de los numeros es "<<prom/10<<endl;
          
    return 0;
}

