#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

int main(){
    cout << "Qual agente?\n     --";
    caracteriscas();
    agent escolhido = agent_picker();
    agent agente = pega_resposta();
    cout << agente.name << "\n" << agente.ep << "\n" << agente.bang << "\n" << agente.molly << "\n" << agente.role << "\n" << agente.genre << "\n" << agente.face << "\n" << agente.wall << "\n" << agente.radiant << "\n" << agente.difficulty;
}