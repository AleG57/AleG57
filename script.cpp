#include <iostream>
#include <string>
#include <vector>
using namespace std;

string print_array(vector<string> v) {
    for (string val : v) {
        cout << val << " ";
    }
    cout << endl;
}

class AlexisG {
public:
  int age;
  vector<string> languages;
  vector<string> tools;
  vector<string> OS;
  
  int GetAge(){return age;};
  vector<string> GetLanguages(){return languages;};
  vector<string> GetTools(){return tools;};
  vector<string> GetOS(){return OS;};
};


int main() {
  AlexisG Alexis;
  Alexis.age = 22;
  Alexis.tools = {"Autocad","Excel",""};
  Alexis.languages = {"Python","C++","HTML","CSS","Javascript","Typescript","Matlab","VBA"};
  Alexis.OS = {"Windows","Ubuntu","Debian","Archlinux"};

  cout << Alexis.GetAge() <<endl;
  cout << print_array(Alexis.GetTools()) << endl;
  cout << print_array(Alexis.GetLanguages()) << endl;
  cout << print_array(Alexis.GetOS()) << endl;

  return 0;
}
