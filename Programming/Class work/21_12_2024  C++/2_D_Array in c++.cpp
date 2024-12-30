//C++ Array 2d 
#include<iostream>
using namespace std;

main(){
	int a[2][3],i,j;
	
	//Taking input from user
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<"Enter"<<i<<j<<" Element is : ";
			cin>>a[i][j];
		}
	}
	
	//Showing the user
	for(i=0;i<2;i++){
		for(j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
}
