#include<iostream>
#include<ctime>
#include<cstdlib>
#define sent 22
using namespace std;
int main()
{
	cout<<"老娘塵抑，有何貴幹，你哪位?\n"<<"\n";
	string n,N;
	int a;
	cout<<"回答阿   ";
	cin>>N;
	cout<<"\n"<<N<<":";
	while(cin>>n){
		cout<<"\n"<<"塵抑:";
		if(n=="書漾"){
			cout<<"幹你娘抄襲老娘髮型";
		}
		else if(n=="Agenda"){
			cout<<"愛愛Agenda";
		}
		else if(n=="蔡文賓"||n=="文賓"){
		cout<<"噁心馬鈴薯"<<"\n";
		break;
		} 
		else if(n=="昇叡")
		{cout<<"跟我做愛";
		} 
		else if(n=="愛愛塵抑"){ 
		cout<<"塵抑愛愛"<<N; 
		} 
	    else{
	    		srand((unsigned)time(NULL));
	    	for(int i=1;i<=1;i++){
	    		a=rand()%200+1;
	    		if(a%sent==0||a%sent>10){
	    			cout<<"閉嘴 婊子";
	    		}
	    		if(a%sent==1){
	    			cout<<"我恨小胸部女生";
	    		}
	    		if(a%sent==2){
	    			cout<<"昇叡無視我嗚嗚嗚"; 
	    		} 
	    		if(a%sent==3){
	    			cout<<"臭直男噁心  雖然同性戀也是";
	    		} 
	    		if(a%sent==4){
	    			cout<<"BOYSTORY都同性戀";
	    		} 
	    		if(a%sent==5){
	    			cout<<"我好想念抑塵  還有奕丞";
	    		} 
	    		if(a%sent==6){
	    			cout<<"一齊做愛 生活無礙";
	    		} 
	    		if(a%sent==7){
	    			cout<<"你們都是tucking birch";
	    		} 
	    		if(a%sent==8){
	    			cout<<"不會餓肚子  愛愛共產";
	    		} 
	    		if(a%sent==9){
	    			cout<<"除了擁抑鬱輪其他人都是birch";
	    		} 
	    		if(a%sent==10){
	    			cout<<"冠毅最可愛   愛愛冠毅";
	    		} 
	    		} 
	    	}
	    	
	    	cout<<"\n"<<"\n"<<N<<":";
	    	
	    }
	
	system("pause");
	return 0;
} 
