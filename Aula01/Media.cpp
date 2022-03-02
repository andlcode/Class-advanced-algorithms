#include<iostream>
#include<locale.h>
#include<iomanip>
#include<conio.h>
#include<windows.h>

using namespace std;

float fmedia(float nota1,  float nota2)	{
	float media=0;
	media = (nota1+nota2)/2;
	return media;
}

float pmedia(){
	float nota1=0, nota2=0, media=0;
	cout << "\n Digite a nota 1 do aluno: ";
	cin >> nota1;
	cout << "\n Digite a nota 2 do aluno: ";
	cin >> nota2;
	media = (nota1+nota2)/2;
	cout  << "\n\n A media do aluno foi: " << fixed << setprecision(1) << media;
}

int main()	{
	INICIO: system("CLS");
	setlocale(LC_ALL,"portuguese");
	float nota1 = 0, nota2 =0;
	int opcao = 0;
	char esc;
	cout << "\n Escolha uma das opções abaixo:";
	cout << "\n =================================";
	cout << "\n Exibir media por Function - Digite 1";
	cout << "\n Exibir media por Procedure - Digite 2";
	NOV: cout << "\n Opção: ";
	cin.clear();
	fflush(stdin);
	cin >> opcao;
	
	switch(opcao)	{
		case 1:
			cout << "\n *** Pela FUNÇÃO ***\n";
			cout << "\n Digite a nota 1 do aluno: ";
			cin >> nota1;
			cout << "\n Digite a nota 2 do aluno: ";
			cin >> nota2;
			cout << "\n\n A média do aluno foi " << fixed << setprecision(1) 
				<< fmedia(nota1, nota2);
			break;
		case 2:
			cout << "\n *** Por PROCEDIMENTO ***\n";
			pmedia();
			break;
		case 3: 
			cout << "\n (Opção INVÁLIDA !!!) \n";
			Sleep(1000);
			goto NOV;
	}
	
	PERG:;
	
	cout << "\n\n Quer continuar ? (Para SIM digite S, para NÃO digite N): ";
	cin >> esc;
	if(esc =='S' || esc == 's')	{
		goto INICIO;
	}
	if(esc=='N' || esc=='n')	{
		goto FIM;
	}
	if(esc!='S' || esc!='s' ||esc!='N' ||esc!='n')	{
		goto PERG;
	}
	FIM:
			cout << "\n\n";
			cout << "\e[?25l"; //esconde o cursor
			// cout << "\e[?25l";  //se quiser ativar o cursor
			for(int i=0; i<100; i++)	{
				cout << "\r";
				Sleep(500);
				cout << "\r 						*** FIM DO PROGRAMA ***";
				Sleep(500);
			}
	getch();
	return 0;	
	}
