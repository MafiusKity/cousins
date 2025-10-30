#include <iostream>

using namespace std;

int main(int argc, char *argv[]){
	int f,i,j=3,n=atoi(argv[1]),k;
	if(argc>2){
		cout<<"Enter only one number at a time!\n";
		return 0;
	}
	if(n==0){
		cout<<"Does not exist the 0° number of any sequency!"<<endl;
	}
	else if(n==1){
		cout<<1<<endl;
	}
	else if(n==2){
		cout<<2<<endl;
	}
	else{
		for(i=3;j<=n;i+=2){
			k=3;
			while(i%k!=0){
				k+=2;
			}
			if(k==i){
				f=i;
				j++;
			}
		}
		cout<<f<<endl;
	}
	return 0;
}
/*
 _._     _,-'""`-._
(,-.`._,'(       |\`-/|
    `-.-' \ )-`( , o o)
          `-    \`_`"'-
*/
