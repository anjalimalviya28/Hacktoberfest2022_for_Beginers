#include<iostream>
#include<process.h>
using namespace std;
void push(int item,int stk[], int& top);
void pop(int stk[],int& top);
void traverse(int stk[],int& top);
int main(){
	int n;
	cout<<"Enter size: "; cin>>n;
	int stk[n],item,top=-1,ch;
	char ch2;
	do{
		cout<<"1.Push\n2.Pop\n3.Exit\nEnter your choice: ";
		cin>>ch;
		switch(ch){
			case 1:
			{
				if(top==n-1)  cout<<"overflow\n";
		     	else{
			    	cout<<"Enter item to be inserted: "; cin>>item;
				    push(item,stk,top);
			    }
			    break;
			} 
			case 2:
			{
				if(top==-1)  cout<<"underflow\n";
				else pop(stk,top);
				break;
			}
			case 3:
				exit(-1);
			default: cout<<"Invalid choice";		
		}
		cout<<"\nPress Y/y to continue: ";
		cin>>ch2;
	}
	while(ch2=='y'||ch2=='Y');
}
void push(int item,int stk[], int& top){
	stk[++top]=item;
	cout<<endl;
	traverse(stk,top);
}
void pop(int stk[], int& top){
	stk[top--];
	cout<<endl;
	traverse(stk,top);
}
void traverse(int stk[],int& top){
	cout<<"Stack is :";
	if(top==-1)  cout<<"Empty stack";
	else{
		for(int i=top;i>=0;i--) cout<<stk[i]<<" ";
	}
	
}
