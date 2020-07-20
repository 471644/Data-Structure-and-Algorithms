#include <iostream>
#include <map>
#include <list>
#include <utility>
#include <vector>
using namespace std;
int main(void) {
   
  map<string, vector<float> >m1 = {
      {"mising", {2.3,5.6}},
      {"kill", {6.8,7.8}},
   };
   string key = "kill"; 
   if ( m1.find(key) == m1.end() ) {
  cout << "not found";
  cout << m1.find("missing")->second[0] << endl;  
  cout << m1.find("missing")->second[1] << endl;
} else {
  cout <<"found" << endl;
  float arr[2] = {m1.find(key)->second[0],m1.find(key)->second[1]};
  cout << m1.find(key)->second[0] << endl;  
  cout << m1.find(key)->second[1] << endl;
  cout << *arr;
}

   return 0;
}
