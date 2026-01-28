# Client Management System (C++)

Sistema básico de gestión de clientes desarrollado en C++ utilizando Programación Orientada a Objetos (POO).

## Características
- **Encapsulamiento:** Uso de clases y miembros privados para proteger la integridad de los datos.
- **Validación de Datos:** Control de errores en la entrada de saldos para evitar fallos de ejecución.
- **Seguridad:** Implementación de enmascaramiento de información sensible (tarjetas de crédito).
- **Escalabilidad:** Uso de contenedores dinámicos (`std::vector`) para manejar múltiples registros.

## Tecnologías
- C++ 11 o superior.
- Estándar de archivos modular (.h / .cpp).


  # Client Management System (C++)

A robust terminal-based client management application developed in C++ using Object-Oriented Programming (OOP) principles.

## Key Features
- **Encapsulation:** Utilization of classes and private members to ensure data integrity.
- **Data Validation:** Implemented error handling for numeric inputs to prevent execution crashes.
- **Security:** Integrated sensitive data masking for credit card information to demonstrate security best practices.
- **Data Persistence:** Automated data backup to flat files (`.txt`) using the `fstream` library, ensuring information is preserved across sessions.
- **Scalability:** Managed multiple user records dynamically using `std::vector`.

## Technical Stack
- **Language:** C++11 or higher.
- **Architecture:** Modular file structure (`.h` headers / `.cpp` implementation).
- **Libraries:** `<iostream>`, `<fstream>`, `<vector>`, `<string>`.

## Installation & Usage
1. Clone the repository.
2. Compile using G++:
   `g++ -o ClientSystem src/*.cpp -I include`
3. Run the executable:
   `./ClientSystem`
