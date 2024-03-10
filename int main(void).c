int main(void)
{
	int n = 4;
	//do
	//{
	//	printf("Кол-во людей в комнате: ");
	//	n=GetInt();
	//}
	//while(n<1);
	int age[n];
	for (int i = 0; i < n; i++)
	{	
		printf("Возраст человека #%i : ", i+1);
		age[i]=GetInt();
	}
	//printf ("Время прошло...\n")
	//for (int i=0; i<n; i++)
	//{	
	//	printf("Возраст #%i человека через %i лет\n", i+1, ages[i]+1);
	//}
}	