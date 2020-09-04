// But: Créer un programme qui affiche un message en sauvgardant plusieurs version de ce programme avec git et l'héberger sur la plateform GitHub
//
//
// Auteur: Jacob Julien
// Date : 2020/09/04

#include <iostream>     //Intègre le coffre à outil pour afficher à l'écran(o out output) ou pour lire sur le clavier(i in input)

int main( /*Liste des paramètres séparés par une virgule le cas échéant*/)
{
	
	//pour corriger les caractères accentués
	setlocale(LC_ALL,"");
	
	
        //affichage du message à l'écran
	std::cout << "Bonjour à tous!";
	
	return 0;
}
