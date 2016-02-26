#include <iostream>
using namespace std;
int broj_zica(){
	int broj;
	cout << "Koliko je zica: ";
	cin >> broj;
	return broj;
}

void tri(){
	char ima;
	cout << "Ima li crvenih zica (d/n): ";
	cin >> ima;
	if (ima == 'd') cout << "Presijeci drugu zicu!\n";
	else{
		cout << "Je li zadnja zica bijela (d/n): ";
		cin >> ima;
		if (ima == 'd') cout << "Presijeci zadnju zicu!\n";
		else{
			cout << "Ima li više od jedne plave zice (d/n): ";
			cin >> ima;
			if (ima == 'd') cout << "Presijeci zadnju plavu zicu!\n";
			else cout << "Presijeci zadnju zicu!\n";
		}
	}
}
void cetiri(){
	char ima;
	cout << "Ima li vise od jedne crvene zice i je li zadnja znamenka seriala neparna (d/n): ";
	cin >> ima;
	if (ima == 'd') cout << "Presijeci crvenu zicu!\n";
	else{ 
		cout << "Je li zadnja zica zuta i je li NEMA crvenih zica: (d/n): ";
		cin >> ima;
		if (ima == 'd') cout << "Presijeci prvu zicu!\n";
			else{
				cout << "Ima li vise od jedne zute zice (d/n): ";
				cin >> ima;
				if (ima == 'd') cout << "Presijeci zadnju zicu!\n";
					else cout << "Presijeci drugu zicu!\n";
			}
	}
}
void pet(){
	char ima;
	cout << "Je li zadnja zica crna i zadnja znamenka seriala neparna (d/n): ";
	cin >> ima;
	if (ima == 'd') cout << "Presijeci cetvrtu zicu!\n";
	else{ 
		cout << "Ima li tocno jedna crvena zica i ima li vise od jedne zute zice: (d/n): ";
		cin >> ima;
		if (ima == 'd') cout << "Presijeci prvu zicu!\n";
			else{
				cout << "Ima li crnih zica (d/n): ";
				cin >> ima;
				if (ima == 'n') cout << "Presijeci zadnju zicu!\n";
					else cout << "Presijeci prvu zicu!\n";
			}
	}
}
void sest(){
	char ima;
	cout << "Je li NEMA zutih zica, je li zadnja znamenka seriala neparna (d/n): ";
	cin >> ima;
	if (ima == 'd') cout << "Presijeci trecu zicu!\n";
	else{ 
		cout << "Ima li tocno jedna zuta zica i vise od jedne bijele: (d/n): ";
		cin >> ima;
		if (ima == 'd') cout << "Presijeci cetvrtu zicu!\n";
			else{
				cout << "Ima li crvenih zica (d/n): ";
				cin >> ima;
				if (ima == 'n') cout << "Presijeci zadnju zicu!\n";
					else cout << "Presijeci cetvrtu zicu!\n";
			}
	}
}
int main(){
	int broj = broj_zica();
	switch(broj){
		case 3: tri(); break;
		case 4: cetiri(); break;
		case 5: pet(); break;
		case 6: sest(); break;
	}
	cout << "Gotovo!\n";
	system("pause");
	return 0;
}
