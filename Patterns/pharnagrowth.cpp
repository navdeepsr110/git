#include<bits/stdc++.h>
using namespace std;


int changeAds(int base, int n){
    int num=n,ans=0,c=1;
    if(base==10){
      
     int n=0;
     //Converting Decimal to binary
    while(num!=0){
        int rem=num%2;
        ans=ans+rem*c;
        num=num/2;
        c=c*10;
    }
    
    
   vector<int> v;
   //Inserting elements in vector
   while(ans!=0){
    int rem=ans%10;
    v.push_back(rem);
    ans=ans/10;
   }
   reverse(v.begin(), v.end());
   
   //Replacing 0 with 1 and vice versa
   for(int i=0;i<=v.size();i++){
    if(v[i]==0){
        v[i]=1;
    }
    else{
        v[i]=0;
    }
   }

//    Converting back to number representation
   int two = 1;
    for (int i = v.size() - 1; i >= 0; i--) {
        n = n + v[i] * two;
        two = two * 2;
    }
    return n;

    }

}
int main(){
    int num;
    cin>>num;
   cout<< changeAds(10,num)<<endl;
}