#include <iostream>
using namespace std;

int main() {
	int a,i,j;
	cin>>a;
	int b[2];
	for(i=0;i<a;i++){
	    for(j=0;j<2;j++){
	        cin>>b[j];
	    }
      //new part
	    if (b[0]>b[1]){
	        int c,d;
	        c=b[0]-b[1];
	        d=c/4;
	        if ((c%4)==0){
	            cout<<d;
	        }
	        else if ((c%4)>=0){
	            cout<<(d+1);
	        }
	        cout<<endl;
	    }
	    else if (b[0]<b[1] || b[0]==b[1]){
	        cout<<0<<endl;

	    }
	}
	return 0;
}
