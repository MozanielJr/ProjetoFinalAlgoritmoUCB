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
            gets(movieOne);

            fflush(stdin);

        do 
        {
            printf("\n\nQuantas pessoas assistiram ao filme na sessão 1 (mínimo 10 telespectadores):");
            scanf("%d", &peopleSessionOne);
        }
        
         while (peopleSessionOne < 2);
        
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

printf("\n\nMaiores de idade por sexo que assistiram ao filme:");
printf("\n %d pessoas do sexo masculino com mais de 18 anos;\n", adultMen);
printf("\n %d pessoas do sexo feminino com mais de 18 anos;\n", adultWomen);


printf("\n\nArrecadação da sessão 1:");
printf("\nO total arrecadado na sessão foi de %d.", ticketFull+ticketHalf);
if (ticketFull > ticketHalf)
    printf("\nSendo que dessa arrecadação houve mais pagamento de inteiras.");
    else
    printf("\nSendo que dessa arrecadação houve mais pagamento de meia entrada.");






       
}   
