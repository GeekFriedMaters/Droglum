// Droglum.cpp 
// DROGUM (v0.7a) The Text Based Horror Adventure Game!
// Here you can find the code to downloadand run the DROGLUM horror adventure game!

// Run this video game program in Visual Studio Code !

#include <iostream> 
#include <string> 
using namespace std; 
void displayIntro() { 
cout << "DROGLUM" << endl; 
cout << "   " << endl;
cout << "You find yourself in a dark, mysterious forest. Surrounded by Droglum..." << endl; 
} 

void displayMenu() { 
cout << "\nWhat would you like to do?" << endl; 
cout << "1. Go North" << endl; 
cout << "2. Go South" << endl; 
cout << "3. Go East" << endl; 
cout << "4. Go West" << endl; 
cout << "5. Quit" << endl; 
} 

void processInput(int choice) { 
switch (choice) {
case 1: cout << "You head North and encounter a wild wood Droglum!  It smiles, and asks if you want to watch Cat & Drog" << endl; break; 
case 2: cout << "You head South and find a sky Droglum!  It flys away." << endl; break; 
case 3: cout << "You head East and discover a Werewolf.  It sniffs you.  You are in danger... " << endl; break; 
case 4: cout << "You head West and stumble upon Pyramids.  What are they doing here?" << endl; break; 
case 5: cout << "Thanks for playing. Goodbye!" << endl; break; 
default: cout << "Invalid choice. Please try again." << endl; break; 
} 
} 

int main() { 
	int choice; displayIntro(); 
	while (true) { 
		displayMenu(); cin >> choice; 
		if (choice == 5) { processInput(choice); break; 
		} 
		else { processInput(choice); 
		} 
	} 
	return 0;
