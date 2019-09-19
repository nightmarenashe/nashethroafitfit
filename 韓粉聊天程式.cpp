#include<iostream>
#include<ctime>
#include<cstdlib>
#define sent 20
using namespace std;
int randomchat();
int main()
{
string command, hint[100], reply[100], line, name;
cout<<"貴姓大名?\n";
    cin>>name;
    	if(name=="蔡英文"){
    		for(int k=0;k<=1450;k++){
    		cout<<"綠蛆"; 
    		}
    		cout<<endl<<"韓粉 has left the chat.\n";
		return 0;
		 } 
cout<<"輸入指令，teach:指定關鍵字回覆，chat:直接聊天"<<endl;
	cin>>command;
	int i=0;
    while(command=="teach"){
	 cout<<"輸入要指定的前句，輸入chat直接進入聊天:";	
	    cin>>hint[i];
	    if(hint[i]!="chat"){
	 cout<<"輸入要指定的後句，在這邊輸入chat沒用喔:";
	        cin>>reply[i];
    cout<<"--------------------------------\n";     	
	    }
	 if(hint[i]=="chat"){
	 	cout<<"--------------------------------\n";
	 	cout<<name<<"，開始與韓粉聊天囉\n";
	 	cout<<"輸入back就可以回教學模式\n"; 
	 	cout<<"輸入spadaj可以直接離開\n";
	 	cout<<"--------------------------------\n"; 
	 	while(1){
    	cout<<name<<":";
    	cin>>line;
    	if(line=="back"){
    		cout<<"--------------------------------\n";
    		cout<<name<<"，您已回到教學模式\n";
    		break;
    	}
    	if(line=="spadaj"){
    		cout<<"Do Widzenia.\n";
    		return 0;
    	}
    	for(int j=0;j<=99;j++){
    		if(line==hint[j]){
    			cout<<"韓粉:"<<reply[j]<<endl;
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
		cout<<name<<"，開始與韓粉聊天囉\n";
		cout<<"輸入spadaj 就可以離開\n";
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
	cout<<"韓粉:"; 
	int a;
	      srand((unsigned)time(NULL));
	    	for(int p=1;p<=1;p++){
	    		a=rand()%200+1;
	    		if(a%sent==0||a%sent>=10){
	    			cout<<"閉嘴 1450";
	    		}
	    		if(a%sent==1){
	    			cout<<"肥滋滋大母豬";
	    		}
	    		if(a%sent==2){
	    			cout<<"喔氣氣氣氣氣"; 
	    		} 
	    		if(a%sent==3){
	    			cout<<"高雄發大財";
	    		} 
	    		if(a%sent==4){
	    			cout<<"我愛中天";
	    		} 
	    		if(a%sent==5){
	    			cout<<"綠蛆";
	    		} 
	    		if(a%sent==6){
	    			cout<<"反台獨";
	    		} 
	    		if(a%sent==7){
	    			cout<<"鑽向敵人的心臟";
	    		} 
	    		if(a%sent==8){
	    			cout<<"韓總是蔣公在世";
	    		} 
	    		if(a%sent==9){
	    			cout<<"愛情產業鏈萬歲";
	    		} 
	    		} 
	    	cout<<endl;
}
