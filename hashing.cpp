#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<vector>

using namespace std;

int main(){
	
	string linha,linha0,linha1,linha2,linha3,linha4;
	int num,resto,op,sw,swp;
	vector<int> aux;
	fstream myfile0, myfile1, myfile2, myfile3, myfile4;
	
	cout<<"Digite 1 para inserir e 2 para mostrar: ";
	cin>>sw;
	system("cls");
	
	do{
	
	switch(sw){
	
	case 1:
	
//	do{
			cout<<"DIGITE UM NUMERO: ";
			cin>>num;
			resto=num%5;
	
		if(resto==0){
			myfile0.open("balde0.txt", ios::in);
			if(myfile0.is_open()){
				while(getline(myfile0,linha)){
					int a = atoi(linha.c_str());
					aux.push_back(a);
					if(num==a){
						cout<<"\nNumero ja inserido"<<endl;
						return 0;
					}
				}
			}
			myfile0.close();
		}
		
		if(resto==1){
			myfile1.open("balde1.txt", ios::in);
			if(myfile1.is_open()){
				while(getline(myfile1,linha)){
					int a = atoi(linha.c_str());
					aux.push_back(a);
					if(num==a){
						cout<<"\nNumero ja inserido"<<endl;
						return 0;
					}
				}
			}
			myfile1.close();
		}
		
		if(resto==2){
			myfile2.open("balde2.txt", ios::in);
			if(myfile2.is_open()){
				while(getline(myfile2,linha)){
					int a = atoi(linha.c_str());
					aux.push_back(a);
					if(num==a){
						cout<<"\nNumero ja inserido"<<endl;
						return 0;
					}
				}
			}
			myfile2.close();
		}
		
		if(resto==3){
			myfile3.open("balde3.txt", ios::in);
			if(myfile3.is_open()){
				while(getline(myfile3,linha)){
					int a = atoi(linha.c_str());
					aux.push_back(a);
					if(num==a){
						cout<<"\nNumero ja inserido"<<endl;
						return 0;
					}
				}
			}
			myfile3.close();
		}
		
		if(resto==4){
			myfile4.open("balde4.txt", ios::in);
			if(myfile4.is_open()){
				while(getline(myfile4,linha)){
					int a = atoi(linha.c_str());
					aux.push_back(a);
					if(num==a){
						cout<<"\nNumero ja inserido"<<endl;
						return 0;
					}
				}
			}
			myfile4.close();
		}

		if(resto==0){	
			myfile0.open("balde0.txt", ios::app);
			myfile0<<num<<endl;
			cout<<"Add no balde 0"<<endl<<endl;
		}
		myfile0.close();	
	
		if(resto==1){
			myfile1.open("balde1.txt", ios::app);
			myfile1<<num<<endl;
			myfile1.close();
			cout<<"Add no balde 1"<<endl<<endl;	
		}	
		myfile1.close();
	
		if(resto==2){
			myfile2.open("balde2.txt", ios::app);
			myfile2<<num<<endl;
			cout<<"Add no balde 2"<<endl<<endl;
		}	
		myfile2.close();
	
		if(resto==3){
			myfile3.open("balde3.txt", ios::app);
			myfile3<<num<<endl;
			cout<<"Add no balde 3"<<endl<<endl;
		}	
		myfile3.close();
			
		if(resto==4){
			myfile4.open("balde4.txt", ios::app);
			myfile4<<num<<endl;
			cout<<"Add no balde 4"<<endl<<endl;
		}
		myfile4.close();	
	
		cout<<"DIGITE 1 PARA CONTINUAR OU 0 PARA SAIR: "<<endl;
		cin>>op;
		
		system("cls");
//	}
//	while(op==1);
//
//	if(op==0){
//		return 0;
//	}
	
	break;
	
	case 2:
		
		cout<<"Digite o numero do balde que quer mostrar(entre 0 e 4): ";
		cin>>swp;
		system("cls");
		
		switch(swp){
			
			case 0:
				
			cout<<"Balde 0:\n\n";
			
			myfile0.open("balde0.txt");
			if(myfile0.is_open()){
				while(getline(myfile0,linha0)){
					cout<<linha0<<endl;			
				}	
			}
			myfile0.close();
			break;
			
			case 1:
	
			cout<<"Balde 1:\n\n";
	
			myfile1.open("balde1.txt");
			if(myfile1.is_open()){
				while(getline(myfile1,linha1)){
					cout<<linha1<<endl;			
				}	
			}
			myfile1.close();
			break;
		
			case 2:
	
			cout<<"Balde 2:\n\n";
	
			myfile2.open("balde2.txt");
			if(myfile2.is_open()){
				while(getline(myfile2,linha2)){
					cout<<linha2<<endl;			
				}	
			}
			myfile2.close();
			break;
		
			case 3:
	
			cout<<"Balde 3:\n\n";
	
			myfile3.open("balde3.txt");
			if(myfile3.is_open()){
				while(getline(myfile3,linha3)){
					cout<<linha3<<endl;			
				}	
			}
			myfile3.close();
			break;
			
			case 4:
	
			cout<<"Balde 4:\n\n";
	
			myfile4.open("balde4.txt");
			if(myfile4.is_open()){
				while(getline(myfile4,linha4)){
					cout<<linha4<<endl;			
				}	
			}
			myfile4.close();
			break;
		
		}
		//	}
	while(op==1);

	if(op==0){
		return 0;
	}

	system("pause");
	return 0;
	}
}

// Aluno: Matheus Cezar de Souza
