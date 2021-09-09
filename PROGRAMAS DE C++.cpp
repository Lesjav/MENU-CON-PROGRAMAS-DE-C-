#include <stdio.h>
#include <string.h>
#include <conio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <math.h>

int op, menu, a = 0, b = 0, numero;			
int es_palindromo(int numero);
int cuenta_digitos(int numero);
float kilometros, millas, metros, pulgadas, libras, kilos;
	char l;
	
using namespace std;

void gotoxy(int x1, int y1){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x1;
	dwPos.Y = y1;
	SetConsoleCursorPosition(hcon, dwPos);
	}
						
int main(){
	
		do{
			system("cls");
			cout<<"\t\t PROGRAMAS EN C++"<<endl;
			cout<<"_______________________________________________________________________________________"<<endl<<endl;
	
		cout<<"1) Suma, Resta, Multipliacion y Division de dos numeros"<<endl;
		cout<<"2) Determinar si un numero es par o impar"<<endl;
		cout<<"3) Convertir de Kilometros a millas, metros a pulgadas, de libras a kilos y viceversa"<<endl;
		cout<<"4) Determinar si una palabra o un numero es palindromo"<<endl;
		cout<<"5) Conversion de numero arabigos o romanos (minimo 1000)"<<endl;
		cout<<"6) Conversion de numeros enteros a letras"<<endl;
		cout<<"7) Conversion de numeros enteros con decimal a letras"<<endl;
		cout<<"8) Una tabla de multiplicar"<<endl;
		cout<<"9) Todas las tablas de multiplicar del 1 al 10"<<endl;
		cout<<"10) Multiplicacion manual"<<endl;
		cout<<"11) Conversion de numeros decimales a binarios"<<endl;
		cout<<"12) Conversion de numeros decimales a hexadecimales"<<endl;
		cout<<"13) Figuras Geometricas"<<endl;
		cout<<"14) Mover un punto en toda la pantalla"<<endl;
		cout<<"15) Simulacion de un cajero automatico"<<endl;
		cout<<"16) Calcular la hipotenusa"<<endl;
		cout<<"17) Convertir kilogramos a unidades de medida de masa"<<endl;
		cout<<"18) Calcular la longitud en centimetros, kilometros o pulgadas"<<endl;
		cout<<"19) Obtener la potencia de un numero"<<endl;
		cout<<"20) Calcular el area de figuras geometricas"<<endl;
		cout<<"21) salir del programa"<<endl<<endl<<endl;
		cout<<"\n Seleccione una opcion: ";
		scanf("%d", &op);
		
		switch (op)
		{
			case 1:
				do{
					system("cls");
				cout<<"1. SUMA"<<endl;
				cout<<"2. RESTA"<<endl;
				cout<<"3. MULTIPLICACION"<<endl;
				cout<<"4. DIVISION"<<endl;
				cout<<"5. Regresar al menu principal"<<endl<<endl;
				cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
					//suma
					system("cls");
					cout<<"SUMA de dos valores"<<endl;
					int suma;
					cout<<"Ingrese el primer valor: "<<endl;
					cin>>a;
					cout<<"Ingrese el segundo valor: "<<endl;
					cin>>b;
					suma=a+b;
					cout<<"La suma de "<<a<<" + "<<b<<" es: "<<suma<<endl;
					system("pause");
					system("cls");	
					break;
					case 2:
					system("cls");
					int resta;
					cout<<"RESTA de dos valores"<<endl;
					cout<<"Ingrese el primer valor: "<<endl;
					cin>>a;
					cout<<"Ingrese el segundo valor: "<<endl;
					cin>>b;
					resta=a-b;
					cout<<"La resta de "<<a<<" - "<<b<<" es: "<<resta<<endl;
					system("pause");
					system("cls");
					break;
					case 3:
					//multiplicacion
					system("cls");
					int multiplicacion;
					cout<<"MULTIPLICACION de dos valores"<<endl;
					cout<<"Ingrese el primer valor: "<<endl;
					cin>>a;
					cout<<"Ingrese el segundo valor: "<<endl;
					cin>>b;
					multiplicacion=a*b;
					cout<<"La multiplicacion de "<<a<<" X "<<b<<" es: "<<multiplicacion<<endl;
					system("pause");
					system("cls");
					break;
					case 4:
					//division
					system("cls");
					int division;
					cout<<"DIVISION de dos valores"<<endl;
					cout<<"Ingrese el primer valor: "<<endl;
					cin>>a;
					cout<<"Ingrese el segundo valor: "<<endl;
					cin>>b;
					division=a/b;
					cout<<"La division de "<<a<<" / "<<b<<" es: "<<division<<endl;
					system("pause");
					system("cls");
					break;
					case 5:
					break;
				}
				}while(menu!=5);
			break;
			case 2:
				do{
					system("cls");
				cout<<"1. SABER SI UN NUMERO ES PAR O IMPAR"<<endl;
				cout<<"2. Regresar al menu principal"<<endl<<endl;
				cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						int numero;
						cout<<"Ingrese el numero: ";
						cin>>numero;
						if (numero % 2 == 0)
						cout<<numero<<" es numero par."<<endl;
						else
						cout<<numero<<" es imapar."<<endl;
						system("pause");
						break;
			}
			}while(menu!=2);
			break;
			case 3:
				do{
				system("cls");
				cout<<"1. Conversor de kilometros a Millas"<<endl;
				cout<<"2. Conversor de Millas a Kilometros"<<endl;
				cout<<"3. Conversor de metros a pulgadas"<<endl;
				cout<<"4. Conversor de pulgadas a metros"<<endl;
				cout<<"5. Conversor de libras a kilos"<<endl;
				cout<<"6. Conversor de kilos a libras"<<endl;
				cout<<"7. Regresar al menu principal"<<endl;
				cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						cout<<"Introduce la cantidad de kilometros: ";
						cin>>kilometros;
						millas=kilometros*0.621371;
						cout<<"La respuesta es: "<<millas<<" Millas "<<endl;
						system("pause");
					break;
					case 2:
						system("cls");
						cout<<"Introduce la cantidad de Millas: ";
						cin>>millas;
						kilometros=millas*1.60934;
						cout<<"La respuesta es: "<<kilometros<<" KM "<<endl;
						system("pause");
					break;
					case 3:
						system("cls");
						cout<<"Introduce la cantidad de Metros: ";
						cin>>metros;
						pulgadas=metros*39.3701;
						cout<<"La respuesta es: "<<pulgadas<<" Pulgadas "<<endl;
						system("pause");
					break;
					case 4:
						system("cls");
						cout<<"Introduce la cantidad de Pulgadas: ";
						cin>>pulgadas;
						metros=pulgadas*0.0254;
						cout<<"La respuesta es: "<<metros<<" mts "<<endl;
						system("pause");
					break;
					case 5:
						system("cls");
						cout<<"Introduce la cantidad de Libras: ";
						cin>>libras;
						kilos=libras*0.453592;
						cout<<"La respuesta es: "<<kilos<<" Kilos "<<endl;
						system("pause");
					break;
					case 6:
						system("cls");
						cout<<"Introduce la cantidad de Kilos: ";
						cin>>kilos;
						libras=kilos*2.20462;
						cout<<"La respuesta es: "<<libras<<" Libras "<<endl;
						system("pause");
					break;
					case 7:
					break;
				}
				}while(menu!=7);
			break;
			case 4:
				do{
					system("cls");
					cout<<"1. Determinar si una palabra o numero es palindromo"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						cout<<"Ingrese la palabra o numero: ";
						int I = 0;
						string palabra;
						cin>>palabra;
						int J = palabra.length() -1;
						int mitad = J / 2;
						while(palabra[I]==palabra[J]){
							if(mitad==I){
								cout<<"Es palindromo"<<endl;
								break;
							}
							J--;
							I++;
						}
						if(mitad !=I)
						cout<<"No es palindromo"<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 5:
				do{
					system("cls");
					cout<<"1. Numeros Arabigos a Romanos"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						int numero, unidades, decenas, centenas, millar;
						cout<<"Ingresa un numero: ";
						cin>>numero;
						unidades = numero%10; numero /= 10; 
						decenas = numero%10; numero /= 10;
						centenas = numero%10; numero /= 10;
						millar = numero%10; numero /= 10;
						
						switch(millar){
							case 1: cout<<"M"; break;
							case 2: cout<<"MM"; break;
							case 3: cout<<"MMM"; break;
						}
						switch(centenas){
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
						switch(decenas){
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
						switch(unidades){
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
						system("pause");	
					break;	
				}
				}while(menu!=2);
			break;
			case 6:
				do{
					system("cls");
					cout<<"1. Conversion de numeros enteros a letras"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						int x;
						cout<<"Ingrese un numero: ";
						cin>>x;
							if(x>=900){cout<<"Novecientos "; x=x-900;}
							else if(x>=800) {cout<<"Ochocientos "; x=x-800;}
							else if(x>=700) {cout<<"Setecientos "; x=x-700;}
							else if(x>=600) {cout<<"Seiscientos "; x=x-600;}
							else if(x>=500) {cout<<"Quinientos "; x=x-500;}
							else if(x>=400) {cout<<"Cuatrocientos "; x=x-400;}
							else if(x>=300) {cout<<"Trecientos "; x=x-300;}
							else if(x>=200) {cout<<"Doscientos "; x=x-200;}
							else if(x>=100) {cout<<"Ciento "; x=x-100;}
							else if(x==100) {cout<<"Cien "; x=x-100;}
								if (x>90) {cout<<"Noventa y "; x=x-90;}
									if(x==90) {cout<<"Noventa"; x=x-90;}
								if (x>80) {cout<<"Ochenta y "; x=x-80;}
									if(x==80) {cout<<"Ochenta"; x=x-80;}
								if (x>70) {cout<<"Setenta y "; x=x-70;}
									if(x==70) {cout<<"Setenta"; x=x-70;}
								if (x>60) {cout<<"Sesenta y "; x=x-60;}
									if(x==60) {cout<<"Sesenta"; x=x-60;}
								if (x>50) {cout<<"Cincuenta y "; x=x-50;}
									if(x==50) {cout<<"Cincuenta"; x=x-50;}
								if (x>40) {cout<<"Cuarenta y "; x=x-40;}
									if(x==40) {cout<<"Cuarenta"; x=x-40;}
								if (x>30) {cout<<"Treinta y "; x=x-30;}
									if(x==30) {cout<<"Treinta"; x=x-30;}
								if (x>20) {cout<<"Veinti "; x=x-20;}
									if(x==20) {cout<<"Veinte"; x=x-20;}
								if (x>=16)	{cout<<"Dieci"; x=x-10;}
							else if(x==15) {cout<<"Quince"; x=x-15;}
							else if(x==14) {cout<<"Catorce"; x=x-14;}
							else if(x==13) {cout<<"Trece"; x=x-13;}
							else if(x==12) {cout<<"Doce"; x=x-12;}
							else if(x==11) {cout<<"Once"; x=x-11;}
							else if(x==10) {cout<<"Diez"; x=x-10;}
								if(x==9) {cout<<"Nueve"; x=x-9;}
								if(x==8) {cout<<"Ocho"; x=x-8;}
								if(x==7) {cout<<"Siete"; x=x-7;}
								if(x==6) {cout<<"Seis"; x=x-6;}
							else if(x==5) {cout<<"Cinco"; x=x-5;}
							else if(x==4) {cout<<"Cuatro"; x=x-4;}
							else if(x==3) {cout<<"Tres"; x=x-3;}
							else if(x==2) {cout<<"Dos"; x=x-2;}
							else if(x==1) {cout<<"Uno"; x=x-1;}
						cout<<endl;
						cin.ignore();
						system("pause");
					break;
				}
				}while(menu!=2);	
			break;
			case 7:
				do{
					system("cls");
					cout<<"1. Conversion de numeros enteros con decimal a letras"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						cout<<"No logre hacerlo :( y espero poder hacerlo mas adelante"<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 8:
				do{
					system("cls");
					cout<<"1. Tabla de multiplicar"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						int tabla = 0, multiplicar = 0;
						cout<<"Ingrese la tabla: "<<endl;
						cin>>tabla;
						for (int i=1; i<=10; i++){
							multiplicar = tabla * i;
							cout<<tabla<<" X " <<i<<" = "<<multiplicar<<endl;
						}
						system("pause");
					break;	
				}
				}while(menu!=2);
			break;
			case 9:
				do{
					system("cls");
					cout<<"1. Tablas de multiplicar del 1 al 10"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu)
				{
					case 1:
						system("cls");
						int inicio = 0, fin = 0, multiplicar = 0;
							cout<<"Ingrese tabla inicial: ";
							cin>>inicio;
							cout<<"Ingrese tabla final: ";
							cin>>fin;
							for (int i=inicio; i<=fin; i++){
							for (int ii=1; ii<=10; ii++){
								multiplicar = i*ii;
								cout<<i<<" X "<<ii<<" = "<<multiplicar<<endl;
							}
							cout<<"____________________"<<endl;
						}
							system("pause");
					break;	
				}
				}while(menu!=2);
			break;
			case 10:
				do{
					system("cls");
					cout<<"1. Multiplicacion manual de dos cifras"<<endl;
					cout<<"2. Multiplicacion manual de tres cifras"<<endl;
					cout<<"3. Multiplicacion manual de cuatro cifras"<<endl;
					cout<<"4. Regresar al menu principal"<<endl;
					cout<<"Sellecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						int num1, num2, num3, num4, num5, unidad, decena, centena, millar, result;
						cout<<"    ";
						cin>>num1;
						cout<<"X   ";
						cin>>num2;
						cout<<"_________"<<endl;
						result = num1*num2;
						unidad = num2%10; num2 /= 10;
						decena = num2%10; num2 /= 10;
						centena = num2%10; num2 /= 10;
						millar = num2%10; num2 /= 10;
						num2 = num1*unidad;
						num3 = num1*decena;
						cout<<"    "<<num2<<endl;
						cout<<"  "<<num3<<endl;
						cout<<"+________"<<endl;
						cout<<"  "<<result<<endl;
						system("pause");
					break;
					case 2:
						system("cls");
						cout<<"    ";
						cin>>num1;
						cout<<"X    ";
						cin>>num2;
						cout<<"_________"<<endl;
						result = num1*num2;
						unidad = num2%10; num2 /= 10;
						decena = num2%10; num2 /= 10;
						centena = num2%10; num2 /= 10;
						millar = num2%10; num2 /= 10;
						num2 = num1*unidad;
						num3 = num1*decena;
						num4 = num1*centena;
						cout<<"    "<<num2<<endl;
						cout<<"   "<<num3<<endl;
						cout<<"  "<<num4<<endl;
						cout<<"+________"<<endl;
						cout<<"  "<<result<<endl;
						system("pause");
					break;
					case 3:
						system("cls");
						cout<<"     ";
						cin>>num1;
						cout<<"X    ";
						cin>>num2;
						cout<<"_________"<<endl;
						result = num1*num2;
						unidad = num2%10; num2 /= 10;
						decena = num2%10; num2 /= 10;
						centena = num2%10; num2 /= 10;
						millar = num2%10; num2 /= 10;
						num2 = num1*unidad;
						num3 = num1*decena;
						num4 = num1*centena;
						num5 = num1*millar;
						cout<<"     "<<num2<<endl;
						cout<<"    "<<num3<<endl;
						cout<<"   "<<num4<<endl;
						cout<<"  "<<num5<<endl;
						cout<<"+________"<<endl;
						cout<<"  "<<result<<endl;
						system("pause");
					break;
				}
				}while(menu!=4);	
			break;
			case 11:
				do{
					system("cls");
					cout<<"1. Convertir de numero decimal a binario"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						int z, x, n2=0;
						int binario[50];
						binario[0]=0;
						
						printf("Introduce el decimal a convertir: ");
						scanf("%lu", &numero);
						
						for (x=0; x<50; x++){
						binario[x]=numero%2;
						numero=numero/2;
						if(numero==0)
						break;
						}
						
						for (z=x; z>=0; z--){
							printf("%d", binario[z]);
						}

						getch();
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 12:
				do{
				system("cls");
				cout<<"1. Convertir de numero decimal a Hexadecimal"<<endl;
				cout<<"2. Regresar al menu principal"<<endl;
				cout<<"Selecciona una opcion: ";
			scanf("%d", &menu);
				switch(menu){
					case 1:
					system("cls");
					int digitoex[20];
				    int decimal, residuo, resultado, i = 0;
				
				    cout << "Introduce el numero decimal a convertir: " << endl;
				    cin >> decimal;
				
				    do
				    {
				        residuo = decimal % 16;
				        resultado = decimal / 16;
				        digitoex[i] = residuo;
				        decimal = resultado;
				        i++;
				    } while (resultado > 15);
				
				    digitoex[i] = resultado;
				
				    cout << "El equivalente en hexadecimal es: ";
				
				    for (int j = i; j >= 0; j--)
				    {
				        if (digitoex[j] == 10)
				        {
				            cout << "A";
				        }
				        else if (digitoex[j] == 11)
				        {
				            cout << "B";
				        }
				        else if (digitoex[j] == 12)
				        {
				            cout << "C";
				        }
				        else if (digitoex[j] == 13)
				        {
				            cout << "D";
				        }
				        else if (digitoex[j] == 14)
				        {
				            cout << "E";
				        }
				        else if (digitoex[j] == 15)
				        {
				            cout << "F";
				        }
				        else
				        {
				            cout << digitoex[j];
				        }   
				    }
				    cout << endl;
				    system("pause");
				    break;
				}
				}while(menu!=2);
			break;
			case 13:
				do{
					system("cls");
					cout<<"1. Crear figuras geometricas basicas"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						cout<<"No logre hacerlo :( y espero poder hacerlo mas adelante"<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 14:
				do{
					system("cls");
					cout<<"1. Mover un punto en toda la pantalla"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						cout<<"Para poder mover el punto preciona las teclas w, s, a, d"<<endl;
						cout<<"Para salir presiona la tecla z"<<endl;
						char opcion;
						int x=20, y=20;
						
						while(opcion!='z')
						{
							gotoxy(x,y); cout<<".";
							opcion=getch();
							switch(opcion){
								system("cls");
								case 'w': y--; break;
								case 's': y++; break;
								case 'a': x--; break;
								case 'd': x++; break;
							}
						}
					break;
				}
				}while(menu!=2);
			break;
			case 15:
				do{
					system("cls");
					cout<<"1. Simulacion de Cajero automatico"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						int saldo_inicial = 1000;
						int saldo, reintegro, opcion, agregar;
						
						cout<<"\tBienvenido a su Cajero automatico";
						cout<<"\n1. Ingreso en cuenta";
						cout<<"\n2. Reintegro";
						cout<<"\n3. Ver saldo de cuenta";
						cout<<"\n4. Salir";
						cout<<"\nEscoja una opcion: ";
						cin>>opcion;
						
						if(opcion==1){
							cout<<"\nIngrese la cantidad a depositar: ";
							cin>>agregar;
							saldo = saldo_inicial + agregar;
							cout<<"\nCantidad disponible en cuenta: "<<saldo;
						}
						else if(opcion==2){
							cout<<"\nCuanta cantidad desea retirar: ";
							cin>>reintegro;
							if(reintegro>1000){
								cout<<"\nLa cantidad digitada es mayor a 1000, digite de nuevo la cantidad a retirar"<<endl;
								cin>>reintegro;
							}
							saldo = saldo_inicial - reintegro;
							cout<<"\nCantidad disponible en cuenta: "<<saldo<<endl;
						}
						else if(opcion==3){
							cout<<"\nLa cantidad disponible en cuenta es de: "<<saldo_inicial<<endl;
						}
						else if(opcion==4){
							cout<<"Gracias por utilizar nuestro cajero autormatico"<<endl;
						}
						else{
							cout<<"Se equivoco de opcion de menu"<<endl;
						}
						cin.get();
						cout<<""<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 16:
				do{
					system("cls");
					cout<<"1. Calcular la hipotenusa"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						float c1, c2;
						double h;
						
						cout<<"Ingrese cateto 1: ";
						cin>>c1;
						cout<<"Ingrese cateto 2: ";
						cin>>c2;
						h=sqrt(c1*c1+c2*c2);
						cout<<"La hipotenusa mide: "<<h;
						getch();
						cout<<""<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
			case 17:
				do{
					system("cls");
					cout<<"1. Convertir kilogramos a unidades de medida de masa"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						int peso;
						int opcion;
						int kg, hecto, deca, gra, deci, centi, mili;
							cout<<"Ingrese los kilogramos: ";
							cin>>kg;
							cout<<"   Escoja una opcion del menu:\n";
							cout<<"************ OPCIONES ************\n";
							cout<<"*                                *\n";
							cout<<"*         1. Hectogramos         *\n";
							cout<<"*         2. Decagramos          *\n";
							cout<<"*         3. Gramos              *\n";
							cout<<"*         4. Decigramos          *\n";
							cout<<"*         5. Centigramos         *\n";
							cout<<"*         6. Miligramos          *\n";
							cout<<"*                                *\n";
							cout<<"**********************************\n\n";
							cout<<"Escriba una opcion: ";
							cin>>opcion;
						switch(opcion){
							case 1:
								hecto = 10;
								kg = kg * hecto;
								cout<<"\nLa conversion en hectogramos es: "<<kg<<endl;
								system("pause");
							break;
							case 2:
								deca = 100;
								kg = kg * deca;
								cout<<"\nLa conversion en decagramos es: "<<kg<<endl;
								system("pause");
							break;
							case 3:
								gra = 1000;
								kg = kg * gra;
								cout<<"\nLa conversion en gramos es: "<<kg<<endl;
								system("pause");
							break;
							case 4:
								deci = 10000;
								kg = kg * deci;
								cout<<"\nLa conversion en decigramos es: "<<kg<<endl;
								system("pause");
							break;
							case 5:
								centi = 100000;
								kg = kg * centi;
								cout<<"\nLa conversion en centigramos es: "<<kg<<endl;
								system("pause");
							break;
							case 6:
								mili = 1000000;
								kg = kg * mili;
								cout<<"\nLa conversion en miligramos es: "<<kg<<endl;
								system("pause");
							break;
							getch();
						}
					break;
				}
				}while(menu!=2);
			break;
			case 18:
				do{
					system("cls");
					cout<<"1. Calcular la longitud en centimetros, kilometros o pulgadas"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						double cm, pulgadas, km;
						int m;
						char unidad;
							cout<<"Ingrese la longitud: ";
							cin>>m;
							cout<<"******** UNIDADES ********\n";
							cout<<"*                        *\n";
							cout<<"*       1: cm            *\n";
							cout<<"*       2: pulgadas      *\n";
							cout<<"*       1: km            *\n";
							cout<<"*                        *\n";
							cout<<"**************************\n";
							cout<<"Escriba una unidad: ";
							cin>>unidad;
						switch(unidad){
							case '1':
								cm = m/100;
								cout<<""<<m<<" cm en metros es: "<<cm<<endl;
								system("pause");
							break;
							case '2':
								pulgadas = m/39.37;
								cout<<""<<m<<" pulgadas en metros es: "<<pulgadas<<endl;
								system("pause");
							break;
							case '3':
								km = m*1000;
								cout<<""<<m<<" km en metros es: "<<km<<endl;
								system("pause");
							break;
						}
						getch();
					break;
				}
				}while(menu!=2);
			break;
			case 19:
				do{
					system("cls");
					cout<<"1. Obtener la potencia de un numero"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						char opcion;
						int n;
						double resultado;
						do{
							cout<<"\n\n******** POTENCIAS ********";
							cout<<"  \n*                         *";
							cout<<"  \n*      1. Cuadrado        *";
							cout<<"  \n*      2. Cubo            *";
							cout<<"  \n*      3. Salir           *";
							cout<<"  \n*                         *";
							cout<<"  \n***************************";
							cout<<"  \nEscoja una opcion del menu: ";
							cin>>opcion;
							switch(opcion){
								case '1':
									system("cls");
									cout<<"Ingrese un numero: ";
									cin>>n;
									resultado=pow(n,2);
									cout<<"El numero al cuadrado es: "<<resultado<<endl;
								break;
								case '2':
									system("cls");
									cout<<"Ingrese un numero: ";
									cin>>n;
									resultado=pow(n,3);
									cout<<"El numero al cubo es: "<<resultado<<endl;
								break;
								case '3':
									system("cls");
									cout<<"Exit"<<endl;
								break;
							}
						}
						while(opcion!='3');
						getch();
					break;
				}
				}while(menu!=2);
			break;
			case 20:
				do{
					system("cls");
					cout<<"1. Calcular el area de figuras geometricas"<<endl;
					cout<<"2. Regresar al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						char opcion;
						int base, lado, altura, radio;
						double area;
						do{
							cout<<"\n\n********** AREAS **********";
							cout<<"  \n*                         *";
							cout<<"  \n*      1. Cuadrado        *";
							cout<<"  \n*      2. Rectangulo      *";
							cout<<"  \n*      3. Triangulo       *";
							cout<<"  \n*      4. Circulo         *";
							cout<<"  \n*      5. Salir           *";
							cout<<"  \n*                         *";
							cout<<"  \n***************************";
							cout<<"  \nEscoja una opcion del menu: ";
							cin>>opcion;
							switch(opcion){
								case '1':
									system("cls");
									cout<<"Ingrese lado: ";
									cin>>lado;
									area=lado*lado;
									cout<<"El area del cuadrado es: "<<area<<endl;
								break;
								case '2':
									system("cls");
									cout<<"Ingrese altura: ";
									cin>>altura;
									cout<<"Ingrese base: ";
									cin>>base;
									area=base*altura;
									cout<<"El area del rectangulo es: "<<area<<endl;
								break;
								case '3':
									system("cls");
									cout<<"Ingrese base: ";
									cin>>base;
									cout<<"Ingrese altura: ";
									cin>>altura;
									area=(base*altura)/2;
									cout<<"El area del triangulo es: "<<area<<endl;
								break;
								case '4':
									system("cls");
									cout<<"Ingrese radio: ";
									cin>>base;
									area=3.1416*pow(radio,2);
									cout<<"El area del circulo es: "<<area<<endl;
								break;
								case '5':
									cout<<"Presiona cualquier tecla para salir";
								break;
							}	
						}
						while(opcion!='5');
						getch();
					break;
				}
				}while(menu!=2);
			break;
			case 21:
				do{
					system("cls");
					cout<<"1. Desea salir del programa?"<<endl;
					cout<<"2. Volver al menu principal"<<endl;
					cout<<"Selecciona una opcion: ";
				scanf("%d", &menu);
				switch(menu){
					case 1:
						system("cls");
						cout<<"\t\t\t¡Gracias por haber usado mi programa!"<<endl;
						cout<<"\t\t\t\t Espero seguir aprendiendo "<<endl;
						system("pause");
						return 0;
					break;
					case 2:
						system("cls");
						cout<<"\t\t\t¡Gracias por continuar en el programa!"<<endl;
						system("pause");
					break;
				}
				}while(menu!=2);
			break;
		}
	}while(op!=22);
	}
