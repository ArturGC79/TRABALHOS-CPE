#include <iostream>
#include<vector>
#include<string>
using namespace std;

struct ramais {
    int num_ramal;
    int categoria;
    string setor;
    int edificio;
    int sala;
    char resp;
    char resp_ateste;
};

ramais le_ramal() {
    ramais ram;
    cout << "RAMAL: ";
    cin >> ram.num_ramal;
    if (ram.num_ramal < 1000 || ram.num_ramal > 2999) {
        cout << "Op�ao invalida!" << endl;
        return ram; 
    }

    cout << "CATEGORIA: ";
    cin >> ram.categoria;
    if (ram.categoria < 0 || ram.categoria > 6) {
        cout << "Op�ao invalida!" << endl;
        return ram; 
    }

    cout << "Digite o nome do setor: ";
    cin >> ram.setor;
    if (ram.setor != "setel" && ram.setor != "diben" && ram.setor != "protocolo" && ram.setor != "patrimonio") {
        cout << "ENTRADA INVALIDA" << endl;
    }

    cout << "EDIFICIO: ";
    cin >> ram.edificio;
    if (cin.fail()) {
        cout << "Op�ao invalida!" << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return ram; 
    }

    cout << "SALA: ";
    cin >> ram.sala;
    if (cin.fail()) {
        cout << "Op�ao invalida!" << endl;
        cin.clear(); 
        cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
        return ram; 
    }

    cout << "RESPONSAVEL PELO RAMAL: ";
    cin >> ram.resp;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    cout << "RESPONSAVEL PELO ATESTE DE CONTA TELEFONICA: ";
    cin >> ram.resp_ateste;
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 

    return ram;
}

int main() {
    ramais g = le_ramal();

    cout << "NUMERO DO RAMAL: " << g.num_ramal << endl;
    cout << "CATEGORIA: " << g.categoria << endl;
    cout << "SETOR: " << g.setor << endl;
    cout << "EDIFICIO: " << g.edificio << endl;
    cout << "SALA: " << g.sala << endl;
    cout << "RESPONSAVEL PELO RAMAL: " << g.resp << endl;
    cout << "RESPONSAVEL PELO ATESTE DE CONTA TELEFONICA: " << g.resp_ateste << endl;

     return 0;
}
