// Exercício033_utilizando  o comando while.cpp : Este arquivo contém a função 'main'. A execução do programa começa e termina ali.
//

#include <iostream>
#include <stdlib.h>
int main() {
        char resposta = 's';
        int codigo, idade, qtdSolteiro, qtdCasado, qtdDivorciado;
        float mediaSolteiros, mediaCasados, mediaDivorciados;

        qtdSolteiro =  qtdCasado =  qtdDivorciado = 0;         //Todas as variáveis desta linha inicializarão zeradas.
        mediaSolteiros = mediaCasados = mediaDivorciados = 0;  //Todas as variáveis desta linha inicializarão zeradas. 

        while(resposta =='s')
        {
            system("cls");
            printf("Codigo do estado civil \n");
            printf("1 - Solteiro \n");
            printf("2 - Casado \n");
            printf("3 - Divorciado \n");
            printf("Escolha um codigo civil: ");
            scanf_s("%d", &codigo);
            printf("Digite a idade desta pessoa: ");
            scanf_s("%d", &idade);  

            switch (codigo)
            {
            case 1: 
                mediaSolteiros += idade;       // ↔ mediaSolteiros = mediaSolteiros + idade
                qtdSolteiro++;
                break;
            case 2:
                mediaCasados += idade;         // ↔ mediaCasados = mediaCasados + idade
                qtdCasado++;
                break;
            case 3:
                mediaDivorciados += idade;     // ↔ mediaDivorciados = mediaDivorciados + idade
                qtdDivorciado++;
                break;
            default:
                printf("Codigo invalido \n");
                break;
            }

                                 
            printf("Quer digitar os dados de outra pessoa: (s/n): ");
            resposta = _getwch ();
            
        }
        mediaSolteiros /= qtdSolteiro;
        mediaCasados /= qtdCasado;
        mediaDivorciados /= qtdDivorciado;

        printf("\n\n");
        printf("A media de idade das pessoas solteiras....: %.2f \n" , mediaSolteiros);
        printf("A media de idade das pessoas casadas......: %.2f \n" , mediaCasados);
        printf("A media de idade das pessoas divorciadas..: %.2f \n" , mediaDivorciados);
        system("pause");
        
    return 0;
}

// Executar programa: Ctrl + F5 ou Menu Depurar > Iniciar Sem Depuração
// Depurar programa: F5 ou menu Depurar > Iniciar Depuração

// Dicas para Começar: 
//   1. Use a janela do Gerenciador de Soluções para adicionar/gerenciar arquivos
//   2. Use a janela do Team Explorer para conectar-se ao controle do código-fonte
//   3. Use a janela de Saída para ver mensagens de saída do build e outras mensagens
//   4. Use a janela Lista de Erros para exibir erros
//   5. Ir Para o Projeto > Adicionar Novo Item para criar novos arquivos de código, ou Projeto > Adicionar Item Existente para adicionar arquivos de código existentes ao projeto
//   6. No futuro, para abrir este projeto novamente, vá para Arquivo > Abrir > Projeto e selecione o arquivo. sln
