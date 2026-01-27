#include "../include/Cliente.h"
#include <iostream>
#include <fstream>
#include <limits>

using namespace std;

Cliente::Cliente() : accountBalance(0.0) {}

string Cliente::maskCreditCard(string info)
{
    if (info.length() <= 4)
        return info;
    return "**** **** **** " + info.substr(info.length() - 4);
}

void Cliente::signup()
{
    cout << "\n--- Formulario de Registro ---" << endl;
    cout << "Nombre Completo: ";
    cin >> ws;
    getline(cin, customerName);

    cout << "Direccion: ";
    getline(cin, address);

    cout << "Email: ";
    getline(cin, email);

    cout << "Info Tarjeta: ";
    getline(cin, creditcardInfo);

    while (true)
    {
        cout << "Saldo Inicial: ";
        if (cin >> accountBalance)
            break;
        else
        {
            cout << "Error: Ingrese un valor numerico." << endl;
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }
    }

    saveToFile();
}

void Cliente::saveToFile()
{
    // Abrimos el archivo en modo "append" (añadir al final)
    ofstream archivo("database.txt", ios::app);

    if (archivo.is_open())
    {
        archivo << "Nombre: " << customerName << " | "
                << "Email: " << email << " | "
                << "Saldo: " << accountBalance << endl;
        archivo.close();
        cout << "[SISTEMA]: Datos respaldados en database.txt correctamente." << endl;
    }
    else
    {
        cout << "[ERROR]: No se pudo abrir la base de datos." << endl;
    }
}

void Cliente::showInfo()
{
    cout << "\n================================" << endl;
    cout << "PERFIL DE USUARIO: " << customerName << endl;
    cout << "Email: " << email << endl;
    cout << "Direccion: " << address << endl;
    cout << "Tarjeta: " << maskCreditCard(creditcardInfo) << endl;
    cout << "Saldo: $" << accountBalance << endl;
    cout << "================================" << endl;
}