#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "Monster.h"
using namespace std;

istream& operator>>(istream & is, Monster* & M){
    string Name;
    int HealthPoints;
    int Damage;
    cout << "looking at Monster lineup" << endl;
    is >> Name >> HealthPoints >> Damage;
    return is; 
}

ostream& operator<<(ostream & os, Monster * M){
    os << M->_Name << " " << M->_HealthPoints << " " << M->_Damage;
    return os;
}

int main(){
    vector<Monster*> Monsters;
    ifstream fin("//cs1/2022/bmartin22/CS-172-1/GitTest/Monsters.txt");

    if(fin.fail()){
        cout << "Monsters failed to show" << endl;
        return 0;
    }

    cout << "Code Start" << endl;
    Monster* M;
    while(fin >> M){
        Monsters.push_back(M);
        cout << M << endl;
    }
    cout << "Finished" << endl;
}
