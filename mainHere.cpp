#include <iostream>

// 22/04/2026, wednesday, forgot to put time again.
// but its 11:27am, and 24 celcius.
// finished at 12:12pm

using namespace std;
int x = 25;
int y = 11;
char ambientSymbol = '*';
char playerSymbool = 'O';

int moveSpeed = 1;
int screenSize = 75;
int yLimit = 20;


void displayScene(){
	
	cout << "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ \n";

    for(int acy = 1; acy <= yLimit; acy++){
	
	    for(int acx = 1; acx <= screenSize; acx++){ // ac no inicio e de ACTUAL
			
			if(acx == x && acy == y){
				cout << playerSymbool;
				continue;
			}
			cout << ambientSymbol;
			
	    } 
		if(acy == 1){cout << x;}
		else if(acy == 2){cout << y;}
		cout << '\n';
		
	}
	
	cout << "/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\/\ \n";

}

void movement(string direction){

	if(y > 1 && (direction == "w" || direction == "W")){y -= moveSpeed;}
	else if(y < yLimit && (direction == "s" || direction == "S")){y += moveSpeed;}
	else if(x > 1 && (direction == "a" || direction == "A")){x -= moveSpeed;}
	else if(x < screenSize && (direction == "d" || direction == "D")){x += moveSpeed;}
	
	
}

int main(){

	string input;

	while(true){

		cout << "Move (WASD)\n";
		getline(cin >> ws, input);
		input = input.at(0);

		movement(input);

		displayScene();

	}

}
