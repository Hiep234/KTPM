#include<iostream>
#include<string>
#include<sstream>

using namespace std;

bool isValid(string a){

	string chuoi="";
	int count=0;
	
	string siu;
	for(int i=0;i<a.size();i++){
	if((a[i]<48||a[i]>57)&&a[i]!=46){
			return false;
		}
	}
		
	for(int i=0;i<a.size();i++){
		if(a[i]!='.'){
		  
		  chuoi+=a[i];	
	}  
		else{
			chuoi+=" ";
		}		
	}
	stringstream aa(chuoi);
	while(aa>>siu){
		int num=stoi(siu);
		if(num<0||num>255){
			return false;
			
		}
		else{
			count++;
		}
	}
	if(count!=4){
		return false;	
	}
	else{
		return true;
	}
}


int main(){
	
	string a;
	cin>>a;	
	cout<<isValid(a);
}
