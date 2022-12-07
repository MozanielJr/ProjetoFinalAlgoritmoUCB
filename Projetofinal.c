#include<stdio.h>//mecanismo para entrada e saída (input e output)
#include<locale.h>//necessário para utilizar o setlocale (acentuação)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentuação na linguagem portuguesa
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatrícula: UC22103112\nCurso: Ciência da computação\n\n");
    printf("Nome: Nathalia Gonçalves Silva\nMatrícula: UC22200563\nCurso: Ciência da computação\n\n\n");
<<<<<<< HEAD
    printf("Repositório GitHub https://github.com/MozanielJr/ProjetoFinalAlgoritmoUCB.git\n\n\n");
=======
>>>>>>> 1a79c32881d6739908b15efb9cec9ac5b21ca804

    int sessions, peopleSessionOne, accountant=1, age, ticketFull=0, ticketHalf=0, male=0, female=0, adultMen=0, adultWomen=0;
    int scoreNps, detrator=0.00, promoter=0.00, neutral=0.00;
    int accountantAge=0, sumAge=0, kidOne=0, youngOne=0, adultONe=0, oldOne=0, men=0, women=0;
    float npsSessionOne, percentualPromoter, percentualDetrator;
    char sex, ticket, movieOne[100];

    int peopleSessionTwo, accountantTwo=1, accountantAgeTwo=0, maleTwo=0, femaleTwo=0, ageTwo=0, sumAgeTwo=0;
	int kidTwo=0, youngTwo=0, adultTwo=0, oldTwo=0, adultMenTwo=0, adultWomenTwo=0, menTwo=0, womenTwo=0, ticketHalfTwo=0, ticketFullTwo=0;
	int  scoreNpsTwo=0, detratorTwo=0, promoterTwo=0, neutralTwo=0;
    float  npsSessionTwo, percentualPromoterTwo, percentualDetratorTwo;
	char  sexTwo, ticketTwo, movieTwo[100]; 
	
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


                  
        printf("Informe a quantidade de pessoas na sessao 2\n");
        scanf("%d", &peopleSessionTwo);

            fflush(stdin);
            
            printf("Digite o nome do filme da sessao 2: ");
            fgets(movieTwo, 100, stdin);

            fflush(stdin);

        do 
        {
            printf("Informe a quantidade de pessoas na sessao 2 (mínimo 10 telespectadores por sessao)\n");
            scanf("%d", &peopleSessionTwo);
        }
        
         while (peopleSessionTwo < 2);
        
            do 
            {
                do 
				{
					printf("\nUse --> M - masculino, F - Feminino.\n\nDigite o sexo do telespectador %d: ", accountantTwo);
                	scanf("%s", &sexTwo);
            	}
					while (sexTwo != 'M' && sexTwo != 'm' && sexTwo != 'F' && sexTwo != 'f');
				        switch (sexTwo)
                        {
						    case 'M': maleTwo = maleTwo + 1; break;
						    case 'm': maleTwo = maleTwo + 1; break;
						    case 'F': femaleTwo = femaleTwo + 1; break;
						    case 'f': femaleTwo = femaleTwo + 1; break;
						default: break;
                        }
                do 
				{
					printf("\nDigite a idade do telespectador %d: ", accountantTwo);
                	scanf("%d", &ageTwo);                	
				}
                	while (ageTwo < 3 || ageTwo > 100);

                	    sumAgeTwo = sumAgeTwo + ageTwo;
                		accountantAgeTwo++;

                	    if (ageTwo >=3 && ageTwo <= 13){
                			kidTwo = kidTwo + 1;}
                		if (ageTwo >= 14 && ageTwo <= 17){
                			youngTwo = youngTwo +1;}
                		if (ageTwo >= 18 && ageTwo <= 64){
                			adultTwo = adultTwo + 1;}
						if (ageTwo >= 65 && ageTwo <= 100){
                			oldTwo = oldTwo + 1;}

                        if (sexTwo == 'M' || sexTwo == 'm' && ageTwo >= 18)
                            adultMenTwo = adultMenTwo + 1;
                        if (sexTwo == 'F' || sexTwo == 'f' && ageTwo >= 18)
                            adultWomenTwo = adultWomenTwo + 1;

                        if (sexTwo == 'M' || sexTwo == 'm')
                            menTwo = menTwo + 1;
                        if (sexTwo == 'F' || sexTwo == 'f')
                            womenTwo = womenTwo + 1;                    

                                                           
                
                    fflush(stdin);
                do 
				{
					printf("\nUse --> I - Inteira, M - Meia-entrada\n\n Digite se é Inteira ou meia do telespectador %d: ", accountantTwo);
                	scanf("%c", &ticketTwo);
            	}
					while (ticketTwo != 'I' && ticketTwo != 'i' && ticketTwo != 'M' && ticketTwo != 'm');
					    switch (ticketTwo)
                        {
						    case 'M': ticketHalfTwo = ticketHalfTwo + 25; break;
						    case 'm': ticketHalfTwo = ticketHalfTwo + 25; break;
						    case 'I': ticketFullTwo = ticketFullTwo + 50; break;
						    case 'i': ticketFullTwo = ticketFullTwo + 50; break;
                            default : break;
                        }
						
											
                do 
				{
					printf("\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?: ", accountantTwo);
                	scanf("%d", &scoreNpsTwo);
            	}
					while (scoreNpsTwo < 0 || scoreNpsTwo > 10);

					    if (scoreNpsTwo <= 6)
                            detratorTwo = detratorTwo + 1;
                        else if (scoreNpsTwo >= 9)
                            promoterTwo = promoterTwo + 1;
                        else
                            neutralTwo = neutralTwo + 1;

					
                accountantTwo++;
            }
        
            while (accountantTwo <= peopleSessionTwo);

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
                printf("A media de idade dos telespectadores que assistiram o filme 1 e de: %.00d", (sumAge / accountantAge));


                percentualPromoter = ((promoter+0.00)/(promoter+detrator+neutral))*100;
                percentualDetrator = ((detrator+0.00)/(promoter+detrator+neutral))*100;         
                npsSessionOne = percentualPromoter - percentualDetrator;

                printf("\nValor das Inteiras %d e Valor das Meias %d \n", ticketFullTwo, ticketHalfTwo); 
                printf("\nHomens %d e Mulheres %d \n", maleTwo, femaleTwo);    
                printf("\nHomens Adultos %d e Mulheres adultas %d \n", adultMenTwo, adultWomenTwo);
                printf("\nPercentual promotores %.00f \n", percentualPromoterTwo);
                printf("\nPercentual detratores %.00f \n", percentualDetratorTwo);
                printf("\nNota NPS %.00f\n", npsSessionTwo);
                printf("\nA quantidade de detratores %d, promotores %d, neutros %d e a nota de NPS foi de %.00f", detratorTwo, promoterTwo, neutralTwo, npsSessionTwo);
                printf("\nNome do filme: %s", movieOne);
                printf("\nTotal do sexo masculino %d\nTotal feminino %d", menTwo, womenTwo);
                printf("\nCriancas: %d\nJovens: %d\nAdultos: %d\nIdosos: %d", kidTwo, youngTwo, adultTwo, oldTwo);
                printf("A media de idade dos telespectadores que assistiram o filme 2 e de: %.00d", (sumAgeTwo / accountantAgeTwo));
                

                percentualPromoterTwo = ((promoterTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;
                percentualDetratorTwo = ((detratorTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;         
                npsSessionTwo = percentualPromoterTwo - percentualDetratorTwo;
}   




