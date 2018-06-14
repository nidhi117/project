#include<iostream>
using namespace std;
 
int main()
{
	int i,j,n,k,res;
	cin>>n;
	for(j=0;j<n;j++){
		cin>>k;
		int a[100];
		res = 0;
		for(i=0;i<k;i++) cin>>a[i];
		if(a[0] == 1 && k%2==1){ res = 1;
			for(i=0;i<k/2;i++)
			 if(a[i+1]-a[i]!=1) res=0;
			for(i=k/2;i<k-1;i++)
			 if(a[i]-a[i+1]!=1) res = 0;
			 }
		if(res == 1) cout<<"yes\n";
		else if(res == 0) cout<<"no\n";
	}
	return 0;
}  
