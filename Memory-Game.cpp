#include <iostream>
using namespace std;

int display(){
	int vrijednost;
	cout << "\nSto pise na Display-u: ";
	cin >> vrijednost;
	return vrijednost;
}

int memory[2][4]; //tablica

int pozicija(int display, int serija){
	switch(serija){

		case 0: {
			switch(display){
				case 1: 
				case 2: cout << "Pritisni gumb na drugoj poziciji!"; return 2; break;
				case 3: cout << "Pritisni gumb na treæoj poziciji!"; return 3; break;
				case 4: cout << "Pritisni gumb na èetvrtoj poziciji!"; return 4; break;
							}
		break;
				}

		case 1: {
			switch(display){
				case 1: cout << "Pritisni gumb na kojemu pise èetiri!"; memory[2][1] = 4; return 0; break; //UVJETNA
				case 2: printf("Gumb na %d poziciji!", memory[1][0]); return memory[1][0]; break;
				case 3: cout << "Pritisni gumb na prvoj poziciji!"; return 1; break;
				case 4: printf("Gumb na %d poziciji!", memory[1][0]); return memory[1][0]; break;
							}
		break;
				}

		case 2: {
			switch(display){
				case 1: printf("Gumb na kojemu pise %d!", memory[2][1]); memory[2][2] = memory[2][1]; return 0; break; //UVJETNA
				case 2: printf("Gumb na kojemu pise %d!", memory[2][0]); memory[2][2] = memory[2][0]; return 0; break; //UVJETNA
				case 3: cout << "Pritisni gumb na prvoj poziciji!"; return 1; break;
				case 4: cout << "Pritisni gumb na kojemu pise èetiri!"; memory[2][2] = 4; return 0; break; //UVJETNA
							}
		break;
				}

		case 3: {
			switch(display){
				case 1: printf("Gumb na %d poziciji!", memory[1][0]); return memory[1][0]; break;
				case 2: cout << "Pritisni gumb na prvoj poziciji!"; return 1; break;
				case 3: 
				case 4: printf("Gumb na %d poziciji!", memory[1][1]); return memory[1][1]; break;
							}
		break;
				}
				
		case 4: {
			switch(display){
				case 1: printf("Gumb na kojemu pise %d!", memory[2][0]); memory[2][4] = memory[2][0]; return 0; break; //UVJETNA
				case 2: printf("Gumb na kojemu pise %d!", memory[2][1]); memory[2][4] = memory[2][1]; return 0; break; //UVJETNA
				case 3: printf("Gumb na kojemu pise %d!", memory[2][2]); memory[2][4] = memory[2][2]; return 0; break; //UVJETNA
				case 4: printf("Gumb na kojemu pise %d!", memory[2][3]); memory[2][4] = memory[2][3]; return 0; break; //UVJETNA
							}
		break;
				}
				}
	
}

int vrijednost(){
	int value;
	cout << "\nVrijednost gumba: ";
	cin >> value;
	return value;
}
int main(){
	
	cout << "------------------------------\n"
		<< " Keep talking and nobody dies!\n"
		<< "------------------------------\n"
		<< "    Memory minigame solver	\n"
		<< "	Made by Jelena	\n"
		<< "------------------------------\n";
	
	for (int i=0; i<5; i++){
		memory[0][i] = display();
		memory[1][i] = pozicija(memory[0][i], i);
		if (memory[1][i] == 0){
			cout << "\nPozicija na kojoj je gumb bio: ";
			cin >> memory[1][i];
		}
		else{
		memory[2][i] = vrijednost();
		}
	}
	cout << "\nYou're done bitch! :D\n";
	system("pause");
	return 0;
}
