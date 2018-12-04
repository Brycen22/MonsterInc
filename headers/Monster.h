#ifndef _Monster_H_
#define _Monster_H_
#include <string>
using namespace std;

class Monster{
protected:
    string _Name;
    int _HealthPoints;
    int _Damage;

public:
    Monster(string Name, int HealthPoints, int Damage){_Name = Name; _HealthPoints = HealthPoints; _Damage = Damage;}
    string Name(){return _Name;}
    int HealthPoints(){return _HealthPoints;}
    int Damage(){return _Damage;}
    friend istream& operator>>(istream & is, Monster* & M);
    friend ostream& operator<<(ostream & os, Monster * M);
};

#endif