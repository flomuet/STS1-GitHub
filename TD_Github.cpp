#include <iostream>  // Pour utiliser cout et endl
#include "TD_Github.h"

using namespace std;

// Florian :

// Vérifie si une personne est majeure
bool estMajeur(int age) { 
    return age >= 18;  
}

// Calcule l'exposant d'un nombre sans utiliser pow
int exposant(int nbre, int exp) {
    if (exp < 0 || exp > 99) return -1;  // Si l'exposant est invalide, retourne -1
    int resultat = 1;
    for (int i = 0; i < exp; i++) resultat *= nbre;  
    return resultat;
}

// Applique la TVA en fonction du prix
float TVA(int prix) { 
    return prix * (prix >= 1000 ? 1.196 : 1.055);  // 19.6% si >= 1000€, sinon 5.5%
}

// Retourne le plus grand des trois nombres
int plusGrand(int a, int b, int c) {
    return (a > b && a > c) ? a : (b > c ? b : c);  
}

// Vérifie si un nombre est pair ou divisible par 7
bool estPair(int nombre) { 
    return nombre % 2 == 0 || nombre % 7 == 0;  
}

// Calcule le prix après réduction avec une TVA donnée
float reduction(float prix, float tva) { 
    return prix * (1 + tva / 100);  
}

// Calcule la somme des nombres jusqu'à la base et ajoute un nombre supplémentaire
int sommeNombre(int base, int ajout) {
    int somme = 0;
    for (int i = 1; i <= base; i++) somme += i;  
    return somme + ajout;  
}

// Alexandre :

// Fonction qui vérifie si un nombre est pair ou divisible par 7
bool estPair(int n) {
    return (n % 2 == 0) || (n % 7 == 0);
}

// Fonction qui calcule la somme d'un nombre et de tous ses prédécesseurs, puis ajoute n à la fin
int sommeNombre(int n) {
    int somme = 0;
    for (int i = 1; i <= n; i++) {
        somme += i;
    }
    return somme + n;
}

// Fonction qui calcule le salaire net à partir du salaire brut
float salaireNet(float salaireBrut) {
    float net = salaireBrut * (1 - 0.23);
    float prime = net * 0.12;
    return net + prime;
}

// Fonction qui retourne le plus petit de trois nombres
int plusPetit(int a, int b, int c) {
    return (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
}




int main() {
    // Test des fonctions avec des valeurs exemples
    cout << estMajeur(20) << " "; 
    cout << exposant(2, 5) << " "; 
    cout << TVA(1500) << " "; 
    cout << plusGrand(5, 8, 3) << " "; 
    cout << estPair(14) << " "; 
    cout << reduction(100, 10) << " "; 
    cout << sommeNombre(5, 3) << endl;
    return 0;
}
