#include <iostream>
using namespace std;
class queue{
	private:
		int front;
		int back;
		int ar[];
		int msize;
	public:
	queue(int size){
		int *ar;
		ar=new int [size];
		msize=size;
        front=0	;
        back=0;
}
    ~queue(){} 
     bool full(){
    	return (msize==back);
	}
	void push(int element){
		if (full()){
			cout<<"QUEUE IS FULL"<<endl;
			return;
		}
		ar[back++]=element;
	}
	bool empty(){
		return(back==front);
	}
	void pop(){
		if(empty()){
			cout<<"QUEUE IS EMPTY"<<endl;
		}
		++front;
	}
	// ATTANTION::int pop(){ return a[++front]}
	int sfront(){
		if(empty()){
		cout<<"QUEUE IS EMPTY"<<endl;
		return -1;	}
		return ar[front];
	}
};
int main() {
	queue ob(1000);
	ob.push(5);
	ob.push(97);
	ob.push(6);
	ob.pop();
	
	cout<<ob.sfront()<<endl;
	return 0;
}
