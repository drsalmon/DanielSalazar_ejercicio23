#include <fstream>
#include <iostream>
using namespace std;
 
void ejemplo_lee(string filename);
void lee(string filename1);
void ejemplo_escribe(string filename);


int main () {
  string filename;
  filename = "valores_x.txt";
  ejemplo_lee(filename);
    
  string filename1;
  filename1 = "valores_y.txt";
  lee(filename1);
  return 0;
}

void ejemplo_lee(string filename){
  ifstream infile; 
  string line;

  infile.open(filename); 
  
  cout << "Leyendo de " << filename << endl; 
  getline(infile, line);
  while(infile){
    cout << line << endl;
    getline(infile, line);
  }
    infile.close();
}
    
void lee(string filename1){
  ifstream infile1; 
  string line1;

  infile1.open(filename1); 
  
  cout << "Leyendo de " << filename1 << endl; 
  getline(infile1, line1);
  while(infile1){
    cout << line1 << endl;
    getline(infile1, line1);
  }

  infile1.close();
}
