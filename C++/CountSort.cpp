#include<iostream>
using namespace std;
void fillarray(int a[],int n);
void displayarray(int a[],int n);
int findmax(int a[], int n);
void countsort(int a[], int n);

void swap(int &x, int &y);       
int main()
{
	int n;
	cout<<"Enter array size";
	cin>>n;
	int a[n];
	
	cout<<"Enter the array elements"<<endl;
	fillarray(a,n);  
	
	cout<<"\n The array elements are ";
	displayarray(a,n);
	
 countsort(a,n);
}
void fillarray(int a[], int n){
	for(int i=0; i<=n-1; i++)
	cin>>a[i];
}
void displayarray(int a[],int n){
	for(int i=0; i<=n-1; i++)
	cout<<a[i]<<" \t ";
}	
void swap(int &x, int &y)
{
int t=x;
  x=y;
  y=t;
}


int findmax(int a[], int n)
{
	int max =a[0];
	for(int i=1; i<=n-1;i++)
	{
		if(a[i]>=max)
		max=a[i];
	}
	return max;
}


void CountSort(int a[],int n)
{
	int max=findmax(a,n);

	int count[max+1]={0}; 
	int output[n]; 
		
	for(int i=0; i<=n-1; i++) 
	 count[a[i]] ++; 

	for(int i=1; i<=max; i++)  
	count[i]= count[i] + count[i-1]; 
			
	for(int i=n-1; i>=0; --i)    
	output[--count[a[i]]] = a[i];
    
	cout<<"\n After sorting ";
	displayarray(output,n); 
}
