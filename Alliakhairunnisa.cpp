#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

int main()
{
  string JmlhSalesman[10],nama[10];
  float penjualan[10],komisi[10],ttlkomisi=0.0;
  int i,jlhdata=10;
  
  cout<<"KOMISI SALESMAN PT.MURAH HATI"<<endl;
  cout<<"❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎❦︎"<<endl;
  cout<<setprecision(12);
  for(int i=0;i<jlhdata;i++) 
  {
    cout<<"Data Ke-"<<i+1<<endl;
    cout<<"===================================="<<endl;
    cout<<"Nama Salesman : ";
    cin>>nama[i];
    cout<<"Jumlah Penjualan : ";
    cin>>penjualan [i];
    (penjualan[i]<=500000);
    komisi[i]=0.10*penjualan[i];
    komisi[i]=0.10*500000+0.15*(penjualan[i]-500000);
    ttlkomisi+=komisi[i];
    cout<<"Komisi : "<<komisi[i]<<endl;
    cout<<"===================================="<<endl;
  }
  cout<<"----------------------------------------------------------------------"<<endl;
  cout<<"Total Komisi yang dibayarkan PT.MURAH HATI : "<<ttlkomisi<<endl;
  cout<<"----------------------------------------------------------------------"<<endl;
    
    return 0;

} 
