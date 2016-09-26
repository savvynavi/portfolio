#include<iostream>
#include<vector>
using namespace std;

bool palindromeTest(const vector<int>&);

int main(){
	int size;
	vector<int> vector1;
	int num;
	cout << "Please enter the size of your vector:";
	
	//checks to see if you entered correct value type
	while(true){
		cin >> size;
		if(!cin.good() || size <= 0){
			cout << "please enter positive non-zero integers only\n";
			cin.clear();
			cin.ignore();
		}else{
			break;
		}
	}
	
	//saves entered value if it is an integer in vector1
	int i = 0;
	while(i < size){
		cout << "Enter number for palindrome: ";
		cin >> num;
		if(!cin.good()){
			cout << "Please enter integers only\n";
			cin.clear();
			cin.ignore();
		}else{
			vector1.push_back(num);
			i++;
		}
	}
	
	//prints out the vector, and then states if it's a palindrome or not	
	for(int j = 0; j < vector1.size(); j++){
		cout << vector1[j] << " ";
	}
	if(palindromeTest(vector1)){
		cout << "is a palindrome\n";
	}else{
		cout << "is not a palindrome\n";
	}
	return 0;
}

/*Takes in a constant reference to the vector, loops backwards from halfway point to 
the start of the vector, and checks to see if it reads the same forwards and backwards*/
bool palindromeTest(const vector<int> &rVector){
	bool isPalindrome = true;
	for(int i = (rVector.size() / 2); i >= 0; i--){
		if(rVector[i] != rVector[rVector.size() - 1 - i]){
			isPalindrome = false;
			return isPalindrome;
		}
	}
	return isPalindrome;
}
