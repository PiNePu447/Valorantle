#include "functions.hpp"

int main(){
    caracteriscas();
    
    Agent escolhido = agent_picker();
    cout << escolhido.name << endl;

    cout << "Qual agente?\n     --";
    Agent resp = pega_resposta();

    int life = 5, tentativas = 0;

    while (tentativas < life)
    {
        tentativas++;

        if (resp.name != escolhido.name){
            cout << "Errou perdeu uma vida" << endl;
            // tem q ter um jeito melhor de fazer essa merda
            if (resp.ep == escolhido.ep)
            {
                cout << "Lancou no msm ep" << endl;
            }else{
                cout << "Errou o ep" << endl;
            }
            resp = pega_resposta();
            //agente.ep agente.bang agente.molly agente.role agente.genre agente.face agente.wall agente.radiant agente.difficulty
        }else{
            cout << "ACERTOU!!!!!!!!!\n ERA MESMO O(A) " << escolhido.name;
            break;
        }
    }
    cout << endl << "teste se para o while";
}

//cout << agente.name << "\n" << agente.ep << "\n" << agente.bang << "\n" << agente.molly << "\n" << agente.role << "\n" << agente.genre << "\n" << agente.face << "\n" << agente.wall << "\n" << agente.radiant << "\n" << agente.difficulty;
