#include<iostream>
#include<vector>

void mergeSort(vector<int> v, vector<int> w, int ini, int fim);
void intercalar(vector<int> v, vector<int> w, int ini, int meio, int fim);


int main(){
	
	vector<int> v;
	vector<int> w = int [v.size()];
	
	
	 mergeSort(v, w, 0, v.length-1);
     
	
}

void mergeSort(vector<int> v, vector<int> w, int ini, int fim){
	if(ini<fim){
		int meio = (ini+fim)/2;
		mergeSort(v, w, ini, meio);
		mergeSort(v, w, meio+1, fim);
		intercalar(v, w, ini, meio, fim);
	}
}

void intercalar(vector<int> v, vector<int> w, int ini, int meio, int fim){
	for(int k=ini;k<=fim;k++){
		w[k]=v[k];
	}
	int i = ini;
	int j = meio+1;
	
	for(nt k=ini;k<=fim;k++){
		if(i>meio){
			v[k] = w[j++];
		}
		else if(j>fim){
			v[k] = w [i++];
		}
		else if(w[i]<w[j]){
			v[k] = w[i++];
		}
		else{
			v[k] = w[j++];
		}
		
	}
}
