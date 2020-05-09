// Exercici5.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "BaseEnemy1.h"
#include "EnrageEnemy1.h"
#include "BasePlayer1.h"
using namespace std;





int main()
{
    //declarem totes les variables necessaries
    int opcio;
    float recuperar;
    bool run = false;
    BasePlayer1 pl(15.0f, 3.0f);
    BasePlayer1* punterPlayer = &pl;

    EnrageEnemy1 enemy3(10.0f, 2.0f);
    EnrageEnemy1 boss(15.0f, 4.5f);
    EnrageEnemy1* punterEnemy = &enemy3;


    //comença la aventura de presa de desicions, primer fiquem un bucle per controlar que fins que no es fiqui la opcio correcte no es pugi sortir
    // a part dins del bucle i tenim un if per que no es pugi ficar un numero que no sigui una opcio, en el cas de ficarlo es repeteix la pregunta
    //i a dins de un if, un switch case per les opcions erronies
    cout << "Despertes en una habitacio amb marques de sang  per les parets. Veus dos portes, en una hi posa Llibertat i en l'altre Mort." << endl;
    std::cout << "Quina porta decideixes obrir? Libertat = 1 / Mort = 2";
    std::cin >> opcio;
    while (opcio != 300) {
        if (opcio == 2) {
            cout << "En el moment que entres per la porta et sorpren el que veus: " << endl;
            system("pause");
            cout << "Sobre de la taula hi ha una AK-47, una destral bastant afilada, uns llumins i una Nintendo DS. " << endl;
            system("pause");
            cout << "Amb una nota que hi posa: Agafa el que mes et convingui per sobreviure. " << endl;
            cout << "Que decideixes agafar? AK-47 = 100 / Destral = 200 / Llumins = 300 / DS = 400";
            cin >> opcio;
            switch (opcio) {
            case 100:
                cout << "Agafes la AK-47 i amb tota la seguretat del mon vas cap a la unica sortida possible, un pasadis completament a les fosques. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Notes com algu t'observa. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Notes l'ale d'algu per darrera, i et disposes a girar-te per disparar, pero instantaneament t'han atrevasat el pit amb una llança. " << endl;
                cout << "---------------------THE END-------------------------" << endl;
                system("pause");
                exit(-1);
                break;
            case 200:
                cout << "Agafes la destral i et sent com un viking poderos; Vas cap a la unica sortida possible, un pasadis completament a les fosques. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Notes com algu t'observa. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Seguiexes caminant. " << endl;
                system("pause");
                cout << "Notes l'ale d'algu per darrera, i et disposes a girar-te per rebentar a destrelades a qui sigui, pero  instantaneament t'han atrevasat el pit amb una llança. " << endl;
                cout << "---------------------THE END-------------------------" << endl;
                system("pause");
                exit(-1);
                break;
            case 400:
                cout << "Agafes la Nintendo DS i et fiques a jugar al Super mario 64." << endl;
                system("pause");
                cout << "Seguiexes jugant. " << endl;
                system("pause");
                cout << "T'obres una redbull per disfrutar de la experiencia. " << endl;
                system("pause");
                cout << "Seguiexes jugant. " << endl;
                system("pause");
                cout << "Seguiexes jugant. " << endl;
                system("pause");
                cout << "Estas a punt de lluitar contra en Bowser, quan t'adones que del passadis acaba de sortir una mena de indigena amb una llança. " << endl;
                system("pause");
                cout << "Li tires la Nintendo DS, la cual esquiva amb relativa facilitat. " << endl;
                system("pause");
                cout << "Vas corrents agafar alguna arma, pero l'indigena es mes rapid i ja t'ha empalat. " << endl;
                cout << "---------------------THE END-------------------------" << endl;
                system("pause");
                exit(-1);
                break;

            case 300:
                break;

            default:
                opcio = 2;
                break;
            }



        }
        else if (opcio == 1) {

            cout << "Obres la porta de la Libertat amb cautela i descobreixes que has sortit en el bosc de la teva ciutat." << endl;
            system("pause");
            cout << "No et vols ni imaginar que hagues passat si haguessis anat a la porta de la Mort, pero ets lliure i ja no et preocupa" << endl;
            cout << "---------------------THE END-------------------------" << endl;
            system("pause");
            exit(-1);
        }
        else {
            cout << "Quina porta decideixes obrir? Libertat = 1 / Mort = 2";
            cin >> opcio;
        }
    }
    //continua la aventura, i començen els combats
    cout << "Agafes els llumins i et dirigeixes cap al passadis a les fosques." << endl;
    system("pause");
    cout << "Et fixes que a la paret hi ha una torxa apagada." << endl;
    system("pause");
    cout << "L'encens amb els llumins i el passadis ja no es tan tetric." << endl;
    system("pause");
    cout << "Seguiexes caminant i notes com algu t'observa. " << endl;
    system("pause");
    cout << "I desde davant teu distingueixes un indigena que es disposa a atacar-te. " << endl;
    system("pause");
    run = enemy3.combat(punterPlayer, pl, enemy3);
    //un if i un else per saber si hem perdut tota la vida o hem derrotat al enemic.
    //en cas de haver perdut tota la vida, s'acaba el joc, i el missatge de fi de joc esta incluit en el metode, per estalviar linies de codi
    if (run) {
        enemy3.ReciveHealth(10.0f);
        system("pause");
        cout << "Despres de haber passat aquest mal trago amb el indigena, pensaves que ja havia acabat tot " << endl;
        system("pause");
        cout << "Quina es la teva sorpresa quan et gires i en veus un altre disposat a atacar " << endl;
    }
    else {
        system("pause");
        exit(-1);
    }
    //Exactament igual que l'anterior
    run = enemy3.combat(punterPlayer, pl, enemy3);
    if (run) {
        system("pause");
        cout << "Ja no vols tornar a mirar enrere, i surts corrents cap endevant " << endl;
        system("pause");
        cout << "Fins que et trobes en una bifurcacio. " << endl;
        system("pause");
        cout << "On vols anar, cap a la dreta o cap a la esquerra? Dreta =1 / Esquerra =2 " << endl;
        cin >> opcio;
        recuperar = 15.0f - pl.getLife();
        pl.ReciveHealth(recuperar);
    }
    else {
        system("pause");
        exit(-1);
    }
    system("pause");
    cout << "Just en el moment  que gires en el passadis, notes un crit des de on has vingut. " << endl;
    system("pause");
    cout << "T'esglaia la sang i començes a correr mes rapid que l'Usain Bolt." << endl;
    system("pause");
    cout << "Pero saps que encara esta molt lluny." << endl;
    system("pause");
    cout << "Passats un segons, distinguiexes un donetes tirats al terra." << endl;
    system("pause");
    cout << "Esats famelic, i els menjes mentres corres per no perdre temps." << endl;
    system("pause");
    cout << "Per poc t'ennuegas, pero no." << endl;
    system("pause");
    cout << "Has recuperat tota la vida." << endl;
    system("pause");
    cout << "Vida del restant del player: " << pl.getLife() << endl;
    system("pause");
    cout << "Començes a veure una llum al final del tunel." << endl;
    system("pause");
    cout << "Ja penses en la llibertat." << endl;
    system("pause");
    cout << "Pero una feltxa et passa a 1cm de la cara." << endl;
    system("pause");
    cout << "Et gires i divises un altre indigena, pero mes gran i mes fort." << endl;
    system("pause");
    cout << "Saps que si vols arribar a el que hi hagi despres de la llum, hauras de lluitar" << endl;
    system("pause");
    cout << "I aixi ho fas, et disposes a lluitar" << endl;
    run = enemy3.combat(punterPlayer, pl, boss);
    //igual que l'anterior, pero l'enemic es el boss, mes vida i doble de attack
    if (run) {
        system("pause");
        cout << "Et sents orgullos de haber sobreviscut als atacs de tres indigenas." << endl;
        system("pause");
        cout << "Promets que si surts viu d'aquesta seras millor persona." << endl;
        system("pause");
        cout << "Atraveses la llum, et costa distingiramb claretat el que veus." << endl;
        system("pause");
        cout << "Quan t'has accostumat a la llum diurna, reconeixes on ets. Estas a la entrada del bosc de la teva ciutat" << endl;
        system("pause");
        cout << "No vols saber res mes de el que ha passat i t'envas cagant llets cap a la teva casa." << endl;
        cout << "---------------------THE END-------------------------" << endl;
        system("pause");
        exit(-1);

    }
    else {
        system("pause");
        exit(-1);
    }



    system("pause");

}


// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
