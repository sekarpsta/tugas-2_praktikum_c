#include <iostream>
#include <math.h>

using namespace std;

int main(){
	
	float sisi_miring, alas, tinggi;
	
	cout<<"mencari sisi miring"<<endl;
	cout<<"----------------------------------"<<endl;
	
	cout<<"alas : "; cin>>alas;
	cout<<"tinggi : "; cin>>tinggi;
	
	sisi_miring = sqrt(pow(alas,2) + pow(tinggi,2) );
	
	cout<<"--------------------------------------------"<<endl;
	
	cout<<"sisi miring = "<<sisi_miring;
	
	return 0;
}