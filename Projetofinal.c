#include<stdio.h>//mecanismo para entrada e saída (input e output)
#include<locale.h>//necessário para utilizar o setlocale (acentuação)

int main()
{
    
    setlocale(LC_ALL, "Portuguese");//Definindo a acentuação na linguagem portuguesa
    
    printf("Nome: João Arthur Pereira Melo\nMatrícula: UC22200743\nCurso: Ciência da computação\n\n");
    printf("Nome: *****\nMatrícula: *****\nCurso: *****\n\n");
    printf("Nome: *****\nMatrícula: *****\nCurso: *****\n\n\n");

    int sessions, peopleSessionOne, peopleSessionTwo, accountant=1, age;
    char sex;


    printf("Digite o número de sessões que deseja (mínimo 2 e no máximo 2)\n");
    scanf("%d", &sessions);

    if (sessions == 2)
    {
        do 
        {
        printf("Informe a quantidade de pessoas na sessao 1 (mínimo 10 telespectadores por sessao)\n");
        scanf("%d", &peopleSessionOne);
        }
         while (peopleSessionOne < 10);

            do 
            {
                printf("\nUse --> M - masculino, F - Feminino.\n\nDigite o sexo do telespectador %d: ", accountant);
                scanf("%s", &sex);
        
                printf("\nDigite a idade do telespectador %d: ", accountant);
                scanf("%d", &age);
                    if ( 3 < sex < 100);
                    else printf("Digite uma idade superior a 3 anos e inferior a 100 anos");
                accountant++;
            }
            while (accountant <= peopleSessionOne);
       
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

    else 
    {
        printf("Digite o número 2");
    }
    
    
}   
