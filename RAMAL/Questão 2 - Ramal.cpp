#include <iostream>
#include <string>

using namespace std;


struct Ramal {
    int ramal;
    int categoria;
    string setor;
    int edificio;
    int sala;
    string responsavelRamal;
    string responsavelAteste;
};


void exibirDetalhesRamal(const Ramal& ramal) {
    cout << "Ramal: " << ramal.ramal << endl;
    cout << "Categoria: " << ramal.categoria << endl;
    cout << "Setor: " << ramal.setor << endl;
    cout << "Edifício: " << ramal.edificio << endl;
    cout << "Responsável pelo ramal: " << ramal.responsavelRamal << endl;
    cout << "Responsável pelo ateste de conta: " << ramal.responsavelAteste << endl;
    cout << "------------------------------------" << endl;
}

int main() {
    
    Ramal setel = { 1001, 6, "SETEL", 500, 567, "Marcos", "Douglas" };
    Ramal diben = { 1650, 3, "DIBEN", 500, 203, "Cesar", "Carlos" };
    Ramal patrimonio = { 1440, 4, "PATRIMÔNIO", 505, 325, "Celia", "Otavio" };
    Ramal protocolo = { 1302, 6, "PROTOCOLO", 505, 450, "Leandro", "Gabriel" };

    int opcao;
    string filtroString;
    int filtroInt;

    cout << "----------------PESQUISA DE RAMAIS---------------" << endl;
    cout << "SELECIONE A FORMA DE PESQUISA QUE DESEJA REALIZAR:" << endl;
    cout << "PRESSIONE 0 para: Número do ramal" << endl;
    cout << "PRESSIONE 1 para: Setor" << endl;
    cout << "PRESSIONE 2 para: Edifício" << endl;
    cout << "PRESSIONE 3 para: Responsável pelo ramal" << endl;
    cout << "PRESSIONE 4 para: Responsável pelo ateste de conta" << endl;
    cin >> opcao;

    switch (opcao) {
    case 0:
        cout << "1001" << endl;
        cout << "1650" << endl;
        cout << "1440" << endl;
        cout << "1302" << endl;

        cout << "Digite o número do ramal desejado: ";
        cin >> filtroInt;
        if (filtroInt == setel.ramal) {
            exibirDetalhesRamal(setel);
        }
        else if (filtroInt == diben.ramal) {
            exibirDetalhesRamal(diben);
        }
        else if (filtroInt == patrimonio.ramal) {
            exibirDetalhesRamal(patrimonio);
        }
        else if (filtroInt == protocolo.ramal) {
            exibirDetalhesRamal(protocolo);
        }
        else {
            cout << "Ramal não encontrado." << endl;
        }
        break;

    case 1:
        cout << "SETEL" << endl;
        cout << "DIBEN" << endl;
        cout << "PATRIMONIO" << endl;
        cout << "PROTOCOLO" << endl;
        cout << "Digite o setor desejado: " << endl;
        cin.ignore();
        getline(cin, filtroString);
        if (filtroString == setel.setor) {
            exibirDetalhesRamal(setel);
        }
        else if (filtroString == diben.setor) {
            exibirDetalhesRamal(diben);
        }
        else if (filtroString == patrimonio.setor) {
            exibirDetalhesRamal(patrimonio);
        }
        else if (filtroString == protocolo.setor) {
            exibirDetalhesRamal(protocolo);
        }
        else {
            cout << "Setor não encontrado." << endl;
        }
        break;

    case 2:
        cout << "Edifício 500 (sede)" << endl;
        cout << "Edifício 505 (SEPN 505 Asa Norte)" << endl;
        cout << "Digite o número do edifício desejado: ";
        cin >> filtroInt;
        if (filtroInt == setel.edificio || filtroInt == patrimonio.edificio) {
            exibirDetalhesRamal(setel);
            exibirDetalhesRamal(patrimonio);
        }
        else if (filtroInt == protocolo.edificio) {
            exibirDetalhesRamal(protocolo);
        }
        else {
            cout << "Edifício não encontrado." << endl;
        }
        break;

    case 3:
        cout << "Marcos" << endl;
        cout << "Cesar" << endl;
        cout << "Celia" << endl;
        cout << "Leandro" << endl;
        cout << "Digite o nome do responsável pelo ramal: ";
        cin.ignore();
        getline(cin, filtroString);
        if (filtroString == setel.responsavelRamal) {
            exibirDetalhesRamal(setel);
        }
        else if (filtroString == diben.responsavelRamal) {
            exibirDetalhesRamal(diben);
        }
        else if (filtroString == patrimonio.responsavelRamal) {
            exibirDetalhesRamal(patrimonio);
        }
        else if (filtroString == protocolo.responsavelRamal) {
            exibirDetalhesRamal(protocolo);
        }
        else {
            cout << "Responsável não encontrado." << endl;
        }
        break;

    case 4:
        cout << "Douglas" << endl;
        cout << "Carlos" << endl;
        cout << "Otavio" << endl;
        cout << "Gabriel" << endl;
        cout << "Digite o nome do responsável pelo ateste de conta: ";
        cin.ignore();
        getline(cin, filtroString);
        if (filtroString == setel.responsavelAteste) {
            exibirDetalhesRamal(setel);
        }
        else if (filtroString == diben.responsavelAteste) {
            exibirDetalhesRamal(diben);
        }
        else if (filtroString == patrimonio.responsavelAteste) {
            exibirDetalhesRamal(patrimonio);
        }
        else if (filtroString == protocolo.responsavelAteste) {
            exibirDetalhesRamal(protocolo);
        }
        else {
            cout << "Responsável pelo ateste não encontrado." << endl;
        }
        break;

    default:
        cout << "Opção inválida." << endl;
        break;
    }

    system("PAUSE");
    return 0;
}
