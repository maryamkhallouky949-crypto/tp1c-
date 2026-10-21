#include "BankAccount.hpp"

BankAccount::BankAccount() : m_numero("0000"), m_solde(0.0) {}

BankAccount::BankAccount(const std::string& numero, double soldeInitial)
    : m_numero(numero), m_solde(soldeInitial) {}

void BankAccount::deposer(double montant) {
    if (montant > 0) m_solde += montant;
}

bool BankAccount::retirer(double montant) {
    if (montant > 0 && montant <= m_solde) {
        m_solde -= montant;
        return true;
    }
    return false;
}

void BankAccount::afficher() const {
    std::cout << "Compte: " << m_numero << " | Solde: " << m_solde << std::endl;
}

std::string BankAccount::getNumero() const { return m_numero; }
double BankAccount::getSolde() const { return m_solde; }