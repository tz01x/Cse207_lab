#include<bits/stdc++.h>
using namespace std;
int pow(int base,int power){
if(power<1){return 1;}
return base *pow(base,power-1);
}
int main(){
int base=2,power=4;
int n=pow(base,power);
cout<<n<<endl;

}
