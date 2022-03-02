#include<stdio.h>
#include<string.h>
#include<locale.h>

int main()		{
	setlocale(LC_ALL, "portuguese");
	char name[5];
	
	printf("Type your name: ");
	fgets(name, 5, stdin);
	
	// strcpn = Retorna um caractere em um string.
	nome[strcspn(nome, "\n")] = '\0';
	
	printf("The name is ", nome);
	
	for(int i=0; i<5; i++) {
		if (nome[i] != '\0') {
			printf("\n\n Understanding: Position: %d have a letter %c", i, nome[i]);
		}
		if(nome[i] == '\0')	{
			printf("\n\n Understanding: Position: %d equals 0 (ZERO).", i);
			break;
		}
	}
	return 0;
}