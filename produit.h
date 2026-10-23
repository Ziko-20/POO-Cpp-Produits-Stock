#ifndef PRODUIT_H   
#define PRODUIT_H 
#include <iostream>
#include <string>
#include <vector>
using namespace std;



class produit{

    string nom;
    
    vector<double> prix;

public:
void saisir();
void afficher();
void moyenne();
void pgpt();
void affichageValeurPosition();
void ajouter();
void supp();

};

#endif