#include<iostream>
#include<algorithm>
#include<string>
#include<cctype>
using namespace std;

bool testPalindrome(const string&);

int main(){
	string str;
	
	//takes in string and removes any white space
	cout << "Please enter a string: ";
	getline(cin, str);
	str.erase(remove_if(str.begin(), str.end(), ::isspace), str.end());
	
	//prints the string out and checks if it's a palindrome
	cout << str << " ";
	if(testPalindrome(str)){
		cout << "is a palindrome\n";
	}else{
		cout << "is not a palindrome\n";
	}
	return 0;
}

/*Takes in a constant reference to the string, loops backwards from halfway point to 
the start of the string, and checks to see if it reads the same forwards and backwards*/
bool testPalindrome(const string &rStr){
	bool isPalindrome = true;
	for(int i = (rStr.length() / 2); i >= 0; i--){
		if(rStr[i] != rStr[rStr.length() - 1 - i]){
			isPalindrome = false;
			return isPalindrome;
		}
	}
	return isPalindrome;
}
