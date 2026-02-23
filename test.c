#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(){
    int segundos = time(0);
    int anos = segundos / 60 / 60 / 24 / 365; 
    int epoch = 1970;
    printf("Ano atual: %d\n", anos + epoch);

    srand(segundos); // Defifinindo semente para a função random
    int randomNumber = rand(); 
    printf("Random number: %d\n", randomNumber % 100);
}