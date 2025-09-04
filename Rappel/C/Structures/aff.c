#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char nom[50];
    int age;
    float moyenne;
} Etudiant;

void afficherEtudiant(Etudiant *e) {
    printf("Nom : %s | Age : %d | Moyenne : %.2f\n", e->nom, e->age, e->moyenne);
}

int main() {
    Etudiant classe[3] = {
        {"Alice", 20, 15.5},
        {"Bob", 22, 14.3},
        {"Charlie", 19, 16.7}
    };

    // Afficher le 2e étudiant (classe[1])
    afficherEtudiant(&classe[1]);
    
    // Taille struct
    size_t n = sizeof(classe) / sizeof(classe[0]); 

    // Tu peux même afficher toute la classe en boucle
    printf("\n-- Toute la classe ---\n");
    for (int i = 0; i < n; i++) {
        afficherEtudiant(&classe[i]);
    }

    return 0;
}