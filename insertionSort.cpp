#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
	int boyut=5;
	int dizi[boyut];
	srand(time(0));
	for(int i=0; i<boyut; i++) {
		dizi[i]=rand()%100+1;
	}
	cout<<"diziniz:"<<endl;
	for(int i=0; i<boyut; i++) {
		cout<<dizi[i]<<endl;
	}
	for(int i=1; i<boyut; i++) {
		int key=dizi[i];
		int j=i-1;
		while(j>=0&&dizi[j]>key) {
			dizi[j+1]=dizi[j];
			j=j-1;
		}
	dizi[j+1]=key;
	}
	cout<<"siralanmis diziniz: "<<endl;
	for(int i=0;i<boyut;i++)
	{
		cout<<dizi[i]<<endl;
	}
}