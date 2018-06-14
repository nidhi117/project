#include<iostream>
#include<cctype>
using namespace std;
int new_arr(char arr[], int len){
	int i,j;
	char a[501];
	for(i=0;i<len;i++){
		a[i]=arr[i];
	}
	for(i=0,j=0;i<len;i++){
		if(isalpha(a[i])){
			arr[j]=a[i];
			j++;
		}
	}
	return j;
}
int main()
{
	int r,k,i,len;
	int top,new_len;
	cin>>r;
	for(k=0;k<r;k++){
		char arr[501];
		cin>>len;
		cin>>arr;
		top=0;
		new_len=new_arr(arr,len);
		for(i=new_len;i<len;i++)
		arr[i] = '\0';
		for(i=0;i<=new_len;i++){
			if(arr[i]=='H' && arr[i+1]=='T')
			{top=0; i++;}
			else {top=1; break;}
		}
		if(top==0 || new_len == 0 || i == new_len)
		cout<<"Valid\n";
		else cout<<"Invalid\n";
	}
	return 0;
}      

