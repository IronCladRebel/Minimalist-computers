#include "Error.h"
#include "Computational_implementation.h"
#include <fstream> // Add this include to resolve the ofstream issues

void Error()
{
    M_Computational_implementation m_computational_implementation;

    std::ifstream File("Error.txt");
    if (File.is_open()) {
        std::cout << "Error, you enter nothing or something else" << std::endl;
        std::cout << "The error is sent to the Error.txt and the program is automatically repairing" << std::endl;
        File.close();
    }
    else {
        std::cerr << "Unable to open Error.txt" << std::endl;
    }
}