#include<iostream>
using namespace std;
int main()
{
  float DACB_a,DACB_b;
  cout<<"Ingrese DACB_a  : "; cin>>DACB_a;
  cout<<"Ingrese DACB_b  : "; cin>>DACB_b;
  if(DACB_a==DACB_b){
     cout<<"Son iguales"<<endl;
  }else{
     if(DACB_a<DACB_b){
       cout<<DACB_a<<" es el menor que "<<DACB_b<<"\n";
     }else{
       cout<<DACB_b<<" es el menor que "<<DACB_a<<"\n";
     }
  }

return (0);




}
