#include "../include/Cliente.h"
#include <vector>
#include <iostream>

int main()
{
    std::vector<Cliente> listaClientes;
    char continuar;

    do
    {
        Cliente nuevoCliente;
        nuevoCliente.signup();
        listaClientes.push_back(nuevoCliente);

        std::cout << "\n¿Desea registrar otro cliente? (s/n): ";
        std::cin >> continuar;
    } while (continuar == 's' || continuar == 'S');

    std::cout << "\n--- Resumen de Registros ---" << std::endl;
    for (auto &c : listaClientes)
    {
        c.showInfo();
    }

    return 0;
}