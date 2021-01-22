#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T d[],int N){
	int i,j;
	for(i=1;i<N;i++){
		T temp = d[i];
		j = i-1;

		while(j>=0 && d[j] < temp){
			d[j+1] = d[j];
			j--;
		}
		d[j+1] = temp;


		cout<<"Pass "<<i<<":";
		for (int m = 0; m < N; m++){
			cout << d[m] << " ";  
		}  
    	cout << endl;
	}
}

int main(){
	double a[10] = {69.9 ,0.25, 0.5, 1.34, 2.1, 0, 4.8, 88.36, 11.01 ,41.25};
	//int a[10] = {12 ,25, 30, 44, 2, 0, 4, 7, 55, 25};
	cout << "Input Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";
	cout << "\n\n";
	
	insertionSort(a,10);
	
	cout << "\nSorted Array:";
	for(int i = 0; i < 10; i++) cout << a[i] << " ";	
}
