#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "Monster.h"
using namespace std;

istream& operator>>(istream & is, Monster* & M){
    string Name;
    int HealthPoints;
    int Damage;
    int ArmorClass;
    //cout << "looking at Monster lineup" << endl;
    is >> Name >> HealthPoints >> Damage >> ArmorClass;
    M = new Monster(Name, HealthPoints, Damage, ArmorClass);
    return is; 
}

ostream& operator<<(ostream & os, Monster * M){
    os << M->_Name << " " << M->_HealthPoints << " " << M->_Damage << " " << M->_ArmorClass;
    return os;
}

int main(){
    srand(time(NULL));

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

    cout << "Pick two monsters now" << endl;
    
    int index;
    cout << "what number do you want?" << endl;
    cin >> index;
    cout << Monsters.at(index);
    
    cout << "\nPick another one" << endl;
    int index2;
    cin >> index2;
    cout << Monsters.at(index);

    cout << "\nARE YOU READY TO RUMBLE!!!!" << endl;

    // while(Monsters[index]._HealthPoints > 0 || Monsters[index2]._HealthPoints > 0){
        
    // }
}
