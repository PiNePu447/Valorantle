#include <iostream>
#include "functions.hpp"
using namespace std;

int main(){
    caracteriscas();
    string agente;
    cout << "Qual agente?\n     --";
    cin >> agente;
    cout << agente.name << "\n" << agente.ep << "\n" << agente.bang << "\n" << agente.molly << "\n" << agente.role << "\n" << agente.genre << "\n" << agente.face << "\n" << agente.wall << "\n" << agente.radiant << "\n" << agente.difficulty;
}