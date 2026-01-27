#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>

class Cliente
{
private:
    std::string customerName;
    std::string address;
    std::string email;
    std::string creditcardInfo;
    float accountBalance;

    // Método privado para proteger los datos de la tarjeta
    std::string maskCreditCard(std::string info);

private:
    void saveToFile(); // Nuevo método privado
public:
    Cliente();
    void signup();
    void showInfo();

    // Método para persistencia
    std::string getFormattedData();
};

#endif