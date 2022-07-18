// n = 4
//       *           *
//     *   *       *   *
//   *       *   *       *
// *           *           *
#include<iostream>
using namespace std;
int main(){
	int n;
	n = 10;
	for(int i = 1; i <= n; i++){
		for(int j = n-i; j>0; j--){
			cout<<"  ";
		}
		cout<<" *";
		for(int j = i; j > 1; j--){
			cout<<"  ";
		}
		// cout<<"*";
		for(int j = i-2; j > 0; j--){
			cout<<"  ";
		}
		if(i!=1&&i!=n){
			cout<<" *";
		}
		for(int j = n-i-1; j>0; j--){
			cout<<"  ";
		}
		for(int j = n-i; j>0; j--){
			cout<<"  ";
		}
		cout<<" *";
		for(int j = i-1; j > 1; j--){
			cout<<"  ";
		}
		for(int j = i-1; j > 0; j--){
			cout<<"  ";
		}
		if(i!=1){
			cout<<" *";
		}
		// for(int j = n-i; j>0; j--){
		// 	cout<<"  ";
		// }
		cout<<endl;
	}
}