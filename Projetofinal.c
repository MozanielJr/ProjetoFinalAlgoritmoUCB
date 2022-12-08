#include<stdio.h>//mecanismo para entrada e saída (input e output).
#include<locale.h>//necessário para utilizar o setlocale, que com ele é possivel definir uma linguagem para os caracteres.
#include<stdlib.h>//localizadas as funções responsáveis pela manipulação da alocação de memória.
#include<conio.h>//usado para manipular caracteres.

int main()//indica se o comando retornará 0, ou seja, sem erro.
{
    
    setlocale(LC_ALL, "Portuguese");//definindo a linguagem portuguesa para os caracteres.
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");//integrante do projeto e as respectivas informações.
    printf("Nome: Mozaniel Medeiros dos Santos Junior\nMatrícula: UC22103112\nCurso: Ciência da computação\n\n");//integrante do projeto e as respectivas informações.
    printf("Nome: Nathalia Gonçalves Silva\nMatrícula: UC22200563\nCurso: Ciência da computação\n\n\n");//integrante do projeto e as respectivas informações.
   // printf("Repositório GitHub https://github.com/MozanielJr/ProjetoFinalAlgoritmoUCB.git\n\n\n");//repositório usado para compartilhar o projeto.

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
	

	printf("##############################################################\n");//interação com o usuário.
	printf("################## C              B  #########################\n");//interação com o usuário.
	printf("##################   I          S    #########################\n");//interação com o usuário.
	printf("##################     N      B      #########################\n");//interação com o usuário.
	printf("##################       E           #########################\n");//interação com o usuário.
	printf("##############################################################\n");//interação com o usuário.
	
	printf("\nOlá! Estamos querendo tornar a sua experiência cada vez melhor! \n");//interação com o usuário.
    printf("\nE pensando nisso, queremos fazer uma breve pesquisa.\n");//interação com o usuário.
    printf("\n <<< Aperte ENTER e vamos lá! >>>");//interação com o usuário.
	getch();//usado para ler um caracter e não mostra-lo.
	system("cls");//limpa tudo acima.


    do //mecanismo de repetição usado para solicitar as sessões.
    {
		printf("Informe o número de sessões que participarão da pesquisa(mínimo 2 e máximo 2):");
		scanf("%d", &sessions);
    }
    
    while (sessions != 2); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
	system("cls");
            fflush(stdin); //limpando o buffer do teclado.
            //INICIANDO A PRIMEIRA SESSÂO.
            printf("\n\nQual o nome do filme assistido na sessão 1: ");
            fgets(movieOne, 100, stdin);

            fflush(stdin); //limpando o buffer do teclado.

        do  //mecanismo de repetição usado para solicitar a quantidade de pessoas na sessão 1.
        {
            printf("\n\nQuantas pessoas assistiram ao filme na sessão 1 (mínimo 10 telespectadores):");
            scanf("%d", &peopleSessionOne);
        }
        
         while (peopleSessionOne < 4); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
    system("cls");    
            do  //mecanismo de repetição usado para solicitar as informações de cada usuário da sessão 1.
            {
                do  //mecanismo de repetição usado para solicitar o sexo dos telespectadores da sessão 1.
				{
					printf("\n\n Qual o sexo do telespectador %d? \nUse --> M - Masculino, F - Feminino:", accountant);
                	scanf("%s", &sex);
            	}
					while (sex != 'M' && sex != 'm' && sex != 'F' && sex != 'f'); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
				    system("cls");
					    switch (sex) //usado para separar os telespectadores de sexo masculino e feminino.
                        {
						    case 'M': male = male + 1; break;
						    case 'm': male = male + 1; break;
						    case 'F': female = female + 1; break;
						    case 'f': female = female + 1; break;
						default: break;
                        }
                do  //mecanismo de repetição usado para solicitar a idade dos telespectadores da sessão 1.
				{
					printf("\n\nQual a idade do telespectador %d ?: ", accountant);
                	scanf("%d", &age);                	
				}
                	while (age < 3 || age > 100); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
					system("cls");
                	    sumAge = sumAge + age; // armazenando e somando a idade dos telespectadores para que seja feita a média de idade da sessão 1.
                		accountantAge++; //contando quantos telespectadores tiveram a idade informada.

                	    if (age >=3 && age <= 13){ //separando os telespectadores por classificação de acordo com sua idade.
                			kidOne = kidOne + 1;}
                		if (age >= 14 && age <= 17){
                			youngOne = youngOne +1;}
                		if (age >= 18 && age <= 64){
                			adultONe = adultONe + 1;}
						if (age >= 65 && age <= 100){
                			oldOne = oldOne + 1;}

                        if (sex == 'M' || sex == 'm' && age >= 18) //separando homens maiores de idade.
                            adultMen = adultMen + 1;
                        if (sex == 'F' || sex == 'f' && age >= 18) //separando mulheres maiores de idade.
                            adultWomen = adultWomen + 1;

                        if (sex == 'M' || sex == 'm') //contanto quantos telespectadores do sexo masculino assistiram a sessão 1.
                            men = men + 1;
                        if (sex == 'F' || sex == 'f') //contanto quantos telespectadores do sexo feminino assistiram a sessão 1.
                            women = women + 1;                    

                                                           
                
                    fflush(stdin); //limpando o buffer do teclado.
                    
                do   //mecanismo de repetição usado para solicitar o tipo de ingresso dos telespectadores da sessão 1.
				{
					printf("\n\nQual o tipo de ingresso do telespectador %d? \nUse --> I - Inteira, M - Meia-entrada:", accountant);
                	scanf("%c", &ticket);
            	}
					while (ticket != 'I' && ticket != 'i' && ticket != 'M' && ticket != 'm'); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
					system("cls");
					    switch (ticket) //usado para separar os telespectadores que pagaram inteira e os que pagaram meia entrada.
                        {
						    case 'M': ticketHalf = ticketHalf + 25; break;
						    case 'm': ticketHalf = ticketHalf + 25; break;
						    case 'I': ticketFull = ticketFull + 50; break;
						    case 'i': ticketFull = ticketFull + 50; break;
                            default : break;
                        }
						
											
                do  //mecanismo de repetição usado para solicitar a nota para calcular o NPS do filme da sessão 1.
				{
					printf("\n\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?:", accountant);
                	scanf("%d", &scoreNps);
            	}
					while (scoreNps < 0 || scoreNps > 10); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
					system("cls");
					    if (scoreNps <= 6) //separando os telespectadores de acordo com a nota dada.
                            detrator = detrator + 1;
                        else if (scoreNps >= 9)
                            promoter = promoter + 1;
                        else
                            neutral = neutral + 1;

					
                accountant++;
            }
        
            while (accountant <= peopleSessionOne); //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.


   percentualPromoter = ((promoter+0.00)/(promoter+detrator+neutral))*100; //calculo para calcular o NPS do filme da sessão 1.
   percentualDetrator = ((detrator+0.00)/(promoter+detrator+neutral))*100;         
   npsSessionOne = percentualPromoter - percentualDetrator;


system("cls"); //limpa tudo acima.


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

getch();//usado para ler um caracter e não mostra-lo.

system("cls"); //limpa tudo acima.


printf("\n\nArrecadação da sessão 1:\n");
printf("\nO total arrecadado na sessão foi de %d.", ticketFull+ticketHalf);
if (ticketFull > ticketHalf)
    printf("\n\nSendo que dessa arrecadação houve mais pagamento de inteiras.");
    else if (ticketHalf > ticketFull)
    printf("\n\nSendo que dessa arrecadação houve mais pagamento de meia entrada.");
    else 
    printf("\n\nSendo que a arrecadação foi igual de meia entrada e inteira.");

printf("\n\n\n %0.2f foi a Nota de NPS do filme %s", npsSessionOne,movieOne);

printf("\n\n <<< Vamos para a segunda sessão! Aperte ENTER e vamos lá! >>>");
	getch();//usado para ler um caracter e não mostra-lo.

    system("cls"); //limpa tudo acima.
                      
          
            fflush(stdin); //limpando o buffer do teclado.
            //INICIANDO A PRIMEIRA SESSÂO.
            printf("\n\nQual o nome do filme assistido na sessão 2: ");
            fgets(movieTwo, 100, stdin);

            fflush(stdin); //limpando o buffer do teclado.
            system("cls");
        do  //mecanismo de repetição usado para solicitar a quantidade de pessoas na sessão 2.
        {
            printf("\n\nQuantas pessoas assistiram ao filme na sessão 2 (mínimo 10 telespectadores):");
            scanf("%d", &peopleSessionTwo);
        }
        
         while (peopleSessionTwo < 4);; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
        system("cls");
            do  //mecanismo de repetição usado para solicitar as informações de cada usuário da sessão 2.
            {
                do  //mecanismo de repetição usado para solicitar o sexo dos telespectadores da sessão 2.
				{
					printf("\n\n Qual o sexo do telespectador %d? \nUse --> M - Masculino, F - Feminino:", accountantTwo);
                	scanf("%s", &sexTwo);
            	}
					while (sexTwo != 'M' && sexTwo != 'm' && sexTwo != 'F' && sexTwo != 'f');; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
				    system("cls");  
					    switch (sexTwo) //usado para separar os telespectadores de sexo masculino e feminino.
                        {
						    case 'M': maleTwo = maleTwo + 1; break;
						    case 'm': maleTwo = maleTwo + 1; break;
						    case 'F': femaleTwo = femaleTwo + 1; break;
						    case 'f': femaleTwo = femaleTwo + 1; break;
						default: break;
                        }
                do   //mecanismo de repetição usado para solicitar a idade dos telespectadores da sessão 2.
				{
					printf("\n\nQual a idade do telespectador %d ?: ", accountantTwo);
                	scanf("%d", &ageTwo);                	
				}
                	while (ageTwo < 3 || ageTwo > 100);; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
                    system("cls");
                	    sumAgeTwo = sumAgeTwo + ageTwo; // armazenando e somando a idade dos telespectadores para que seja feita a média de idade da sessão 2.
                		accountantAgeTwo++; //contando quantos telespectadores tiveram a idade informada.

                	    if (ageTwo >=3 && ageTwo <= 13){ //separando os telespectadores por classificação de acordo com sua idade.
                			kidTwo = kidTwo + 1;}
                		if (ageTwo >= 14 && ageTwo <= 17){
                			youngTwo = youngTwo +1;}
                		if (ageTwo >= 18 && ageTwo <= 64){
                			adultTwo = adultTwo + 1;}
						if (ageTwo >= 65 && ageTwo <= 100){
                			oldTwo = oldTwo + 1;}

                        if (sexTwo == 'M' || sexTwo == 'm' && ageTwo >= 18) //separando homens maiores de idade.
                            adultMenTwo = adultMenTwo + 1;
                        if (sexTwo == 'F' || sexTwo == 'f' && ageTwo >= 18) //separando mulheres maiores de idade.
                            adultWomenTwo = adultWomenTwo + 1;

                        if (sexTwo == 'M' || sexTwo == 'm') //contanto quantos telespectadores do sexo masculino assistiram a sessão 2.
                            menTwo = menTwo + 1;
                        if (sexTwo == 'F' || sexTwo == 'f') //contanto quantos telespectadores do sexo feminino assistiram a sessão 2.
                            womenTwo = womenTwo + 1;                    

                                                           
                
                    fflush(stdin); //limpando o buffer do teclado.
                    
                do    //mecanismo de repetição usado para solicitar o tipo de ingresso dos telespectadores da sessão 2.
				{
					printf("\n\nQual o tipo de ingresso do telespectador %d? \nUse --> I - Inteira, M - Meia-entrada:", accountantTwo);
                	scanf("%c", &ticketTwo);
            	}
					while (ticketTwo != 'I' && ticketTwo != 'i' && ticketTwo != 'M' && ticketTwo != 'm');; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
					system("cls");
					    switch (ticketTwo) //usado para separar os telespectadores que pagaram inteira e os que pagaram meia entrada.
                        {
						    case 'M': ticketHalfTwo = ticketHalfTwo + 25; break;
						    case 'm': ticketHalfTwo = ticketHalfTwo + 25; break;
						    case 'I': ticketFullTwo = ticketFullTwo + 50; break;
						    case 'i': ticketFullTwo = ticketFullTwo + 50; break;
                            default : break;
                        }
						
											
                do  //mecanismo de repetição usado para solicitar a nota para calcular o NPS do filme da sessão 2.
				{
					printf("\n\nEm uma escala de 0 a 10, quanto o telespectador %d recomendaria o filme para um amigo?:", accountantTwo);
                	scanf("%d", &scoreNpsTwo);
            	}
					while (scoreNpsTwo < 0 || scoreNpsTwo > 10);; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.
                    system("cls");
					    if (scoreNpsTwo <= 6) //separando os telespectadores de acordo com a nota dada.
                            detratorTwo = detratorTwo + 1;
                        else if (scoreNpsTwo >= 9)
                            promoterTwo = promoterTwo + 1;
                        else
                            neutralTwo = neutralTwo + 1;

					
                accountantTwo++;
            }
        
            while (accountantTwo <= peopleSessionTwo);; //validando o caracter informado pelo usuário para que continue o programa, caso contrário, repetir o código até que seja validado.

   percentualPromoterTwo = ((promoterTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;//calculo para calcular o NPS do filme da sessão 2.
   percentualDetratorTwo = ((detratorTwo+0.00)/(promoterTwo+detratorTwo+neutralTwo))*100;         
   npsSessionTwo = percentualPromoterTwo - percentualDetratorTwo;

system("cls"); //limpa tudo acima.

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

getch();
system("cls");

//INFORMANDO AS ARRECADAÇÔES.
printf("\n\nArrecadação da sessão 2:\n");
printf("\nO total arrecadado na sessão foi de %d.", ticketFullTwo+ticketHalfTwo);
if (ticketFullTwo > ticketHalfTwo)
    printf("\n\nSendo que dessa arrecadação houve mais pagamento de inteiras.");
    else if (ticketHalfTwo > ticketFullTwo)
    printf("\n\nSendo que dessa arrecadação houve mais pagamento de meia entrada.");
    else 
    printf("\n\nSendo que a arrecadação foi igual de meia entrada e inteira.");

printf("\n\n\nA %0.2f foi a Nota de NPS do filme %s", npsSessionTwo, movieTwo);


printf("\n\nAté a próxima sessão!!!");
	getch();

}  