#smogalert
#include <iostream>
using namespace std;
int main() {
 

    int N;
    cin>>N;
    int pollution[N];
    int index;
    int cnt=0;
    for(int i=0;i<N;i++){
        	
		cin>>pollution[i];
        while (pollution[i]<0 && pollution[i]>500)
       {
		 cin>>pollution[i];
        
    }}
    for(int i=1;i<N;i++){
        if(   pollution[i-1]<100 && pollution[i]>100){
        	cnt++;
        }
} cout<<cnt<<" ";

  for(int i=1;i<N;i++){
        if(   pollution[i-1]<100 && pollution[i]>100){
            index=i+1;
            
			cout<<index<<" ";
        }
    }
return 0;
}
