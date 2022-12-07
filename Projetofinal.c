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
    int scoreNps, detrator=0.00, promoter=0.00, neutral=0.00;
    int accountantAge=0, sumAge=0, kidOne=0, youngOne=0, adultONe=0, oldOne=0, men=0, women=0;
    float npsSessionOne, percentualPromoter, percentualDetrator;
    char sex, ticket, movieOne[100];
	
	
    do 
    {
        printf("Digite o número de sessões que deseja (mínimo 2 e no máximo 2)\n");
        scanf("%d", &sessions);
    }
    
    while (sessions != 2);

            fflush(stdin);
            
            printf("Digite o nome do filme da sessao 1: ");
            fgets(movieOne, 100, stdin);

            fflush(stdin);

        do 
        {
            printf("Informe a quantidade de pessoas na sessao 1 (mínimo 10 telespectadores por sessao)\n");
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
				        switch (sex)
                        {
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

                        if (sex == 'M' || sex == 'm' && age >= 18)
                            adultMen = adultMen + 1;
                        if (sex == 'F' || sex == 'f' && age >= 18)
                            adultWomen = adultWomen + 1;

                        if (sex == 'M' || sex == 'm')
                            men = men + 1;
                        if (sex == 'F' || sex == 'f')
                            women = women + 1;                    

                                                           
                
                    fflush(stdin);
                do 
				{
					printf("\nUse --> I - Inteira, M - Meia-entrada\n\n Digite se é Inteira ou meia do telespectador %d: ", accountant);
                	scanf("%c", &ticket);
            	}
					while (ticket != 'I' && ticket != 'i' && ticket != 'M' && ticket != 'm');
					    switch (ticket)
                        {
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
                            detrator = detrator + 1;
                        else if (scoreNps >= 9)
                            promoter = promoter + 1;
                        else
                            neutral = neutral + 1;

					
                accountant++;
            }
        
            while (accountant <= peopleSessionOne);

   percentualPromoter = ((promoter+0.00)/(promoter+detrator+neutral))*100;
   percentualDetrator = ((detrator+0.00)/(promoter+detrator+neutral))*100;         
   npsSessionOne = percentualPromoter - percentualDetrator;


   printf("\nValor das Inteiras %d e Valor das Meias %d \n", ticketFull, ticketHalf); 
   	printf("\nHomens %d e Mulheres %d \n", male, female);    
   	printf("\nHomens Adultos %d e Mulheres adultas %d \n", adultMen, adultWomen);
    printf("\nPercentual promotores %.00f \n", percentualPromoter);
    printf("\nPercentual detratores %.00f \n", percentualDetrator);
    printf("\nNota NPS %.00f\n", npsSessionOne);
    printf("\nA quantidade de detratores %d, promotores %d, neutros %d e a nota de NPS foi de %.00f", detrator, promoter, neutral, npsSessionOne);
    printf("\nNome do filme: %s", movieOne);
    printf("\nTotal do sexo masculino %d\nTotal feminino %d", men, women);
    printf("\nCriancas: %d\nJovens: %d\nAdultos: %d\nIdosos: %d", kidOne, youngOne, adultONe, oldOne);
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
