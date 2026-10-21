#include "Library.hpp"

void Library::ajouterLivre(const Book& livre) {
    m_livres.push_back(livre);
}

const Book* Library::trouverParISBN(const std::string& isbn) const {
    for (const auto& livre : m_livres) {
        if (livre.getISBN() == isbn) {
            return &livre;
        }
    }
    return nullptr;
}

void Library::listerLivres() const {
    if (m_livres.empty()) {
        std::cout << "Catalogue vide." << std::endl;
        return;
    }
    for (const auto& livre : m_livres) {
        livre.afficher();
    }
}