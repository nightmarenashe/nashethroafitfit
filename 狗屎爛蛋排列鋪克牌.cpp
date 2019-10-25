#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
	int a[13];
	 srand((unsigned)time(NULL));
	    	for(int i=0;i<=12;i++){
	    		a[i]=rand()%13+1;
	    		for(int j=0;j<i;j++){
	    			if(a[i]==a[j]){
	    				i--;
	    				break;
	    			}
	    		}
	    } 
	    int u=13;
		int q, *p;
		p=a;
	     while(u>0){
	for(int k=0;k<u;k++){
		if(p[k]==1){
			cout<<"A"<<" ";
		}
		else if(p[k]==11){
			cout<<"J"<<" ";
		}
		else if(p[k]==12){
			cout<<"Q"<<" ";
		}
		else if(p[k]==13){
			cout<<"K"<<" ";
		}
		else{
			cout<<p[k]<<" ";
		}
		 }
	q=*p;	 
	if (*p==u){
		p=p+1;
		u--;
	}
	else{
		for(int s=0; s<u;s++){
			p[s]=p[s+1];
		}
		p[u-1]=q;
	}
	cout<<"\n";
}
		}
			

