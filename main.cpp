/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antônoio Diego <antoniodiegoluz at gmail.com>
 *
 * Created on 18 de julho de 2019, 21:23
 */

#include <cstdlib>
#include <iostream>

using namespace std;

/*
 * 
 */
int main(int argc, char** argv) {
    cout << "Calculadora de transf. PP\n";
    while (true) {
        cout << "Escolha uma opção\n";
        cout << "1. Calcular aplicação de taxas";
        cout << "2. Calcular valor antes de aplicação de taxas";
        int opc;
        cin>>opc;
        double valorTa;
        double valorT;
        double valorD;
        double ve;
        switch (opc) {
            case 1:
                cout << "\nDigite o valor a transferir desejado:";
                cin>>valorT;
                valorTa = valorT - 0.6 - (valorT * (4.79 / 100));
                cout << "\nValor com taxas: " << valorTa;
                break;
            case 2:
                cout << "\nDigite o valor com taxas desejado:";
                valorD;
                cin>>valorD;
                ve = (100 * valorD + 60) / 95.21;
                cout << "\nO valor enviado para que chegue R$ " << valorD << " deverá ser:" << ve;
                break;
            default:
                cout << "Opção inválida!";
                break;
        }
    }

    return 0;
}

