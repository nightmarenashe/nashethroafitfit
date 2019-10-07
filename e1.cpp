#include<iostream>
#include<cstdlib>
#include<cmath>
#include<iomanip>
using namespace std;
double a(int n);
int main(){
	int n1;
	while(cin>>n1){
		for(int i=1;i<=n1;i++){
			cout.setf(ios::showpoint);
			cout<<setprecision(10)<<a(i)<<endl;
		}
	}
}
double a(int n){
	double nn=1;
	if(n==1) return 2;
	else{
		for(int j=1;j<=n;j++){
		nn=nn/j;
	}
	return nn+a(n-1);	
	}
}
