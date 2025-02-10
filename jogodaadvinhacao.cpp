#include <iostream> //input, output, stream: para permitir entradas e saídas no programa
#include <cstdlib> // adiciona as funções padrões em C++
#include <ctime> //adiciona biblioteca que tem as funções relacionadas a tempo em C++
using namespace std; //sinaliza a utilização do std para não precisar sinalizar ele quando for usar i/o

int main () {
    setlocale(LC_ALL, "Portuguese");

    cout << "**************************************" << endl; //endl quebra linha
    cout << "* Bem-vindos ao jogo da adivinhação! *" << endl;
    cout << "**************************************" << endl;

    cout << "Selecione o nível de dificuldade: " << endl;
    cout << "Fácil (F), Médio (M) ou Difícil (D)" << endl;
    char dificuldade;
    cin >> dificuldade;

    int numero_de_tentativas;
    if(dificuldade == 'F') {
        numero_de_tentativas = 15;

    } else if(dificuldade == 'M') {
        numero_de_tentativas = 10;

    } else {
        numero_de_tentativas = 5;
    }

    //variável para setar a semente do numero aleatório, função conta o número de segundos desde 1970, entãos empre tem um número diferente, pode ser também time(0).
    srand(time(NULL));
    //variáveis do tipo constante são declaradas em caixa alta
    const int NUMERO_SECRETO = rand() % 100;  //%100 pega o resto da divisão pegando entre 0 e 99

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
        int chute;
        cout << "Tentativa: " << tentativas << endl;
        cout << "Qual o seu chute?" << endl;
        cin >> chute; //cin recebe valores

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0; //usado o 2.0 para que o compilador entenda como real e faça a divisão sem deixar resto
        pontos = pontos - pontos_perdidos;
    
        bool acertou = chute == NUMERO_SECRETO;
        bool chute_maior = chute > NUMERO_SECRETO;
    
        if(acertou) {
            cout << "Parabéns você ACERTOU." << endl;
            nao_acertou = false;
            break;
    
        } else if(chute_maior) {
            cout << "Seu chute foi MAIOR que o número secreto" << endl;
    
        } else {
            cout << "Seu chute foi MENOR  que o número secreto" << endl;

        }
    }

    cout << "Fim de jogo!" << endl;
    if(nao_acertou) {
        cout << "Você PERDEU! Tente novamente!" << endl;
        cout << "O número secreto era: " << NUMERO_SECRETO << endl;

    } else {
        cout << "Você ACERTOU o número secreto em: " << tentativas << " tentativas" << endl;
        cout.precision(2); // adiciona precisou para a impreção a seguir, adicionado 2 casas decimais
        cout << fixed; //adiciona um marcador para que a vírgula fique fixa na precisão passada em precision
        cout << "Sua pontuação foi de " << pontos << " pontos." << endl;
    }

}
