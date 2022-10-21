#include<iostream>
#include<process.h>
using namespace std;
void Enqueue(int Queue[],int& f,int& r,int& n,int size);
void Dequeue(int Queue[],int& f,int& r,int& n,int size);
void traverse(int Queue[],int f,int r,int n);
int main(){
	int n=0,size; //Number of elements
	cout<<"Enter size: "; cin>>size;
	int Queue[size];
	int f=-1,r=-1,ch,ch1;
	do
	{
		cout<<"1.Insert(Enqueue)\n2.Delete(Dequeue)\nEnter choice: "; cin>>ch;
		
		if(ch==1) Enqueue(Queue,f,r,n,size);
		
		else if(ch==2) Dequeue(Queue,f,r,n,size);
		
		else cout<<"Wrong choice";
		
		cout<<"\nPress 1 to continue "; cin>>ch1;	
	
	} while(ch1==1);
	
}
void Enqueue(int Queue[],int& f, int& r,int& n,int size){
	if(r==size-1) cout<<"Overflow\n";
	else{
		int item;
	    cout<<"Enter item to insert"; cin>>item;
		Queue[++r]=item;
		n++;
		traverse(Queue,f,r,n);
	}
}
void Dequeue(int Queue[],int& f,int& r,int& n,int size){
	if(f==r) cout<<"Underflow\n";
	else{
		int item;
		cout<<"Deleted item is  "<<Queue[++f];
		n--;
		traverse(Queue,f,r,n);
	}
}
void traverse(int Queue[],int f,int r,int n){
	if(f==r) cout<<"Empty array\n";
	else{
		cout<<"Total elements in queue is "<<n<<endl;
		cout<<"\nQueue elements are: \n";
		for(int i=f+1;i<=r;i++)
		  cout<<Queue[i]<<" ";
	}
	
}
