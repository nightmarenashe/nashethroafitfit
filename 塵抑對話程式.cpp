#include<iostream>
#include<ctime>
#include<cstdlib>
#define sent 22
using namespace std;
int main()
{
	cout<<"�ѮQ�Ч�A����Q�F�A�A����?\n"<<"\n";
	string n,N;
	int a;
	cout<<"�^����   ";
	cin>>N;
	cout<<"\n"<<N<<":";
	while(cin>>n){
		cout<<"\n"<<"�Ч�:";
		if(n=="�Ѻy"){
			cout<<"�F�A�Q��ŧ�ѮQ�v��";
		}
		else if(n=="Agenda"){
			cout<<"�R�RAgenda";
		}
		else if(n=="���廫"||n=="�廫"){
		cout<<"���߰��a��"<<"\n";
		break;
		} 
		else if(n=="�@��")
		{cout<<"��ڰ��R";
		} 
		else if(n=="�R�R�Ч�"){ 
		cout<<"�Ч�R�R"<<N; 
		} 
	    else{
	    		srand((unsigned)time(NULL));
	    	for(int i=1;i<=1;i++){
	    		a=rand()%200+1;
	    		if(a%sent==0||a%sent>10){
	    			cout<<"���L �D�l";
	    		}
	    		if(a%sent==1){
	    			cout<<"�ګ�p�ݳ��k��";
	    		}
	    		if(a%sent==2){
	    			cout<<"�@���L���ڶ���"; 
	    		} 
	    		if(a%sent==3){
	    			cout<<"�䪽�k����  ���M�P���ʤ]�O";
	    		} 
	    		if(a%sent==4){
	    			cout<<"BOYSTORY���P����";
	    		} 
	    		if(a%sent==5){
	    			cout<<"�ڦn�Q�����  �٦�����";
	    		} 
	    		if(a%sent==6){
	    			cout<<"�@�����R �ͬ��Lê";
	    		} 
	    		if(a%sent==7){
	    			cout<<"�A�̳��Otucking birch";
	    		} 
	    		if(a%sent==8){
	    			cout<<"���|�j�{�l  �R�R�@��";
	    		} 
	    		if(a%sent==9){
	    			cout<<"���F�֧��{����L�H���Obirch";
	    		} 
	    		if(a%sent==10){
	    			cout<<"�a�ݳ̥i�R   �R�R�a��";
	    		} 
	    		} 
	    	}
	    	
	    	cout<<"\n"<<"\n"<<N<<":";
	    	
	    }
	
	system("pause");
	return 0;
} 
