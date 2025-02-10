#include <iostream> //input, output, stream: para permitir entradas e sa�das no programa
#include <cstdlib> // adiciona as fun��es padr�es em C++
#include <ctime> //adiciona biblioteca que tem as fun��es relacionadas a tempo em C++
using namespace std; //sinaliza a utiliza��o do std para n�o precisar sinalizar ele quando for usar i/o

int main () {
    setlocale(LC_ALL, "Portuguese");

    cout << "**************************************" << endl; //endl quebra linha
    cout << "* Bem-vindos ao jogo da adivinha��o! *" << endl;
    cout << "**************************************" << endl;

    cout << "Selecione o n�vel de dificuldade: " << endl;
    cout << "F�cil (F), M�dio (M) ou Dif�cil (D)" << endl;
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

    //vari�vel para setar a semente do numero aleat�rio, fun��o conta o n�mero de segundos desde 1970, ent�os empre tem um n�mero diferente, pode ser tamb�m time(0).
    srand(time(NULL));
    //vari�veis do tipo constante s�o declaradas em caixa alta
    const int NUMERO_SECRETO = rand() % 100;  //%100 pega o resto da divis�o pegando entre 0 e 99

    bool nao_acertou = true;
    int tentativas = 0;

    double pontos = 1000.0;

    for(tentativas = 1; tentativas <= numero_de_tentativas; tentativas++) {
        int chute;
        cout << "Tentativa: " << tentativas << endl;
        cout << "Qual o seu chute?" << endl;
        cin >> chute; //cin recebe valores

        double pontos_perdidos = abs(chute - NUMERO_SECRETO)/2.0; //usado o 2.0 para que o compilador entenda como real e fa�a a divis�o sem deixar resto
        pontos = pontos - pontos_perdidos;
    
        bool acertou = chute == NUMERO_SECRETO;
        bool chute_maior = chute > NUMERO_SECRETO;
    
        if(acertou) {
            cout << "Parab�ns voc� ACERTOU." << endl;
            nao_acertou = false;
            break;
    
        } else if(chute_maior) {
            cout << "Seu chute foi MAIOR que o n�mero secreto" << endl;
    
        } else {
            cout << "Seu chute foi MENOR  que o n�mero secreto" << endl;

        }
    }

    cout << "Fim de jogo!" << endl;
    if(nao_acertou) {
        cout << "Voc� PERDEU! Tente novamente!" << endl;
        cout << "O n�mero secreto era: " << NUMERO_SECRETO << endl;

    } else {
        cout << "Voc� ACERTOU o n�mero secreto em: " << tentativas << " tentativas" << endl;
        cout.precision(2); // adiciona precisou para a impre��o a seguir, adicionado 2 casas decimais
        cout << fixed; //adiciona um marcador para que a v�rgula fique fixa na precis�o passada em precision
        cout << "Sua pontua��o foi de " << pontos << " pontos." << endl;
    }

}
