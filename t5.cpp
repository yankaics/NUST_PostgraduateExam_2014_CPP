#include<iostream>

using namespace std;

#define M 100

//a*b+give,a�б�����λ����λ����give�� 
void multi(int &give,int &a,int b){
	int s=a*b+give;
	a=s%10;
	give=s/10;
}

//ģ��result=result*a 
void modelMulti(int result[M],int &top,int a){
	int give=0;	//��λ����Ľ�λ 
	for(int i=0;i<=top;i++){
		multi(give,result[i],a);
	}
	if(give>0) result[++top]=give;
} 

int main(){
	int result[M];
	int top=-1;
	result[++top]=1;
	int sou=1;
	while(top<32){
		sou++;
		modelMulti(result,top,sou);
	}
	cout<<sou-1<<endl;
	return 0;
} 
