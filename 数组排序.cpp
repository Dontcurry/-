#include<iostream>	//����ͷ�ļ�����
using namespace std;
#include<string>
#include<cstdlib>
const int N=8;
void bubbleSort(int a[],int n){//�����������е�֤�����а���������ð�ݣ�
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
void bubbleSort(float a[],int n){//������������������ 
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
	//�ַ�������������
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
	//�ַ��������е��ַ�����������
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
	//�����������е������������Ļ
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl; 
}
void print(float r[],int n){	//������ 
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl;
}

void print(char r[],int n){
	//�ַ������е��ַ��������Ļ
	int i;
	for(i=0;i<n;i++)
		cout<<r[i]<<" ";
	cout<<endl; 
}
void print(string r[],int n){
	//���ַ��������е��ַ������
	int i;
	for(i=0;i<n;i++){
		cout<<r[i]<<" ";
		
	} 
	cout<<endl;
}
int main(){
	system("color F1"); 
	int arr1[N]={49,38,34,35,30,11,23,24};
	cout<<"����ǰ��\n";
	print(arr1,N);
	bubbleSort(arr1,N);
	cout<<"�����\n";
	print(arr1,N);
	
	float arr2[N]={12.3,4.5,3.18,9.7,7.6,30.5,2.7,4.9};
	cout<<"����ǰ��\n";
	print(arr2,N);
	bubbleSort(arr2,N);
	cout<<"�����\n";
	print(arr2,N);
	
	char arr3[N]={'V','B','M','K','O','P','A','D'};
	cout<<"����ǰ��\n";
	print(arr3,N);
	bubbleSort(arr3,N);
	cout<<"�����\n";
	print(arr3,N);
	
	string arr4[N]={"Hello","Good","Curry","KD","Klay","Green","Iguodala","Bryant"};
	cout<<"����ǰ��\n";
	print(arr4,N);
	bubbleSort(arr4,N);
	cout<<"�����:\n";
	print(arr4,N);
	
	return 0;
}



















