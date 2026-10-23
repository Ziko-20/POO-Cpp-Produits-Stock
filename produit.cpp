
#include <iostream>
#include <string>
#include "produit.h"

using namespace std;


void produit::saisir(){
    int x,ss;
    cout<<"entere le nom : "<<endl;
    cin>>nom;

        cout<<"combien de prix vous allez saisir ? :";
        cin>>ss;
        for(int i=0;i<ss;i++){
             cout<<"entere le prix du produit   : "<<endl;
        cin>>x;
        prix.push_back(x);
        }
       


     
}

void produit::afficher(){

    cout<<"le nom est : "<<nom<<" le prix est : "<<endl;

    if(prix.empty()){
        cout<<"vide";
    }else{  
    for(int i=0;i<prix.size();i++){

        cout<<"prix :"<<prix[i]<<endl;
    }
}
}
void produit::moyenne(){
    int x=0;
    double resultat,somme=0;
    x=prix.size();
    


    for(int i=0;i<x;i++){
        somme +=prix[i];
    }
    resultat=somme/x;
    cout<<"la moyenne  est : "<<resultat<<endl;
    
}

void produit::pgpt(){

    double pg_prix=prix[0],pt_prix=prix[0];

     if (prix.empty()) {

        cout << "aucun prix disponible"<<endl;
        
    }

    for(int i=0;i<prix.size();i++){

        

        if (prix[i]>pg_prix){
            pg_prix=prix[i];
        }
        
        if(prix[i]<pt_prix){
            pt_prix=prix[i];
        }
    }
    cout<<"le plus petit prix est : "<<pt_prix<<endl;
    cout<<"le plus grand prix est : "<<pg_prix<<endl;

}

void produit::affichageValeurPosition(){
    double X ;
    cout<<"rentrer le nbr que vous voulez afficher : "<<endl;
    cin>>X;

    for(int i=0;i<prix.size();i++){
        if(prix[i]==X){
            cout<<"le nombre est : "<<prix[i]<<" et sa position est : "<<i<<endl;
        }
    }
}

void produit::ajouter(){
    double nbr;
    cout<<"quellez le nbr que vous souhaiter ajouter : "<<endl;
    cin>>nbr;
    if(nbr==0){
        cout<<"!!!!!!!!!!!!!entrer une valeur pas 0 !!!!!!!!!!"<<endl;
        
        }else{
        prix.push_back(nbr);
    }

}


void produit::supp(){
    double X ;
    cout<<"rentrer le nbr que vous voulez supprimer : "<<endl;
    cin>>X;

    for(int i=0;i<prix.size();i++){
        if(prix[i]==X){
           prix.erase(prix.begin()+i);
        }
    }
}