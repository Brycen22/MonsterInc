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

int main(){
    vector<Monster*> Monsters;
    ifstream fin("//cs1/2022/bmartin22/CS-172-1/Final_project/Monsters.txt");

    if(fin.fail()){
        cout << "Monsters failed to show" << endl;
        return 0;
    }

    cout << "Code Start" << endl;
    Monster* M;
    while(fin >> M){
        cout << M << endl;
        Monsters.push_back(M);
    }
    cout << "Finished" << endl;
}
