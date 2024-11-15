#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;

class Agent
{
    public:
        /*Nome*/
        string name;
        /*Lançamento*/
        int ep;
        /*Tem bang?*/
        bool bang;
        /*Tem molotov?*/
        bool molly;
        /*Função*/
        string role;
        /*Gênero*/
        string genre;
        /*Acessório na cara*/
        bool face;
        /*Tem parede?*/
        bool wall;
        /*Poderes de radianita*/
        bool radiant;
        /*Dificuldade de jogar*/
        int difficulty;
};
