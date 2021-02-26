#include <iostream>
#include <fstream>
using namespace std;
int main() {
 int n;
 int TI,TP;
 float TOT,Precio,Cargo,TOTS;
 ofstream archivo;
 archivo.open("Hamburguesas.txt",ios::app);
cout<<"Escoga el tipo de hambuerguesa:\n1.Sencilla\n2.Doble\n3.Triple\n";
cin>>TI;
cout<<"Introduzca la cantidad de hamburguesas:\n";
cin>>n;
cout<<"Eliga el tipo de pago:\n1.Tarjeta\n2.efectivo:\n";
cin>>TP;
if (TI==1)
Precio=1.50;
else if (TI==2) Precio=2.5;
else Precio=3.25;
TOTS=Precio*n;
if (TP==1) Cargo=TOTS*0.05;
else Cargo=0;
TOT=TOTS+Cargo;
cout<<"El costo por la hamburguesa es:\n"<<Precio;
cout<<"\nEl total sin cargo:\n"<<TOTS;
cout<<"\nEl cargo es:\n"<<Cargo;
cout<<"\nEl total a pagar es:\n"<<TOT;
archivo<<"El costo por la hamburguesa es:\n"<<Precio;
archivo<<"\nEl total sin cargo:\n"<<TOTS;
archivo<<"\nEl cargo es:\n"<<Cargo;
archivo<<"\nEl total a pagar es:\n"<<TOT;
return 0;
}