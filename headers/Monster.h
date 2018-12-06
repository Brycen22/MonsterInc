#ifndef _Monster_H_
#define _Monster_H_
#include <string>
using namespace std;

class Monster{
protected:
    string _Name;
    int _HealthPoints;
    int _Damage;
    int _ArmorClass;

public:
    Monster(string Name, int HealthPoints, int Damage, int ArmorClass){_Name = Name; _HealthPoints = HealthPoints; _Damage = Damage; _ArmorClass = ArmorClass;}
    string Name(){return _Name;}
    int HealthPoints(){return _HealthPoints;}
    int Damage(){return _Damage;}
    int ArmorClass(){return _ArmorClass;}
    friend istream& operator>>(istream & is, Monster* & M);
    friend ostream& operator<<(ostream & os, Monster * M);
};

#endif