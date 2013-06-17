#include<iostream>
using namespace std;
int main(){
	long int a,b,carry,cc,da,db,add,i;

	while(1){
		cin>>a>>b;
		if(a==0 && b==0)
			break;
		cc=0;carry=0;
		for(i=1;i<=10;i++){
			da=a%10;
			db=b%10;
			add=da+db+carry;
			if(add>9){
				cc++;
				carry=1;
			}
			else
				carry=0;
			a=a/10;
			b=b/10;
		}
		if(cc==0)
			cout<<"No carry operation.\n";
		else if(cc==1)
		    cout<<cc<<" carry operation.\n";
	    else
			cout<<cc<<" carry operations.\n";

	}
	return 0;
}
