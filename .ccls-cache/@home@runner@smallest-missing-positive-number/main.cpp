#include <iostream>
using namespace std;
int main() {
  int n;
  cout<<"enter number of elements in array";
  cin>>n;
  int a[n];
  cout<<"enter all elements of array";
  for(int i=0;i<n;i++){
    cin>>a[i];
  }
  int k=0;

  int N=1e6;
  bool b[N];
 
  for(int i=0;i<N;i++){
    b[i]=false;
  }
  for(int i=0;i<n;i++){
    if(a[i]>=0){
      b[a[i]]=true;
    }

  }
  for(int m=0;m<N;m++){
    if(b[m]==false){
      k=m;
      break;
      
    }
  }
  cout<<k;
  return 0;
  }