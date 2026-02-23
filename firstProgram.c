# include <stdio.h>
# include <stdlib.h>
# include <time.h>

#define TOTAL_DE_RODADAS 3 // Cria uma constante

int main(){
    printf("*********************************\n");
    printf("# BEM VINDO(a) AO JOGO DA SORTE #\n");
    printf("*********************************\n");
    printf("---------------------------------\n");
    printf("|  Criador: Miquéias Ferreira   |\n");
    printf("---------------------------------\n");

    printf("\n\n");

    // Regras
    printf("////////////\n");
    printf("/  REGRAS  /\n");
    printf("////////////\n");
    printf("  -> O computador irá pensar em um número aleatório.\n");
    printf("  -> Você deve acertar esse número secreto com a menor\n");
    printf("    quantidade de tentativas possíveis.\n");
    printf("  -> CUIDADO! Quanto maior a diferença entre os números, maior\n");
    printf("    será a quantidade de pontos que você perderá!\n");

    printf("\n\n");

    // Definindo numero secreto
    int segundos = time(0);
    srand(segundos); // Define uma seed para rand()
    int numeroSecreto = rand() % 100; // Numero aleatório entre 0 - 99

    int chute;
    int tentativas = 0;
    float pontos = 1000;

    while(1){ // 0 || 1, não existe booleano em c
        tentativas++;

        // input do usuário
        printf("Qual o seu %d° palpite? ", tentativas);
        scanf("%d", &chute); 

        // Validação
        int invalido = chute < 0;
        if(invalido){
            printf("<< Apenas valores maiores ou iguais à zero são válidos. >> \n");
            tentativas--;
            continue;
        }

        // Calculando pontos
        float pontosPerdidos = (float) abs(chute - numeroSecreto) / 2;
        pontos = pontos - pontosPerdidos;

        int acertou = chute == numeroSecreto;
        if(acertou){
            printf("Você acertou o número!\n");
            break;
        }

        int maiorQue = chute > numeroSecreto; 
        if(maiorQue){
            printf("O chute foi MAIOR do que o número secreto!\n");
            continue;
        }
        printf("O chute foi MENOR do que o número secreto!\n");
    }
    
    printf("FIM DE JOGO!\n");
    printf("Pontuação final: %.2f \n", pontos);
}



