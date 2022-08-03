#include<iostream>
using namespace std;
void prt2d(int arr[1000][1000], int r, int c){
	for(int i = 0; i < r; i++){
		for(int j = 0; j < c; j++){
			cout<<arr[i][j]<<"\t";
		}cout<<endl;
	}
}
int main(){
	int arr[1000][1000] = {{0, 1, 2}, {3, 4, 5}, {6, 7, 8}};
	prt2d(arr, 3, 3);
	// int a1[] = {1, 2, 4, 6,8 };
	// char arr[][3] = {
	// 	{'a', 'b', 'c'}, 
	// 	{'d', 'e', 'f'}, 
	// 	{'g', 'h', 'i'}};
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<<arr[i]<<"\t";
	// 	}cout<<endl;
	// }
	// cout<<"_________________\n";
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<<arr[j]<<"\t";
	// 	}cout<<endl;
	// }
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<<*(*(arr+i)+j)<<"\t";
	// 	}cout<<endl;
	// }
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<<*(*(arr+i)+j)<<"\t";
	// 	}cout<<endl;
	// }
	// *(arr+i) == arr[i]
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cin>>arr[i][j];
	// 	}
	// }
	// for(int i = 0; i < 3; i++){
	// 	for(int j = 0; j < 3; j++){
	// 		cout<<arr[j][i]<<"\t";
	// 	}cout<<endl;
	// }
}