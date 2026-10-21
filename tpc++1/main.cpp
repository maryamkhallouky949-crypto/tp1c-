#include "BankAccount.hpp"

int main() {
    BankAccount c1("MA-001", 1000);
    c1.afficher();
    c1.deposer(500);
    c1.afficher();
    return 0;
}