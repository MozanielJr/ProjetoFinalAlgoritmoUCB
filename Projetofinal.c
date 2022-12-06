#include<stdio.h>//mecanismo para entrada e saída (input e output)
#include<locale.h>//necessário para utilizar o setlocale (acentuação)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentuação na linguagem portuguesa
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatrícula: UC22103112\nCurso: Ciência da computação\n\n");
    printf("Nome: Nathalia Gonçalves Silva\nMatrícula: UC22200563\nCurso: Ciência da computação\n\n\n");
    printf("Repositório GitHub https://github.com/MozanielJr/ProjetoFinalAlgoritmoUCB.git\n\n\n");

    int sessions, peopleSessionOne, peopleSessionTwo, accountant=1, age, ticketFull=0, ticketHalf=0, male=0, female=0, adultMen=0, adultWomen=0;
    int scoreNps, detrator=0, promoter=0, neutral=0;
    float npsSessionOne, percentualPromoter, percentualDetrator;
    char sex, ticket;
	
	
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
        
         while (peopleSessionOne < 3);
        
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
                	
                    if (sex == 'M' || sex == 'm' && age >= 18)
                            adultMen = adultMen + 1;
                    else if (sex == 'F' || sex == 'f' && age >= 18)
                            adultWomen = adultWomen + 1;                   

                                                           
                
                    fflush(stdin);
                	do 
				{
					printf("\nUse --> I - Inteira, M - Meia-entrada\n\n Digite se é Inteira ou meia do telespectador %d: ", accountant);
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
                do 
				{
					printf("\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?: ", accountant);
                	scanf("%d", &scoreNps);
            	}
					while (scoreNps < 0 || scoreNps > 10);
					if (scoreNps <= 6)
                        detrator = detrator + 1.00;
                        else if (scoreNps >= 9)
                        promoter = promoter + 1.00;
                        else
                        neutral = neutral + 1.00;

					
                accountant++;
            }
        
            while (accountant <= peopleSessionOne);

   percentualPromoter = (promoter)/(promoter+detrator+neutral);
   percentualDetrator = detrator/(promoter+detrator+neutral);         
   npsSessionOne = percentualPromoter - percentualDetrator;


   printf("Valor das Inteiras %d e Valor das Meias %d \n", ticketFull, ticketHalf); 
   	printf("Homens %d e Mulheres %d \n", male, female);    
   	printf("Homens Adultos %d e Mulheres adultas %d \n", adultMen, adultWomen);
    printf("Percentual promotores %f \n", percentualPromoter);
    printf("Percentual detratores %f \n", percentualDetrator);
    printf("Nota NPS %f\n", npsSessionOne);
    printf("A quantidade de detratores %d, promotores %d, neutros %d e a nota de NPS foi de %f", detrator, promoter, neutral, npsSessionOne);
    
 /*
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
     */   
    }   
}   
