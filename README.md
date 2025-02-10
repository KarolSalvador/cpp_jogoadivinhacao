# 🎯 Jogo da Adivinhação em C++

## 📝 Descrição
Este é um jogo interativo de adivinhação desenvolvido em **C++**. O objetivo é acertar um **número secreto** gerado aleatoriamente, com um limite de tentativas baseado no nível de dificuldade escolhido.

## 🛠️ Funcionalidades
✅ Escolha de dificuldade: **Fácil (15 tentativas), Médio (10 tentativas) e Difícil (5 tentativas)**.  
✅ Geração aleatória de um **número secreto entre 0 e 99**.  
✅ Feedback para cada tentativa (**maior ou menor que o número secreto**).  
✅ Cálculo e exibição da **pontuação final**.  

## 🚀 Tecnologias Utilizadas
- 🖥️ **Linguagem:** C++
- 📚 **Bibliotecas:**
  - `<iostream>` - Entrada e saída de dados.
  - `<cstdlib>` - Funções padrão.
  - `<ctime>` - Geração de números aleatórios.

## 📌 Como Compilar e Executar
### 🔨 Compilação
Use um compilador como `g++` para compilar o código:
```sh
 g++ jogo_adivinhacao.cpp -o jogo
```

### ▶️ Execução
Após a compilação, execute o programa com:
```sh
 ./jogo
```

## 🕹️ Como Jogar
1️⃣ O jogo inicia exibindo uma **mensagem de boas-vindas**.  
2️⃣ O jogador escolhe o **nível de dificuldade**.  
3️⃣ O jogo gera um **número secreto** e solicita **chutes** do jogador.  
4️⃣ A cada chute, o jogo informa se o **número é maior ou menor** que o secreto.  
5️⃣ O jogo termina quando o jogador **acerta** ou **esgota as tentativas**.  
6️⃣ Se vencer, o jogador recebe uma **pontuação final** baseada nos chutes realizados.  

## 🔮 Melhorias Futuras
🚀 Implementar um **sistema de placar**.  
🚀 Permitir que o jogador **defina o intervalo** do número secreto.  
🚀 Criar uma **interface gráfica** para uma experiência mais interativa.  

## 👩‍💻 Autor
💡 Karoline Salvador da Silva

