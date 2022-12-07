#include<stdio.h>//mecanismo para entrada e saída (input e output)
#include<locale.h>//necessário para utilizar o setlocale (acentuação)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentuação na linguagem portuguesa
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatrícula: UC22103112\nCurso: Ciência da computação\n\n");
    printf("Nome: Nathalia Gonçalves Silva\nMatrícula: UC22200563\nCurso: Ciência da computação\n\n\n");
    printf("Repositório GitHub https://github.com/MozanielJr/ProjetoFinalAlgoritmoUCB.git\n\n\n");

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
	

	printf("##############################################################\n");
	printf("################## C              B  #########################\n");
	printf("##################   I          S    #########################\n");
	printf("##################     N      B      #########################\n");
	printf("##################       E           #########################\n");
	printf("##############################################################\n");
	
	printf("\nOlá! Estamos querendo tornar a sua experiência cada vez melhor! \n");
    printf("\nE pensando nisso, queremos fazer uma breve pesquisa.\n");
    printf("\n <<< Aperte ENTER e vamos lá! >>>");
	getch();
	system("cls");


    do 
    {
printf("Informe o número de sessões que participarão da pesquisa(mínimo 2 e máximo 2):");
scanf("%d", &sessions);
    }
    
    while (sessions != 2);

            fflush(stdin);
            
            printf("\n\nQual o nome do filme assistido na sessão 1: ");
            fgets(movieOne, 100, stdin);

            fflush(stdin);

        do 
        {
            printf("\n\nQuantas pessoas assistiram ao filme na sessão 1 (mínimo 10 telespectadores):");
            scanf("%d", &peopleSessionOne);
        }
        
         while (peopleSessionOne < 10);
        
            do 
            {
                do 
				{
					printf("\n\n Qual o sexo do telespectador %d? \nUse --> M - Masculino, F - Feminino:", accountant);
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
					printf("\n\nQual a idade do telespectador %d ?: ", accountant);
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
					printf("\n\nQual o tipo de ingresso do telespectador %d? \nUse --> I - Inteira, M - Meia-entrada:", accountant);
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
					printf("\n\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?:", accountant);
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


system("cls");


printf("#####################################\n");
printf("####Relatório da Primeira Sessão:####\n");
printf("#####################################\n");

printf("\nFilme apresentado: %s ", movieOne);

printf("\n\nPessoas do sexo feminino que assistiram ao filme: %d", women);
printf("\nPessoas do sexo masculino que assistiram ao filme: %d", men);

printf("\n\nClassificação dos telespectadores por idade:\n");

printf("\nIdade                  -     Classificação     -       Quantidade");
printf("\nDe 03 a 13 anos        -     Crianças          -       %d", kidOne);
printf("\nDe 14 a 17 anos        -     Adolescentes      -       %d", youngOne);
printf("\nDe 18 a 64 anos        -     Adultos           -       %d", adultONe);
printf("\nDe 65 a 100 anos       -     Idosos            -       %d", oldOne);

printf("\n\nPessoas com mais de 18 anos que assistiram ao filme:\n");
printf("\n %d pessoas do sexo masculino;\n", adultMen);
printf("\n %d pessoas do sexo feminino ;\n", adultWomen);


printf("\n\nArrecadação da sessão 1:\n");
printf("\nO total arrecadado na sessão foi de %d.", ticketFull+ticketHalf);
if (ticketFull > ticketHalf)
    printf("\nSendo que dessa arrecadação houve mais pagamento de inteiras.");
    else if (ticketHalf > ticketFull)
    printf("\nSendo que dessa arrecadação houve mais pagamento de meia entrada.");
    else 
    printf("\nSendo que a arrecadação foi igual de meia entrada e inteira.");

printf("\nA Nota de NPS do filme %s foi de %0.2f", movieOne, npsSessionOne);

printf("\n\n <<< Vamos para a segunda sessão! Aperte ENTER e vamos lá! >>>");
	getch();

    system("cls");
                      
          
            fflush(stdin);
            
            printf("\n\nQual o nome do filme assistido na sessão 2: ");
            fgets(movieTwo, 100, stdin);

            fflush(stdin);

        do 
        {
            printf("\n\nQuantas pessoas assistiram ao filme na sessão 2 (mínimo 10 telespectadores):");
            scanf("%d", &peopleSessionTwo);
        }
        
         while (peopleSessionTwo < 10);
        
            do 
            {
                do 
				{
					printf("\n\n Qual o sexo do telespectador %d? \nUse --> M - Masculino, F - Feminino:", accountantTwo);
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
					printf("\n\nQual a idade do telespectador %d ?: ", accountantTwo);
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
					printf("\n\nQual o tipo de ingresso do telespectador %d? \nUse --> I - Inteira, M - Meia-entrada:", accountantTwo);
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
					printf("\n\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?:", accountantTwo);
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

   percentualPromoterTwo = ((promoterTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;
   percentualDetratorTwo = ((detratorTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;         
   npsSessionTwo = percentualPromoterTwo - percentualDetratorTwo;

system("cls");

printf("#####################################\n");
printf("####Relatório da Segunda Sessão:#####\n");
printf("#####################################\n");

printf("\nFilme apresentado: %s ", movieTwo);

printf("\n\nPessoas do sexo feminino que assistiram ao filme: %d", womenTwo);
printf("\nPessoas do sexo masculino que assistiram ao filme: %d", menTwo);

printf("\n\nClassificação dos telespectadores por idade:\n");

printf("\nIdade                  -     Classificação     -       Quantidade");
printf("\nDe 03 a 13 anos        -     Crianças          -       %d", kidTwo);
printf("\nDe 14 a 17 anos        -     Adolescentes      -       %d", youngTwo);
printf("\nDe 18 a 64 anos        -     Adultos           -       %d", adultTwo);
printf("\nDe 65 a 100 anos       -     Idosos            -       %d", oldTwo);

printf("\n\nPessoas com mais de 18 anos que assistiram ao filme:\n");
printf("\n %d pessoas do sexo masculino;\n", adultMenTwo);
printf("\n %d pessoas do sexo feminino ;\n", adultWomenTwo);


printf("\n\nArrecadação da sessão 2:\n");
printf("\nO total arrecadado na sessão foi de %d.", ticketFullTwo+ticketHalfTwo);
if (ticketFullTwo > ticketHalfTwo)
    printf("\nSendo que dessa arrecadação houve mais pagamento de inteiras.");
    else if (ticketHalfTwo > ticketFullTwo)
    printf("\nSendo que dessa arrecadação houve mais pagamento de meia entrada.");
    else 
    printf("\nSendo que a arrecadação foi igual de meia entrada e inteira.");

printf("\n\nA Nota de NPS do filme %s foi de %0.2f", movieTwo, npsSessionTwo);


printf("\n\nAté a próxima sessão!!!");
	getch();

}   




