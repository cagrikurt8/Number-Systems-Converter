#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main() {
	int a,intPart,iv,r,counter,counter1;
	float decPart,na,error=0;
	char x,y;
	vector<int> intVals;
	cout<<"Which number system do you want to convert your number? "; cin>>a;
	cout<<"Enter your integer value: "; cin>>intPart;
	cout<<"Enter your floating value: "; cin>>decPart;
	cout<<"Here is your number in terms of "<<a<<" :";
	cout<<"(";
	
	for(int i=0; i<7; i++){
	   r = intPart%a;
	   intPart = int(intPart/a);
	   intVals.push_back(r);
	 }  
	 
	     counter = intVals.size()-1;
	x:   cout<<intVals.at(counter);
	     counter--;
	     if(counter >= 0){goto x;}
     
     cout<<".";
     	counter1 = 1;	
	y: na = decPart*a;
	   iv = int(na);
	   cout<<iv;
	   decPart = na - iv;
	   error = error + iv*pow(a,-counter1);
	   counter1++;
	   if(counter1<7){goto y;}
	   cout<<")"<<endl;
	   cout<<"Enter your floating number again: "; cin>>decPart;
	   error = decPart - error;
	   cout<<"\nThe error rate: "<<error;   
}
