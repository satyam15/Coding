#include<iostream>
#include<string>
#include<limits>
#include<ios>


using namespace std;

int main(){
	int t;
	
	cin>>t;
	while(t--){
	        string space(" ");
	        string str;
			getline(cin,str);
			str.insert(0,space);
			str.push_back(' ');
			size_t found =str.find(" not ");
			if(found!=string::npos)
				cout<<endl<<"Real Fancy";
			else
				cout<<endl<<"regularly fancy";

	}
	return 0;
}