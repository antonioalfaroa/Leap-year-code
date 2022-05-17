#include <iostream>

using namespace std;

int main(){

  int year;

  cout<< "Please enter a year, for example : 1997"<<endl;
  cin>> year;
  while(year<1900 || year>2022){
   
    if(year<1900 || year>2022){
      cout<< "\n""Your year must be between 1900 and 2022"<<endl;
    }
     cin>> year;
  }
 

  cout<< "\n""Your entered year is : "<<year<<endl;

  if(year == 1904|| year == 1908|| year == 1912|| year == 1916|| year == 1920|| year == 1924|| year == 1928|| year == 1932|| year == 1936|| year == 1940|| year == 1944|| year == 1948|| year == 1952|| year == 1956|| year == 1960|| year == 1964|| year == 1968|| year == 1972|| year == 1976|| year == 1980|| year == 1984|| year == 1988|| year == 1992|| year == 1996|| year == 2000|| year == 2004|| year == 2008|| year == 2012|| year == 2016|| year == 2020){
    cout<< " Your year is a leap-year"<<endl;
    
  }else{
  cout<<" Your year is not a leap-year"<<endl;
    
  }
  




  return 0;
}