#include<stdio.h>//mecanismo para entrada e sa�da (input e output)
#include<locale.h>//necess�rio para utilizar o setlocale (acentua��o)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentua��o na linguagem portuguesa
    
    printf("Nome: Jo�o Arthur Pereira Melo\nMatr�cula: UC22200743\nCurso: Ci�ncia da computa��o\n\n");
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatr�cula: UC22103112\nCurso: Ci�ncia da computa��o\n\n");
    printf("Nome: Nathalia Gon�alves Silva\nMatr�cula: UC22200563\nCurso: Ci�ncia da computa��o\n\n");
    printf("Reposit�rio GitHub https://github.com/MozanielJr/ProjetoFinalAlgoritmoUCB.git\n\n\n");

    int sessions, peopleSessionOne, peopleSessionTwo, accountant=1, accountantAge=0, age, sumAge, ticketFull, ticketHalf, male, female, kidOne=0, youngOne=0, adultONe=0, oldOne=0;
    char sex, ticket;
	
	ticketFull = 0;
	ticketHalf = 0;
	male = 0;
	female = 0;
	
    do 
    {
        printf("Digite o n�mero de sess�es que deseja (m�nimo 2 e no m�ximo 2)\n");
        scanf("%d", &sessions);
    }

    while (sessions != 2);
    {
        do 
        {
            printf("Informe a quantidade de pessoas na sessao 1 (m�nimo 10 telespectadores por sessao)\n");
            scanf("%d", &peopleSessionOne);
        }
        
         while (peopleSessionOne < 2);
        
            do 
            {
                do 
				{
					printf("\nUse --> M - masculino, F - Feminino.\n\nDigite o sexo do telespectador %d: ", accountant);
                	scanf("%s", &sex);
            	}
					while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f');
				        switch (sex){
						    case 'M': male = male + 1; break;
						    case 'm': male = male + 1; break;
						    case 'F': female = female + 1; break;
						    case 'f': female = female + 1; break;
						default: break;
}
                do 
				{
					printf("\nDigite a idade do telespectador %d: ", accountant);
                	scanf("%d", &age);                	
				}
                	while (age < 3 || age > 100);
                	
                		sumAge = sumAge + age;
                		accountantAge++;
                	    if (age >=3 && age <= 13){
                			kidOne = kidOne + 1;}
                		if (age >= 14 && age <= 17){
                			youngOne = youngOne +1;}
                		if (age >= 18 && age <= 64){
                			adultONe = adultONe + 1;}
						if (age >= 65 && age <= 100){
                			oldOne = oldOne + 1;}
                	
					fflush(stdin);
                	
					do 
					{
						printf("\nUse --> I - Inteira, M - Meia-entrada\n\n Digite se � Inteira ou meia do telespectador %d: ", accountant);
                		scanf("%c", &ticket);
            		}
						while (ticket != 'I' && ticket != 'i' && ticket != 'M' && ticket != 'm');
						
							switch (ticket){
								case 'M': ticketHalf = ticketHalf + 25; break;
								case 'm': ticketHalf = ticketHalf + 25; break;
								case 'I': ticketFull = ticketFull + 50; break;
								case 'i': ticketFull = ticketFull + 50; break;
                        	default : break;
						
						
						
						
					}
                accountant++;
            }
        
            while (accountant <= peopleSessionOne);
   
   				printf("\nValor das Inteiras: %d\nValor das Meias: %d", ticketFull, ticketHalf); 
   				printf("\nHomenes: %d\nMulheres: %d", male, female);
				printf("\nMedia de idade dos telespectadores: %d\n\n\n", (sumAge / accountantAge)); 
 
           accountant = 1;         
        printf("\n\n\nInforme a quantidade de pessoas na sessao 2\n");
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

