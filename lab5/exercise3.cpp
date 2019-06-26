#include<bits/stdc++.h>
using namespace std;
int GCD(int f,int s){

if(f<=0){return s;}

else if(s<=0){return f;}

return  GCD(s,f%s);
}
int lcd(int f,int s){
int gcd=GCD(f,s);
int result=(f/gcd)*(s/gcd)*gcd ;
return result;
}
int main(){
int FIRST=12,SECOND=30;
int n=lcd(FIRST,SECOND);
cout<<n<<endl;

}


