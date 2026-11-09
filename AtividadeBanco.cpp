#include <stdio.h>

int senha = 0;


float saldoConta = 500.00;
float maiorDeposito = 0;

void setSenha(){
	int escreverSenha;
	
	printf("Escreva a uma senha de 4 digitos!\n");
	scanf("%d", &senha);
}


void deposito(){
	float valorDeposito = 0;
	printf("Escreva o valor que deseja depositar\n");
	scanf("%f", &valorDeposito);
	
	if(valorDeposito <= 0){
		printf("Valor inválido!!!");
		return;
	}

	saldoConta += valorDeposito;
	printf("Valor %0.2f depositado com sucesso!\n", valorDeposito);
	
	if(valorDeposito > maiorDeposito){
		maiorDeposito = valorDeposito;
}}

void sacar(){
	int tentativaSenha;
	float valorSaque;	
	
	printf("Digite a senha para sacar!!");
	scanf("%d", &tentativaSenha);
	
	if(tentativaSenha != senha){
		printf("Senha incorreta poxa");
		return;
	}
	
	printf("Qual o valor que você quer sacar?\n");
	scanf("%0.2f", valorSaque);
	
	if(valorSaque > saldoConta){
		printf("Você não tem todo esse dinheiro!!");
		return;
	}
	
	saldoConta -= valorSaque;
}


void saldoEestatisticas(){
	printf("SALDO: %0.2f\nMAIOR DEPOSITO JA FEITO:%0.2f\n", saldoConta, maiorDeposito);
	
}

void showMenu(){
	printf("BEM VINDO!! escolha alguma opcao ai\n1-Depositar\n2-Sacar\n3-Consultar saldo e estatisticas\n4-Sair\n");
}

int main(){
	int input;
	
	setSenha();
	while(true){
		showMenu();
		scanf("%d", &input);
		switch(input){
			case 1:
			deposito();
			break;	
			case 2:
			sacar();
			break;
			case 3:
			saldoEestatisticas();
			break;
			case 4:
			printf("Obrigado por usar nosso banco!");	
			return false;	
		}
	}
	
	return 0;
}
