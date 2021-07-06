#include<iostream>
#include<string>
using namespace std;
class node{
	public:
	  node* next1;
	  node* next2;
};
int main(){
	node q0,q1,q2,q3,q4,q5;
	q0.next1=&q3;
	q0.next2=&q2;
	q1.next1=&q3;
	q1.next2=&q5;
	q2.next1=&q2;
	q2.next2=&q2;
	q3.next1=&q1;
	q3.next2=&q2;
	q4.next1=&q2;
	q4.next2=&q5;
	q5.next1=&q2;
	q5.next2=&q4;
	node* start=&q0;
	string s;
	cin>>s;
	int i;
	for(i=0;i<s.length();i++){
		if(s[i]=='a'){
			start=start->next1;
		}
		else if(s[i]=='b'){
			start=start->next2;
		}
		else{
			start=&q2;
		}
	}
	if(start==&q4){
		cout<<s<<" accepted";
	}
	else{
		cout<<s<<" is not accepted";
	}
	return 0;
}
