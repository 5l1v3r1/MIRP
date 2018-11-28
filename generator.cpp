#include <iostream>
#include <string>
#include <fstream>
using namespace std; 

int main(){


ofstream Sips;
string ip;

cout << " \n IP Mass Range Developped By ABDO10 (C) 2018 - today \n" << endl;

cout << " [!] EX:197.153.15." <<endl; 
cout << " [!] Please let Last Number Blank " << endl; 
cout << " Enter Your IP:" ;
getline(cin,ip); 
cout << " [*] Generating IP:" << ip << "1" <<  endl;

Sips . open ("ip.txt"); 
if(!(!Sips.fail())){
cout << " Something went error - maywell permmissions denied !" << endl; 
}

else 

for (int i = 1 ; i <= 255 ; i++){
cout << " [IP]: " << ip << i <<  " [OUTPUT] on ip.txt" << endl;
Sips << ip << i << endl; 

}

return 0; 
}
