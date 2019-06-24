#include <iostream> 
#include <string> 
using namespace std; 
int main() 
{ 
	int t;
	cin>>t;
	while(t--)
	{
		cin.clear();
	string str ; 
	cin>>str;
	string str1 = "MUJ";  
	size_t found = str.find(str1); 
	if (found != string::npos) 
		cout << "YES" <<endl; 
	else 
		cout << "NO" <<endl;
	}

	return 0; 
} 
