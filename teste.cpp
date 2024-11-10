#include <iostream>
#include "functions.hpp"
using namespace std;

int main(){
    caracteriscas();
    agent picked = agent_picker();
    string resposta;

    cout << picked.name;  
}
