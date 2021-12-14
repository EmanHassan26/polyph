#include <iostream>
using namespace std;
class priqueue{
	private:
		int front;
		int back;
		int ar[];
		int msize;
	public:
	priqueue(int size){
		int *ar;
		ar=new int [size];
		msize=size;
        front=0	;
        back=0;
    }
   void push ( int x){
   	int i;
   	for(i=back;i>=0;i--){
   		if(x<ar[i]){
   			ar[i+1]=ar[i];
		   }
		   break;
	   }
	   ar[i++]=x;
   }
    bool full(){
    	return (msize==back);
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
		if(full()){return -1;}
		return ar[front];
	}

}; 
int main() {
	priqueue n(20);
 n.push(5);
 n.push(3);
 n.push(6);
 n.push(1);
  cout<<n.sfront();	
	return 0;
}
