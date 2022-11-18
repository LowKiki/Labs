#include <iostream>
#include <string>
#include <list>
#include <vector>

using namespace std;

void dbg(auto Debug){
	cout << "\n\tDebug: " << Debug << endl;
}
vector<string> strCompr(string str, char c){
	string t = "";
	vector<string> vS ;

for(int i = 0; str[i] != '\0'; i++){ 
	
		if(str[i] == c){
			vS.push_back(t);
			t = "";
			continue;
		}
		if(str[i] == '\n'){
			vS.push_back(t);
			t = "";
			continue;
		}
		t += str[i];
		
	}
return vS;
}
void add2List(string strlistNames, list<string> *Names){
	string temp = "";

	for(auto i : strlistNames){
		temp += i;
		if(i == '\n'){
			Names->push_back(temp);	
			temp = "";
		}
	}	
}
bool Parent(string X, string Y, list<string> *Names){
	for(auto  i : *Names){
		string parent = strCompr(i, ' ')[0];
		string child  = strCompr(i, ' ')[1];

		if(parent == X && child == Y)return true;
	}	
return false;
}
int main(){
	list<string> l;	
	string Names = "Екатерина Лиана\n\
Фёдор Амина\n\
Давид Иван\n\
Макар Максим\n\
Агния Артём\n";
	
	add2List(Names, &l);
	cout << Parent("Фёдор", "Антон", &l) << endl;
	return 0; 
}
