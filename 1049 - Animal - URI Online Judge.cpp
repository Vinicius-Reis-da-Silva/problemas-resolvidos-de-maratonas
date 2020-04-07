#include<iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL,"Portuguese");

	string animal[3];

	cin >> animal[0] >> animal[1] >> animal[2];

	if(animal[0] == "vertebrado"){

        if(animal[1] == "ave"){

            if(animal[2] == "carnivoro"){
                cout << "aguia\n";
            }
            if(animal[2] == "onivoro"){
                cout << "pomba\n";
            }

        }else if(animal[1] == "mamifero"){

            if(animal[2] == "onivoro"){
                cout << "homem\n";
            }
            if(animal[2] == "herbivoro"){
                cout << "vaca\n";
            }

        }

	}else if(animal[0] == "invertebrado"){

        if(animal[1] == "inseto"){

            if(animal[2] == "hematofago"){
                cout << "pulga\n";
            }
            if(animal[2] == "herbivoro"){
                cout << "lagarta\n";
            }

        }else if(animal[1] == "anelideo"){

            if(animal[2] == "hematofago"){
                cout << "sanguessuga\n";
            }
            if(animal[2] == "onivoro"){
                cout << "minhoca\n";
            }

        }

	}
	return 0;
}
