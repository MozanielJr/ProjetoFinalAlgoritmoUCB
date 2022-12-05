#include<stdio.h>//mecanismo para entrada e saída (input e output)
#include<locale.h>//necessário para utilizar o setlocale (acentuação)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentuação na linguagem portuguesa
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatrícula: UC22103112\nCurso: Ciência da computação\n\n");
    printf("Nome: Nathalia Gonçalves Silva\nMatrícula: UC22200563\nCurso: Ciência da computação\n\n\n");

    int sessions, peopleSessionOne, peopleSessionTwo, accountant=1, age, ticket, ticketHalf;
    char sex, ingresso;
	
	ticket = 0;
	ticketHalf = 0;
	
    do 
    {
        printf("Digite o número de sessões que deseja (mínimo 2 e no máximo 2)\n");
        scanf("%d", &sessions);
    }

    while (sessions != 2);
    {
        do 
        {
            printf("Informe a quantidade de pessoas na sessao 1 (mínimo 10 telespectadores por sessao)\n");
            scanf("%d", &peopleSessionOne);
        }
        
         while (peopleSessionOne < 10);
        
            do 
            {
                do 
				{
					printf("\nUse --> M - masculino, F - Feminino.\n\nDigite o sexo do telespectador %d: ", accountant);
                	scanf("%s", &sex);
            	}
					while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f');

                do 
				{
					printf("\nDigite a idade do telespectador %d: ", accountant);
                	scanf("%d", &age);                	
				}
                	while (age < 3 || age > 100);
                	fflush(stdin);
                	do 
				{
					printf("\nUse --> I - Inteira, M - Meia-entrada\n\n Digite se é Inteira ou meia do telespectador %d: ", accountant);
                	scanf("%c", &ingresso);
            	}
					while (ingresso != 'I' && ingresso != 'i' && ingresso != 'M' && ingresso != 'm');
					switch (ingresso){
						case 'M': ticketHalf = ticketHalf + 25; break;
						case 'm': ticketHalf = ticketHalf + 25; break;
						case 'I': ticket = ticket + 50; break;
						case 'i': ticket = ticket + 50; break;
			
						
						
						
						
					}
                accountant++;
            }
        
            while (accountant <= peopleSessionOne);
   
   printf("Valor das Inteiras %d e Valor das Meias %d", ticket, ticketHalf);    
           accountant = 1;         
        printf("Informe a quantidade de pessoas na sessao 2\n");
        scanf("%d", &peopleSessionTwo);

        do 
        {
            printf("Use --> M - masculino, F - Feminino.\n\nDigite o sexo do telespectador %d: ", accountant);
            scanf("%s", &sex);
      
            printf("\nDigite a idade do telespectador %d: ", accountant);
            scanf("%d", &age);
                if ( 3 < sex < 100);
                else printf("Digite uma idade superior a 3 anos e inferior a 100 anos");
            accountant++;
        }
        while (accountant <= peopleSessionTwo);
    }   
}   
