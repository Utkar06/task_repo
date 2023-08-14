#include <iostream>
using namespace std;
int exp(int a,int b){
    
    int ans=1;
    for (int i=0;i<b;i++){
        ans=ans*a;

    }
    return ans;
}
int fac(int a){
    int ans=1;
    while (a>0){
        ans =ans*a;
        a--;


    }
    return ans;
}
int main(){
    int opp;
   cout<<"enter the operation"<<endl<<"for add-1,sub-2,mul-3,div-4,exp-5,trigo-6"<<endl;

   cin>>opp;
   switch(opp){
    case 1:int a,b;
    
    cin>>a>>b;
    cout<< a+b;
    break;
    case 2:
    
    cin>>a>>b;
    cout<< a-b;
    break;
    case 3:
    
    cin>>a>>b;
    cout<< a*b;
    break;
    case 4:
    cout<<"enter a&b";
    
    cin>>a>>b;
    cout<< (a/b);
    break;
    case 5:
     cout<<"enter the base,exp";
    
    cin>>a>>b;
    cout<< exp(a,b);
    break;

    case 6:int n,x;

    cin>>n>>x;
    switch(n){
        case 1:int ans =0;
        int j=0;
        for (int i=1;i<10;){
            
            ans =ans+(exp(-1,j))*(exp(x,i)/fac(i));
            j++;
            i+=2;
            cout <<ans<<endl;
            
        }
        cout<<ans;
        break;
    }
   
    
    
    break;
   }










}