#include <iostream>
#include <fstream>
#include <regex>
using namespace std;
 
 
int main(int argc, char** argv) {

string szukaj;
string input;

cout << "Szukaj: ";
cin >> szukaj;

regex slowo(szukaj);

ofstream wypisz;
ifstream wprowadz;  
	wypisz.open("wypisz.txt");
	wprowadz.open("wprowadz.txt");  
	if(wprowadz.good())  
    	while(!wprowadz.eof())  
        {
        	wprowadz >> input;
           	cout << "\n";
            if(!cin) break;
            if(input=="") break;
            if(regex_match(input,slowo))
            {
                cout<<input;  
				wypisz << input;
            }   
        }

    wprowadz.close();
    wypisz.close();
	 
 return 0;
//Klaudiusz Piasecki 2pi
}
