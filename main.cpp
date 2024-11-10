#include <iostream>
#include "functions.hpp"
using namespace std;

int main(){
    caracteriscas();
    agent escolhido = agent_picker();
    agent agente;
    cout << "Qual agente?\n     --";
    
    cout << agente.name << "\n" << agente.ep << "\n" << agente.bang << "\n" << agente.molly << "\n" << agente.role << "\n" << agente.genre << "\n" << agente.face << "\n" << agente.wall << "\n" << agente.radiant << "\n" << agente.difficulty;
}