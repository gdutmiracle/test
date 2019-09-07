#include <iostream>
#include <algorithm>
#include <vector> 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {

 using namespace std;
  int p[5]={4,2,5,1,3};

for(int i=0;i<5;i++)
  cout<<p[i];
 
sort(p,p+5,greater<int>());

cout<<endl;
for(int i=0;i<5;i++)
  cout<<p[i];

	return 0;
 
 
}
