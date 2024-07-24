// Simulateur_banque.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>

using namespace std;

class CompteBancaire {
private:
    string nom;
    double solde;

public:
    CompteBancaire(): nom(""), solde(0.0) {}

    CompteBancaire(string nom, double solde_initial) {
        nom = nom;
        solde = solde_initial;
    }
};

class Banque {
private:
    //CompteBancaire compte[];
    int compteur;

public:
    Banque (): compteur(0){}

    void creerCompte( string nom, double solde_initial) {
        cout << "Entrer le nom du proprietaire du compte:";
        cin >> nom;
        cout << "Quel est votre premier solde?" << endl;
        cout << "Premier solde:";
        cin >> solde_initial;
        compteur++;
    }

};

int main()
{
    int n;

    cout << "Combien de compte voulez-vous creer?" << " ";
    cin >> n ;
    Banque banque;

    for (int i = 0; i < n; i++) {
        banque.creerCompte("", 0);
    }
   
}
