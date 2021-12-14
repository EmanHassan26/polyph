#include <iostream>
typedef long long ll;
#define endl'\n';
using namespace std;
class stackArray{
	private:
		int size=0;
		int ar[];
    	int	maxsize;
	public:
	stackArray(int  size){
		 int *ar;
		 ar = new int [size];
		 maxsize=size;
	}
	void push(int x){
		if(size==maxsize)
		cout<<"out of length";
		   else{
		ar[size]=x;
		size++;
	}	
	}
	~stackArray(){
	}
	int top(){
		if(size==0){
			cout<<" out of pound";
			return -1;
		}
		return ar[size-1];
	}
		
	int pop(){
		if(size==0){
			cout<<" stack is empty";
			return -1;
		}
		return ar[--size];
	}
	bool isempty(){
		return(size==0);
	}
bool isfull(){
		return(size==maxsize);
	}

};

int main() {
	
stackArray ob(5);	
ob.push(3);	
ob.push(6);
ob.pop();
cout<<ob.isfull()<<endl;
cout<<ob.isempty();
	
	return 0;
}
