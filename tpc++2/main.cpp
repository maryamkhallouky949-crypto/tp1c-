#include "Library.hpp"

int main() {
    Library biblio;
    biblio.ajouterLivre(Book("Le Petit Prince", "Saint-Exupery", "ISBN-001", 1943));
    biblio.ajouterLivre(Book("1984", "George Orwell", "ISBN-002", 1949));

    std::cout << "--- Catalogue ---" << std::endl;
    biblio.listerLivres();

    std::cout << "\n--- Recherche ISBN-001 ---" << std::endl;
    const Book* b = biblio.trouverParISBN("ISBN-001");
    if (b) b->afficher();
    else std::cout << "Non trouve" << std::endl;

    return 0;
}