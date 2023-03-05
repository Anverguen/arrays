#include<iostream>
#include<algorithm>

using namespace std;

int main(void){
	
	int taille ;
	
	int t[] = {12, -2, 34, 63, -31, 5};
			
	taille = sizeof(t)/sizeof(t[0]);
	int temp;
	bool isChange(false);
	
cout << "Voici les valeurs dans desordre: ";
			
	for(int i=0; i< taille; i++) cout << t[i] << "  ";
		cout <<  endl;
		
	//Mettre en ordre les valeurs
		
		do {
			isChange = false;			
				for(int i=0; i<taille; i++){
					cout << "Valor de i: " << i<< endl;
					
					if(t[i] > t[i+1]){// Compare avec le souvient
						
						temp = t[i]; //stocke sa valeur de facon temporel dans la variable temp
						cout << "Debugging: temp: " << temp << endl;
					//	system("pause");
						t[i] = t[i+1];
						t[i +1] = temp;
						isChange = true;						
					}					
				}			
		
			}while(isChange);
			
//	cout << "Voici les valeurs dans l'ordre: ";
	
	
	int temporal[6];
	copy_n(t,6,temporal);
			
	for(int i=0; i< taille; i++) cout << temporal[i] << "  ";
		cout <<  endl;		
	
	return 0;
}

