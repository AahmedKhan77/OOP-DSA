#include <iostream>
using namespace std;


c = 45;
int main(){
  int a,b,c;
  
  cout<<"Enter the value of a: "<<endl;
  cin>>a;
  cout<<"Enter the value of b: "<<endl;
  cin>>b;
  
  c= a + b;
  cout<<"Sum of a and b is : ";
  
  cout<<"Global c is : "<<::c;

return 0;
}
