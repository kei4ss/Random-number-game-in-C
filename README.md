# Jogo do número aleatório em C

Um jogo de adivinhação de números desenvolvido em **C**, onde o computador sorteia um número secreto e o jogador tenta acertá-lo com o menor número de tentativas possível.

---

## Sobre o Projeto

Este projeto foi desenvolvido como parte dos estudos iniciais em linguagem C. O jogo explora conceitos fundamentais como entrada e saída de dados, estruturas de repetição, condicionais, geração de números aleatórios e manipulação de variáveis.

---

## 🕹️ Como Jogar

1. Ao iniciar o jogo, o computador sorteia um número secreto entre **0 e 99**.
2. O jogador deve tentar adivinhar esse número.
3. A cada tentativa, o jogo informa se o chute foi **maior** ou **menor** que o número secreto.
4. O jogo termina quando o jogador acerta o número.
5. Ao final, a **pontuação** é exibida — quanto menos tentativas e menor a diferença entre os chutes, maior a pontuação!

### Sistema de Pontuação

- Pontuação inicial: **1000 pontos**
- A cada tentativa errada, pontos são descontados com base na diferença entre o chute e o número secreto:
  ```
  pontos perdidos = |chute - número secreto| / 2
  ```
- Apenas valores **maiores ou iguais a zero** são aceitos.

---

## Como Compilar e Executar

### Pré-requisitos

- Compilador GCC instalado

### Compilar

```bash
gcc main.c -o main
```

### Executar

```bash
./main
```

> No Windows, utilize `main.exe` no lugar de `./main`.

---

## 🧠 Conceitos de C Utilizados

- `printf` e `scanf` para entrada e saída de dados
- `rand()` e `srand()` com `time()` para geração de números aleatórios
- Estrutura de repetição `while`
- Condicionais `if`
- `#define` para definição de constantes
- Funções da biblioteca `<math.h>` (`abs`)
- Tipos de dados: `int` e `float`

---

## 📁 Estrutura do Projeto

```
📦 jogo-da-sorte
 ┗ 📄 main.c
```

---

## 👤 Autor

**Miquéias Ferreira Dos Santos**

---

## 📝 Licença

Este projeto é de uso livre para fins de estudo e aprendizado.
