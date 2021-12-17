#include<iostream> 
class integer 
{ 
int m,n; 
public: 
integer(int,int); 
void display(void) { 
cout<<”m=:”<<m ; 
cout<<”n=”<<n; 
} 
}; 
integer :: integer( int x,int y) // constructor defined 
{ 
m=x; 
n=y; 
}
int main( ) 
{ 
integer int 1(0, 100); // implicit call 
integer int2=integer(25,75); 
cout<<” \nobjectl “<<endl; 
int1.display( ); 
cout<<” \n object2 “<<endl; 
int2.display( ); 
}  
