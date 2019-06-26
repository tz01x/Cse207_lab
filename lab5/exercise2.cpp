#include<bits/stdc++.h>
using namespace std;
int GCD(int f,int s){

if(f<=0){return s;}

else if(s<=0){return f;}

return  GCD(s,f%s);
}
int main(){
int FIRST=10,SECOND=15;
int n=GCD(FIRST,SECOND);
cout<<n<<endl;

}

