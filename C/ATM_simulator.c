#include<stdio.h>

float saldo=10000;
float consultar(float saldo);
float retirar(float saldo);
float depositar(float saldo);
void salir(); //exit()

int main()
{
	int n=0;
	do
	{
		printf("=================================================== \n");
		printf("Welcome to FHI Finance Hugo Institution \n");
		printf("Select an option: \n");

		printf("1.- Check out funds \n");
		printf("2.- Withdrawals \n");
		printf("3.- Deposit to account \n");
		printf("4.- Exit \n");

		printf("Write your option (1-4): ");
		scanf("%d",&n);
		printf("\n");

		if(n==1)
		{
		//	check(funds);
			saldo = consultar(saldo);
		}
		if(n==2)
		{
		//	withdraw(funds);
			saldo = retirar(saldo);
		}
		if(n==3)
		{
		//  deposit(funds);
			saldo = depositar(saldo);
		}
		if(n==4)
		{
		//  exit();	
			salir();
		}
		if(n>4 && n<1)
		{
			printf("There's no such option, try again \n");
		}
	}
	while(n!=4);

	return 0;
}

float consultar(float saldo) // check(float funds)
{
	printf("You have %f dollars",saldo); //saldo = funds

	printf("\n");

	return saldo; //funds
}

float retirar(float saldo) // withdraw(float funds)
{
	float retiro=0.0; //withdraw_0

	printf("How much do you want to withdraw?: ");
	scanf("%f",&retiro); //withdraw_0

	printf("\n");

	saldo = saldo - retiro; //funds = funds - withdraw_0

	printf("You have withdrawn %f dollars and you have %f dollars now \n",retiro,saldo); // withdraw_0, funds

	printf("\n");

	return saldo; //funds
}

float depositar(float saldo) //deposit(float funds)
{
	float deposito=0.0; //deposit_0

	printf("How much do you want to deposit?: ");
	scanf("%f",&deposito); //deposit

	printf("\n");

	saldo = saldo + deposito; //funds = funds + deposit

	printf("You have deposited %f dollars and you have %f dollars now \n",deposito,saldo); //deposit, funds

	printf("\n");

	return saldo; //funds
}

void salir()
{
	printf("=================================================== \n");
	printf("Thank you, come back soon :D\n");
	printf("=================================================== \n");

	return;
}




					

