#include<iostream>	//包含头文件命令
using namespace std;
#include<string>
#include<cstdlib>
const int N=8;
void bubbleSort(int a[],int n){//将整型数组中的证书序列按升序排序（冒泡）
	int i,j,t;
	for(i=n-1;i>1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
}
void bubbleSort(float a[],int n){//浮点型数组升序排序 
	int i,j;
	float t; 
	for(i=n-1;i>1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
} 
void bubbleSort(char a[],int n){
	//字符数组升序排序
	int i,j;
	char t;
	for(i=n-1;i>1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
	 
}
void bubbleSort(string a[],int n){
	//字符串数组中的字符串升序排序
	int i,j;
	string t;
	for(i=n-1;i>1;i--){
		for(j=0;j<i;j++){
			if(a[j]>a[j+1]){
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	} 
}
void print(int r[],int n){
	//将整型数组中的整数输出到屏幕
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl; 
}
void print(float r[],int n){	//浮点数 
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl;
}

void print(char r[],int n){
	//字符数组中的字符输出到屏幕
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl; 
}
void print(string r[],int n){
	//将字符串数组中的字符串输出
	int i;
	for(i=0;i<n;i++){
		cout<<r[i]<<" ";
		
	} 
	cout<<endl;
}
int main(){
	system("color F1"); 
	int arr1[N]={49,38,34,35,30,11,23,24};
	cout<<"排序前：\n";
	print(arr1,N);
	bubbleSort(arr1,N);
	cout<<"排序后：\n";
	print(arr1,N);
	
	float arr2[N]={12.3,4.5,3.18,9.7,7.6,30.5,2.7,4.9};
	cout<<"排序前：\n";
	print(arr2,N);
	bubbleSort(arr2,N);
	cout<<"排序后：\n";
	print(arr2,N);
	
	char arr3[N]={'V','B','M','K','O','P','A','D'};
	cout<<"排序前：\n";
	print(arr3,N);
	bubbleSort(arr3,N);
	cout<<"排序后：\n";
	print(arr3,N);
	
	string arr4[N]={"Hello","Good","Curry","KD","Klay","Green","Iguodala","Bryant"};
	cout<<"排序前：\n";
	print(arr4,N);
	bubbleSort(arr4,N);
	cout<<"排序后:\n";
	print(arr4,N);
	
	return 0;
}



















