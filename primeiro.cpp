#include <iostream>
#include <iomanip>
#include <string>
#include <climits>

using namespace std; // necessário pra usar cout (saida de dados) e endl (fim da linha) sem precisar colocar std:: antes do comando

// ------------------------------------------------------------------------------------------------------------------------------
// Funcao principal--------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------

int main()
{
    // int double char string bool
    // declarar variável
    int idade;
    double fracionado;
    string nome;

    // mudar valor de variavel
    idade = 30;
    fracionado = 2.345678;
    nome = "Fulano";

    // ------------------------------------------------------------------------------------------------------------------------------
    // ENTRADA E SAÍDA DE DADOS------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    cout << "A idade de " << nome << " e " << idade << endl; // cout é o comando de saida e endl de fim de linha
    cout << fixed << setprecision(2) << fracionado << endl;  // define que a saída de double tem duas casas decimais
    cout << "Digite seu nome:" << endl;
    getline(cin, nome); // Pega uma string ate quebra de linha
    cout << "Digite sua idade:" << endl;
    cin >> idade; // pega o q digitou e coloca na variavel, string tem q ser getline

    // ------------------------------------------------------------------------------------------------------------------------------
    // ESTRUTURA CONDICIONAL---------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    int horaDigitada = 1;

    if (horaDigitada = 1)
    {
        cout << "Boa noite" << endl;
    }

    // IF ELSE------------------------------------------------------------------------------------------------------------

    if (horaDigitada < 6)
    {
        cout << "Boa noite" << endl;
    }
    else
    {
        cout << "Bom dia" << endl;
    }

    // IF ELSE IF--------------------------------------------------------------------------------------------------------

    printf("Digite a hora: \n");
    cin >> horaDigitada;
    if (horaDigitada > 4 && horaDigitada <= 12)
    {
        cout << "Bom dia" << endl;
    }
    else if (horaDigitada > 12 && horaDigitada <= 18)
    {
        cout << "Boa tarde" << endl;
    }
    else
    {
        cout << "Boa noite" << endl;
    }

    // ------------------------------------------------------------------------------------------------------------------------------
    // ESTRUTURA REPETICAO---------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    // WHILE--------------------------------------------------------------------------------------------------------
    cout << "While" << endl;
    while (horaDigitada < 18)
    {
        cout << "Bom dia" << endl;
        horaDigitada++;
    }

    // FOR----------------------------------------------------------------------------------------------------------

    cout << "For" << endl;
    for (horaDigitada = 1; horaDigitada < 18; horaDigitada++)
    {
        cout << "Bom dia" << endl;
    }

    // DO WHILE-----------------------------------------------------------------------------------------------------
    cout << "Do while" << endl;
    horaDigitada = 1;
    do
    {
        cout << "Bom dia" << endl;
        horaDigitada++;
    } while (horaDigitada < 18);


    // ------------------------------------------------------------------------------------------------------------------------------
    // VETORES-----------------------------------------------------------------------------------------------------------------------
    // ------------------------------------------------------------------------------------------------------------------------------

    int vetor1[10]; // cria vetor de 10 indices do tipo inteiro

    int N, i, soma, media;
    cout << "Quantas notas para calcular?" << endl;
    cin >> N;

    double vetorNotas[N];

    for (i = 0; i < N; i++)
    {
        cout << "Digite uma nota:" << endl;
        cin >> vetorNotas[i];
    }

    soma = 0;

    for (i = 0; i < N; i++)
    {
        soma = soma + vetorNotas[i];
    }
    media = soma / N;
     cout << "A media e " << media << endl;

    cout << "Programa executado com sucesso!" << endl;

}