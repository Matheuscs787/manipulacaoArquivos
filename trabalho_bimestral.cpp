#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
	string nome1,nome2,nome3,linha,lindice;
	int chave1,chave2,chave3,chaves[3];
	fstream arquivo1,arquivo2,arquivo3,indices;
	int dig,op;
	vector<int> ind;
	
		indices.open("indices.txt",ios::app);
		arquivo1.open("2 à 3 caracteres.txt",ios::app);
		arquivo2.open("4 à 6 caracteres.txt",ios::app);
		arquivo3.open("mais de 6 caracteres.txt",ios::app);
	cout<<"Digite o nome desejado:"<<endl;
	cout<<"Nome: ";
	cin>>nome1;
	chave1=nome1.size();
	ind.push_back(chave1);
	
	
	
	cout<<"NOME: "<<nome1<<" CHAVE: "<<chave1<<endl<<endl;
	if(chave1>1&&chave1<=3){
	arquivo1<<nome1<<endl;	
	}
	if(chave1>3&&chave1<7){
	arquivo2<<nome1<<endl;
	}	
	if(chave1>7){
	arquivo3<<nome1<<endl;
	}
	
	cout<<"Digite o nome desejado:"<<endl;
	cout<<"Nome: ";
	cin>>nome2;
	chave2=nome2.size();
	ind.push_back(chave2);
	cout<<"NOME: "<<nome2<<" CHAVE: "<<chave2<<endl<<endl;
	if(chave2>1&&chave2<3){
	arquivo1<<nome2<<endl;	
	}
	if(chave2>3&&chave2<7){
	arquivo2<<nome2<<endl;
	}	
	if(chave2>7){
	arquivo3<<nome2<<endl;
	}
	
	
	cout<<"Digite o nome desejado:"<<endl;
	cout<<"Nome: ";
	cin>>nome3;
	chave3=nome3.size();
	ind.push_back(chave3);
	cout<<"NOME: "<<nome3<<" CHAVE: "<<chave3<<endl<<endl;
	if(chave3>1&&chave3<3){
	arquivo1<<nome3<<endl;	
	}
	if(chave3>3&&chave3<7){
	arquivo2<<nome3<<endl;
	}	
	if(chave3>7){
	arquivo3<<nome3<<endl;
	}

	for(int b = 0; b<ind.size(); b++){
		indices<<ind[b]<<endl;
	}
	arquivo1.close();
	
/*	chaves[0]=chave1;
	chaves[1]=chave2;
	chaves[2]=chave3;
	
	cout<<"digite a chave que deseja encontrar: ";
	cin>>dig;
	system("cls");
	if(dig==chaves[0]){
		cout<<nome1<<endl<<endl<<endl;
	}if(dig==chaves[1]){
		cout<<nome2<<endl<<endl<<endl;
	}if(dig==chaves[2]){
		cout<<nome3<<endl<<endl<<endl;
	}
*/	
	cout<<"DIGITE A CHAVE PARA LISTAR TODOS OS NOMES COM RESPECTIVA QTD DE CARACTERES: "<<endl;
	cin>>op;
	
/*	if(op==0){
	arquivo1.open("indices.txt",ios::in);
	if(arquivo1.is_open()){
		while(getline(arquivo1,linha)){
			cout<<linha<<endl;
		}
	}
}
*/	

	
	
	
	if(op==1){
	arquivo1.open("2 à 3 caracteres.txt",ios::in);
	if(arquivo1.is_open()){
	while(getline(arquivo1,linha)){
	cout<<linha<<endl;
	}
	arquivo1.close();
	
	}else{
	cout<<"Nao Foi possivel encontrar o arquivo."<<endl;
	}
	
}else if(op==2){
	arquivo1.open("3 à 6 caracteres.txt",ios::in);
	if(arquivo1.is_open()){
	while(getline(arquivo1,linha)){
	cout<<linha<<endl;
	}
	arquivo1.close();
	
	}else{
	cout<<"Nao Foi possivel encontrar o arquivo."<<endl;
	}
	
}else if(op==3){
	arquivo1.open("mais de 6 caracteres.txt",ios::in);
	if(arquivo1.is_open()){
	while(getline(arquivo1,linha)){
	cout<<linha<<endl;
	}
	arquivo1.close();
	
	}else{
	cout<<"Nao Foi possivel encontrar o arquivo."<<endl;
	}
}




	


	system("pause");
	}
