#include <iostream>
#include <string>
#include "functions.hpp"
using namespace std;

int main(){
    declaraBoneco();
    agent picked = picker();
    cout << picked.ep << endl;
    cout << picked.bang << endl;
    cout << picked.difficulty << endl;
    cout << picked.genre << endl;
    cout << picked.role << endl;
    cout << picked.radiant << endl;
}