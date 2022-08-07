#include <iostream>
using namespace std;

void multiples(int n)
{
  for (int i=1; i<=n; i++)
  {
   if ((i%5==0) || (i%3==0)){
      if ((i%5==0) && (i%3==0)) 
        cout<<"FooBaa"<<endl;
      else if(i%3==0)
        cout<<"Foo"<<endl;
      else if(i%5==0) 
        cout<<"Baa"<<endl;  
    }
    else
    cout<<i<<endl;
 }
}

int main() {
  multiples(100);
  return 0;
}