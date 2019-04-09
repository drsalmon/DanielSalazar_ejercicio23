#include <fstream>
#include <iostream>
using namespace std;
 
float ejemplo_lee(string filename);
float lee(string filename1);
    
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

float ejemplo_lee(string filename){
  ifstream infile; 
  string line;
  double sumatoria;

  infile.open(filename); 
  sumatoria = 0.0;
  getline(infile, line);
  int i;
   
  for(i=0;i<20;i++){
 
      sumatoria=sumatoria+stod(line);
      getline(infile, line);
  }
  cout << " La suma para x es: "<<sumatoria << endl;
   
  infile.close();
  return sumatoria;
}
    
float lee(string filename1){
  ifstream infile1; 
  string line1;
  double sumatoria1;
  getline(infile1, line1);
  int i;


  infile1.open(filename1);
  sumatoria1 = 0.0;
  
  getline(infile1, line1);
  
    for(i=0;i<20;i++){
 
      sumatoria1=sumatoria1+stod(line1);
      getline(infile1, line1);
  }
  cout << " La suma para y es: "<<sumatoria1 << endl;
   
  infile1.close();
  return sumatoria1;

}
