#include "Book.hpp"

Book::Book() : m_titre("Inconnu"), m_auteur("Inconnu"), m_isbn("0000"), m_annee(0) {}

Book::Book(const std::string& titre, const std::string& auteur,
           const std::string& isbn, int annee)
    : m_titre(titre), m_auteur(auteur), m_isbn(isbn), m_annee(annee) {}

std::string Book::getTitre() const { return m_titre; }
std::string Book::getAuteur() const { return m_auteur; }
std::string Book::getISBN() const { return m_isbn; }
int Book::getAnnee() const { return m_annee; }

void Book::afficher() const {
    std::cout << "[" << m_isbn << "] " << m_titre 
              << " par " << m_auteur << " (" << m_annee << ")" << std::endl;
}