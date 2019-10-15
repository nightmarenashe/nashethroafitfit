#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void master_mind(int N, int P );
int main(){
	int NN, PP;
	cout<<"./hw3 ";
	cin>>NN>>PP;
	master_mind(NN, PP);
} 
void master_mind(int N, int P ){
	int num[P],guess[P],H=0,X=0;
	srand((unsigned)time(NULL));
	for(int i=0;i<P;i++){
			num[i]=rand()%N+1;
			//cout<<num[i];
	}
	while(1){
		for(int j=0;j<P;j++){
			cin>>guess[j];
			if(guess[j]==num[j]){
				H=H+1; //Why not H++
				continue;
			}
			for(int k=0;k<P;k++){
			    if(guess[j]==num[k]){
			    	X=X+1; //Same Problem
			    	break;
			    }
			}
			
		}
		if(H==P){
			cout<<"Correct";
			break;
		}
		else{
			cout<<H<<"H"<<X<<"X";
			H=0;
			X=0;
		}
	}
}
