#include<iostream>
using namespace std;

void printa(int a[], int n){
	for(int i = 0; i < n; i++){
		cout<<a[i]<<" ";
	}cout<<endl;
}

void update(int arr[], int d){
	// c += c;
	// d += c;
	for(int i = 0; i < d; i++){
		arr[i] *= 5;
	}
	printa(arr, d);
	return;
}

int main(){
	int arr[] = {12, 43, 43, 12, 654 ,7,54 ,23};
	int n = sizeof(arr)/sizeof(int);
	update(arr, n);
	printa(arr, n);
	return 0;
}