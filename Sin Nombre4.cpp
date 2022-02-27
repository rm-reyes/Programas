#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <iomanip>
#include <cmath>
#include<stdio.h>
#include <cstdlib>
#include <windows.h>

using namespace std;

void romanos(int x);
void print(string t);
int base;
int exponente;
int resultado=0;
float altura;




int main ()

{
int Opcion, op,valor, miles,cientos,unidades,decimales,NUM, mil,cien,uni,deci;
double Valor;
int seg=0, min=0, horas=0;
    float minutos;
    float segundos;
double saldo; double retiro; double deposito; double saldot;
int izquierda=1;
int derecha=1;
int resultado;

	cout<<"**********************INGRESE NUMERO DE OPCION*************************************"<<endl;
	   							cout<<"\n";
	cout<<"1. Programa de suma, resta, multiplicacion, division" <<endl;
	cout<<"2. Programa que determina si un numero es par e impar" <<endl;
	cout<<"3. Programa de conversiones de longitud y masa " <<endl;
	cout<<"4. Programa que determina si una palabra o un numero es palindromo "<<endl;
	cout<<"5. Programa de Conversion de numeros arabigos a romanos  "<<endl;
	cout<<"6. Programa para Conversion de numeros enteros a letras  "<<endl;
	cout<<"7. Programa tabla de multiplicar del numero ingresado"<<endl;
	cout<<"8. Programa que presenta las tablas de multiplicar del 1 al 10"<<endl;
	cout<<"9. Programa para Conversion de numeros enteros a letras con decimal"<<endl;
//	cout<<"10."<<endl;
	cout<<"11. Programa para Conversion de numeros decimales a hexadecimales"<<endl;
	cout<<"12. Programa para Conversion de numeros decimales a binario"<<endl;
//	cout<<"13. Programa para crear Figuras Geometricas Basicas."<<endl;
//	cout<<"14. Programa para Mover un punto en toda la pantalla "<<endl;
//	cout<<"15. Para Simulacion de un Cajero"<<endl;
	cout<<"16. Programa que le permite calcular la hipotenusa "<<endl;
	cout<<"17. Temporizador"<<endl;
	cout<<"18. Programa para calcular descuentos en sus compras según monto"<<endl;
	cout<<"19. Programa le permite calcular potencias."<<endl;
	cout<<"20. Programa para calcular el area de un triangulo"<<endl;
	cout<<endl;
	cout<<"**** O P C I O N  *** :  "<<endl;
	
	
	
	
	
	
	
	
	cin>>Opcion;
	system("cls");
	
	
	
	if (Opcion==1) 
	
		{	 
   int num1, num2, opcion;
   float total;
 
  //ingreso de datos
  cout<<"ingrese el primer numero:  ";
  cin>>num1;
  cout<<"ingrese el segundo numero:  ";
  cin>>num2;
  
  //opciones
  
  cout<<"***desea: 1) sumar, 2) restar, 3) multiplicar, 4) dividir******\n";
  cout<<"\n";
  	cout<<"ingrese opcion:   ";
  	cin>>op;
  	
  			//suma
  	if (op == 1)
{

  	total = num1 + num2;
  	cout<<"el total es:  " <<total;
}

 			//resta
 	
 	 	if (op == 2)
{

  	total = num1 - num2;
  	cout<<"el total es:  " <<total;
}
 			//multiplicacion
 
  	if (op == 3)
{

  	total = num1 * num2;
  	cout<<"el total es:  " <<total;
}
	
				//division
	 	if (op == 4)
{

  	total = num1 / num2;
  	cout<<"el total es:  " <<total;
}
	
}


//********************************************** inicia **********************************************************************
		if (Opcion==2)
	
{int num;


cout<<"ingrese un numero: ";
cin>>num;

if (num%2==0){

	cout<<"el numero es par";
	
}

else { 
cout<< "el numero es impar";

}

}
	
//********************************************** inicia **********************************************************************

if(Opcion==3) {


double kilometro,milla,metro,pulgada,libra,kilo;
		
		
		cout<<" **************************INGRESE NUMERO DE OPCION********************************************"<<endl;
		cout<<" "<<endl;
		cout<<"1. Kilometros a millas"<<endl;
		cout<<"2. millas a Kilometros"<<endl;
		cout<<"3. Metros a pulgadas"<<endl;
		cout<<"4. Pulgadas a metros"<<endl;
		cout<<"5. Libras a Kilos "<<endl;
		cout<<"6. kilos a libras"<<endl;		
		cin>> op;
		
		system("cls");
		
			if (op==1){
			cout<<"ingrese el numero de Kilometros que desea convertir"<<endl;
			cin>>kilometro;
			
			milla= kilometro * 0.621371;
			cout<<" "<<endl;
			cout<<"El total de millas es de: "<<milla;
			}
			
			if (op==2){
			cout<<"ingrese el numero de Millas que desea convertir"<<endl;
			cin>>milla;
			
			kilometro= milla * 1.60934;
			cout<<" "<<endl;
			cout<<"El total de Kilometros es de: "<<kilometro;
			}	
			
			if (op==3){
			cout<<"ingrese el numero de Metros que desea convertir"<<endl;
			cin>>metro;
			
			pulgada= metro * 39.3701;
			cout<<" "<<endl;
			cout<<"El total de Pulgadas es de: "<<pulgada;
			}	
			
			if (op==4){
			cout<<"ingrese el numero de Pulgadas que desea convertir"<<endl;
			cin>>pulgada;
			
			metro= pulgada * 0.0254;
			cout<<" "<<endl;
			cout<<"El total de Metros es de: "<<metro;
			}	
			
			if (op==5){
			cout<<"ingrese el numero de Libras que desea convertir"<<endl;
			cin>>libra;
			
			kilo= libra * 0.453592;
			cout<<" "<<endl;
			cout<<"El total de Kilos es de: "<<kilo;
			}
			
			if (op==6){
			cout<<"ingrese el numero de Kilos que desea convertir"<<endl;
			cin>>kilo;
			
			libra= kilo * 2.20462;
			cout<<" "<<endl;
			cout<<"El total de Libras es de: "<<libra;
			}
			
		}
		
//************************************************* inicia **********************************************************************
if(Opcion==4) {

	string palabra,copia;
				int i=0;
				
				cout<<"ingrese una palabra o numero a verificar: "<<endl;
				cout<<endl;
				cin>>palabra;
				
				for (i= palabra.size() - 1; i >= 0 ; i--){
				copia += palabra[i];
				}
				
				if (palabra== copia){
					
					cout<< endl;
					cout<<"Es palindroma"<<endl;
					
				}
				else {
					cout<< endl;
					cout<<"No es palindroma"<<endl;
				}	
		
		
}
//************************************************* inicia **********************************************************************		
		if (Opcion==5){
		int numero,unidades,decenas,centenas,millares;
		
		cout<<"Ingrese un numero"<<endl; 
		cin>> numero; 
		cout<<"--------------"<<endl;
		cout<<"Numeros romanos \n "<<endl;
		
		unidades=numero%10; numero=numero/10;
		decenas=numero%10; numero=numero/10;
		centenas=numero%10; numero=numero/10;
		millares=numero%10; numero=numero/10;
		
		switch (millares){
			case 1: cout<<"M"; break;
			case 2: cout<<"MM"; break;
			case 3: cout<<"MMM"; break;
		}
		
		switch (centenas){
			case 1: cout<<"C"; break;
			case 2: cout<<"CC"; break;
			case 3: cout<<"CCC"; break;
			case 4: cout<<"CD"; break;
			case 5: cout<<"D"; break;
			case 6: cout<<"DC"; break;
			case 7: cout<<"DCC"; break;
			case 8: cout<<"DCCC"; break;
			case 9: cout<<"CM"; break;
		}
		
		switch (decenas){
			case 1: cout<<"X"; break;
			case 2: cout<<"XX"; break;
			case 3: cout<<"XXX"; break;
			case 4: cout<<"XL"; break;
			case 5: cout<<"L"; break;
			case 6: cout<<"LX"; break;
			case 7: cout<<"LXX"; break;
			case 8: cout<<"LXXX"; break;
			case 9: cout<<"XC"; break;
		}
		
		switch (unidades){
			case 1: cout<<"I"; break;
			case 2: cout<<"II"; break;
			case 3: cout<<"III"; break;
			case 4: cout<<"IV"; break;
			case 5: cout<<"V"; break;
			case 6: cout<<"VI"; break;
			case 7: cout<<"VII"; break;
			case 8: cout<<"VIII"; break;
			case 9: cout<<"IX"; break;
		}
	}
				
//****************************************************** inicia ****************************************************************	

if (Opcion==6){
	
	 char numeros[100][20] = 
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char centenas[10][20] = 
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Introduzca numero a transcribir: ";
 std::cin >> valor;

 miles = ((int)valor)/1000;
 cientos = (((int)valor)%1000)/100;
 unidades = ((int)valor)%100;


 if (miles)
  std::cout << numeros[miles] << " mil ";
 
 if (cientos)
  std::cout << centenas[cientos] << " ";
 
 if (unidades) 
  std::cout << numeros[unidades];
 
 
 std::cout << std::endl;


 system("pause");


}


//****************************************************** inicia ****************************************************************

	if (Opcion==7){
		
	
	int numero;
	do{
		cout<<"INGRESE UN NUMERO: ";
		cin>>numero;
		
	}while((numero<1) || (numero>10));
	
	for(int i=1; i<=10; i++){
		cout<<numero<<" * "<<i<<" = "<<numero * i<<endl;
	}

}

//******************************************* inicia *************************************************************************************

	if(Opcion==8){
		
			 
		
		
		while (izquierda <=10){
			resultado = izquierda * derecha;
		    cout<< izquierda << "x"<<derecha<< "="<< resultado<< endl;
		derecha++;
	
		if (derecha==11){		
	
		derecha=1;
		izquierda++;
		
		cout<<endl;
		
	}
		
	}
		
}
		
//******************************************* inicia *************************************************************************************	
	if(Opcion==9){
		
		 double Valor;
 int mil,cien,uni,deci;

 char NUM[100][20] = 
 {
  {""},{"un"},{"dos"},{"tres"},{"cuatro"},{"cinco"},{"seis"},{"siete"},{"ocho"},{"nueve"},
  {"diez"},{"once"},{"doce"},{"trece"},{"catorce"},{"quince"},{"dieciseis"},{"dieceisiete"},{"dieciocho"},{"diecinueve"},
  {"veinte"},{"veintun"},{"veintidos"},{"veintitres"},{"veinticuatro"},{"veinticinco"},{"veintiseis"},{"veintisiete"},{"veintiocho"},{"veintinueve"},
  {"treinta"},{"treinta y uno"},{"treinta y dos"},{"treinta y tres"},{"treinta y cuatro"},{"treinta y cinco"},{"treinta y seis"},{"treinta y siete"},{"treinta y ocho"},{"treinta y nueve"},
  {"cuarenta"},{"cuarenta y uno"},{"cuarenta y dos"},{"cuarenta y tres"},{"cuarenta y cuatro"},{"cuarenta y cinco"},{"cuarenta y seis"},{"cuarenta y siete"},{"cuarenta y ocho"},{"cuarenta y nueve"},
  {"cincuenta"},{"cincuenta y uno"},{"cincuenta y dos"},{"cincuenta y tres"},{"cincuenta y cuatro"},{"cincuenta y cinco"},{"cincuenta y seis"},{"cincuenta y siete"},{"cincuenta y ocho"},{"cincuenta y nueve"},
  {"sesenta"},{"sesenta y uno"},{"sesenta y dos"},{"sesenta y tres"},{"sesenta y cuatro"},{"sesenta y cinco"},{"sesenta y seis"},{"sesenta y siete"},{"sesenta y ocho"},{"sesenta y nueve"},
  {"setenta"},{"setenta y uno"},{"setenta y dos"},{"setenta y tres"},{"setenta y cuatro"},{"setenta y cinco"},{"setenta y seis"},{"setenta y siete"},{"setenta y ocho"},{"setenta y nueve"},
  {"ochenta"},{"ochenta y uno"},{"ochenta y dos"},{"ochenta y tres"},{"ochenta y cuatro"},{"ochenta y cinco"},{"ochenta y seis"},{"ochenta y siete"},{"ochenta y ocho"},{"ochenta y nueve"},
  {"noventa"},{"noventa y uno"},{"noventa y dos"},{"noventa y tres"},{"noventa y cuatro"},{"noventa y cinco"},{"noventa y seis"},{"noventa y siete"},{"noventa y ocho"},{"noventa y nueve"},
 };

 char cent[10][20] = 
 {
  {""},{"ciento"},{"doscientos"},{"trescientos"},{"cuatrocientos"},{"quinientos"},{"seiscientos"},{"sietecientos"},{"ochocientos"},{"novecientos"},
 };
 
 std::cout << "Introduzca numero a transcribir: ";
 std::cin >> Valor;

 mil = ((int)Valor)/1000;
 cien = (((int)Valor)%1000)/100;
 uni = ((int)Valor)%100;
  deci = ((int) (Valor*100.0))%100 ;
 

 if (mil)
  std::cout << NUM[mil] << " mil ";
 
 if (cien)
  std::cout << cent[cien] << " ";
 
 if (uni) 
  std::cout << NUM[uni];
 
if (deci)
 {
  if(mil || cien || uni)
  {
   std::cout << " con ";
  }
 
  std::cout << NUM[deci] << " centimos.";
 }

 std::cout << std::endl;


 system("pause");
	}
	//******************************************* inicia *************************************************************************************	
	
	

if (Opcion==11){
	
	

	int mynum;
	cout << "\n    Ingrese numero que desea convertir: ";
	cin >> mynum;
	cout.unsetf(ios::dec);
	cout.setf(ios::hex | ios::showbase);
	cout << "\n    En hexadecimal: " << mynum;
	cout.unsetf(ios::hex);
	
	cout << "\n\n";
	system("pause");

}
	

	//******************************************* inicia *************************************************************************************	
	
	
	
	if (Opcion==12) {
	
    int numero, exp, digito;
    double binario;
   cout << "Introduce numero: ";
   cin >> numero;
   exp=0;
   binario=0;
   while(numero/2!=0)
   {
           digito = numero % 2;
           binario = binario + digito * pow(10.0,exp);
           exp++;
           numero=numero/2;
   }
   binario = binario + numero * pow(10.0,exp);
   cout << fixed << setprecision(0);
   cout << "binario: " << binario << endl;
    system("pause");
}



	
//******************************************* inicia *************************************************************************************
	if (Opcion==16){

 

 
{
  float c1,c2,hipo=0;
 
  cout << "Digite cateto 1: ";
  cin >> c1;
  cout << "Digite cateto 2: ";
  cin >> c2;
 
  hipo = sqrt(pow(c1,2)+pow(c2,2));
 
  cout << "La hipotenusa es " << hipo << endl;
 

	}
	
}


//******************************************* inicia *************************************************************************************

if (Opcion==17){

	int h,m,s;
for(h=0; h<12; h++){
	for(m =0; m<60; m++){
		for(s=0; s<60; s++){
			cout <<"\t\t\t\t" <<h << ":" << m << ":" << s << endl;
			Sleep(1000); 
			system("cls");
		}
	}
}
 
 
 
	system("pause");
	return 0;
}


//******************************************* inicia *************************************************************************************
if (Opcion==18){

float compra, descuento;

   printf("ingrese Monto de la compra: \n ");
   scanf("%f",&compra);

                  //NO HAY DESCUENTO

   if (compra <=499){
      printf("\n NO HAY DESCUENTO");
      descuento=0;
   }


                  //10% DE DESCUENTO

 
if (compra >= 500 && compra < 1000){
      descuento= compra * 10;
       printf("\n 10 PORCIENTO DE DESCUENTO");
   }


                //20% DE DESCUENTO
  if (compra >= 1001 && compra <1999){
      printf("\n 20 PORCIENTO DE DESCUENTO");
   }

                //30% DE DESCUENTO
   if (compra >2000){
      printf("\n 30 PORCIENTO DE DESCUENTO");
   }



}

//******************************************* inicia *************************************************************************************

if(Opcion==19){


 cout << "Este programa le permite calcular potencias." << endl;

    cout << "Ingrese la base ";

    cin >> base;

    cout << "Ingrese el exponente ";

    cin >> exponente;

int x=1;

while (x<exponente){

if (resultado<base){

resultado=base*base;

}

else{

resultado=resultado*base;

}

x++;

}

cout << "El resultado es: " << resultado << endl;



system("pause");


}

//******************************************* inicia *************************************************************************************
if (Opcion==20){
	
	cout << "Ingrese la base del triangulo: ";

cin >> base;

cout << "Ingrese la altura del triangulo: ";

cin >> altura;

resultado=(base*altura)/2; 

cout << "El area de su triangulo es: " << resultado << endl;



cin.ignore();

cin.get();

}


	return 0;


}

