// SETC.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Complex.h"
using namespace std;

int main()
{       
	Complex* C1 = new Complex(8, 2);
	Complex* C2 = new Complex(4, 1);
	double a = 5;
	cout << "les nombres complexes:" << endl;
	C1->afficher();
	C2->afficher();
	cout << "Operateur Addition:" << endl;
	Complex C3 = *C1 + *C2;
	C3.afficher();
	cout << "Operateur Addition avec un double:" << endl;
	C3 = *C1 + a;
	C3.afficher();
	cout << "Operateur Soustraction:" << endl;
	Complex C4 = *C1 - *C2;
	C4.afficher();
	cout << "Operateur Soustraction avec un double:" << endl;
	C4 = *C1 - a;
	C4.afficher();
	cout << "Operateur Multiplication:" << endl;
	Complex C5 = *C1 * *C2;
	C5.afficher();
	cout << "Operateur Multiplication avec un double:" << endl;
	C5 = *C1 * 2;
	C5.afficher();
	cout << "Operateur Division:" << endl;
	Complex C6 = *C1 / *C2;
	C6.afficher();
	if (*C1 == *C2) 
		cout << "les deux nombres complexes sont egaux" << endl;
	else 
		cout << "les deux nombres complexes ne sont pas egaux" << endl;
	if (*C1 > *C2)
		cout << "C1 est superieure a C2" << endl;
	else 
		cout << "C1 est inferieure a C2" << endl;
	delete C1;
	C1 = nullptr;
	delete C2;
	C2 = nullptr;
}
// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer é> Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
