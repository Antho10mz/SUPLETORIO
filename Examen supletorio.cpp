#include <iostream>
using namespace std;
int main(){
 string	articulos[10];
 float precios[10],suma,iva,des,total;
	for(int x=0;x<10;x++){
		cout<<"Ingrese el articulo numero "<<x+1<<endl;
		cin>>articulos[x];
		
		cout<<"Ingrese el precios "<<x+1<<endl;
		cin>>precios[x];
		suma +=precios[x];
		iva=suma*0.12;
		des=suma*0.10;
		total=(suma+iva)-des;
	}
	system("cls");
	cout<<"FACTURA DE ANTHONY MARTINEZ"<<endl;
	cout<<"SUPERMECADO AKI"<<endl;
	cout<<"CLIENTE: ANTHONY MARTINEZ ZAMBRANO"<<endl;
	cout<<"NUMERO DE CEDULA: 0850024936"<<endl;
	cout<<"TELEFONO: 0989882635"<<endl;
	cout<<"ESMERALDAS/ECUADOR"<<endl;
	for(int x=0;x<10;x++){
		cout<<x+1<<"."<<articulos[x]<<"          "<<"\t\t\t\t"<<precios[x]<<endl;
	}
	cout<<"SUBTOTAL $"<<suma<<endl;
	cout<<"IVA 12% $"<<iva<<endl;
	cout<<"DESCUENTO 10% $"<<des<<endl;
	cout<<"TOTAL A PAGAR $"<<total;
	

}
