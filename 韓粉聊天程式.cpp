#include<iostream>
#include<ctime>
#include<cstdlib>
#define sent 20
using namespace std;
int randomchat();
int main()
{
string command, hint[100], reply[100], line, name;
cout<<"�Q�m�j�W?\n";
    cin>>name;
    	if(name=="���^��"){
    		for(int k=0;k<=1450;k++){
    		cout<<"��I"; 
    		}
    		cout<<endl<<"���� has left the chat.\n";
		return 0;
		 } 
cout<<"��J���O�Ateach:���w����r�^�СAchat:�������"<<endl;
	cin>>command;
	int i=0;
    while(command=="teach"){
	 cout<<"��J�n���w���e�y�A��Jchat�����i�J���:";	
	    cin>>hint[i];
	    if(hint[i]!="chat"){
	 cout<<"��J�n���w����y�A�b�o���Jchat�S�γ�:";
	        cin>>reply[i];
    cout<<"--------------------------------\n";     	
	    }
	 if(hint[i]=="chat"){
	 	cout<<"--------------------------------\n";
	 	cout<<name<<"�A�}�l�P��������o\n";
	 	cout<<"��Jback�N�i�H�^�оǼҦ�\n"; 
	 	cout<<"��Jspadaj�i�H�������}\n";
	 	cout<<"--------------------------------\n"; 
	 	while(1){
    	cout<<name<<":";
    	cin>>line;
    	if(line=="back"){
    		cout<<"--------------------------------\n";
    		cout<<name<<"�A�z�w�^��оǼҦ�\n";
    		break;
    	}
    	if(line=="spadaj"){
    		cout<<"Do Widzenia.\n";
    		return 0;
    	}
    	for(int j=0;j<=99;j++){
    		if(line==hint[j]){
    			cout<<"����:"<<reply[j]<<endl;
    			break;
    		}
    		if(j==99){
    			randomchat();
    			break;
    		}
    	}
    }
}
	 i++;
	}
	if(command=="chat"){
		cout<<"--------------------------------\n";
		cout<<name<<"�A�}�l�P��������o\n";
		cout<<"��Jspadaj �N�i�H���}\n";
	}
	while(command=="chat"){
		cout<<name<<":";
    	cin>>line;
    	if(line=="spadaj"){
    		cout<<"Do Widzenia.";
    		return 0;
    	}
		randomchat();
	}
	system("pause");
	return 0;
} 
int randomchat(){
	cout<<"����:"; 
	int a;
	      srand((unsigned)time(NULL));
	    	for(int p=1;p<=1;p++){
	    		a=rand()%200+1;
	    		if(a%sent==0||a%sent>=10){
	    			cout<<"���L 1450";
	    		}
	    		if(a%sent==1){
	    			cout<<"�δ����j����";
	    		}
	    		if(a%sent==2){
	    			cout<<"�������"; 
	    		} 
	    		if(a%sent==3){
	    			cout<<"�����o�j�]";
	    		} 
	    		if(a%sent==4){
	    			cout<<"�ڷR����";
	    		} 
	    		if(a%sent==5){
	    			cout<<"��I";
	    		} 
	    		if(a%sent==6){
	    			cout<<"�ϥx�W";
	    		} 
	    		if(a%sent==7){
	    			cout<<"�p�V�ĤH����Ŧ";
	    		} 
	    		if(a%sent==8){
	    			cout<<"���`�O�����b�@";
	    		} 
	    		if(a%sent==9){
	    			cout<<"�R�����~��U��";
	    		} 
	    		} 
	    	cout<<endl;
}
