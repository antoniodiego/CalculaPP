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

    while (true) {
        cout << "\nDigite o valor a transferir desejado:";
        double valorD;
        cin>>valorD;
        double ve = (100 * valorD + 60) / 95.21;
        cout << "\nO valor enviado para que chegue R$ "<<valorD<<" deverá ser:" << ve;
    }

    return 0;
}

