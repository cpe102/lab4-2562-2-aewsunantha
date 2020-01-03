#include<iostream>
#include<cmath>
using namespace std;

//Write function findDistance() here
float findS(float u,float a,float t){
  float s = (u*t)+(0.5*a*(t*t));
  return s;
}

int main(){
float a,u,t;
  //Calling findDistance() using test cases
  cout<<"u = ";
  cin>>u;
  cout<<"a = ";
  cin>>a;
  cout<<"t = ";
  cin>>t;
  cout<<"s = "<<findS(u,a,t);
  return 0;
}
