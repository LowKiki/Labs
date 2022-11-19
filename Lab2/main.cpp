#include <iostream>
#include <list>

using namespace std;

#define MAX	100

int main(){
	list<int> intList = {312,24,543,67,23,1};

	for(auto iter = intList.begin(); iter != intList.end(); iter++){
		if(*iter > MAX){
			iter = intList.erase(iter);
		}	
	}

	for(auto i : intList)
		cout << i << " ";
	return 0;
}
