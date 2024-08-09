#include <iostream>
#include <vector>
using namespace std;


int rotation(vector <int> &v , int n ){
    n=n%v.size();
    int array1[n];
    int len=v.size()-n;
    int len1=len-1;
    for(int i=0;i<n;i++){
        array1[i]=v[len];
        len++;
            }

       for(int i=len1 ; i>=0;i--){
        v[i+n]=v[i];
       }
       for(int i =0;i<n;i++){
        v[i]=array1[i];
       }

}

int main(){

    vector <int> v{1,2,3,4,5,6,7,8};

    for(int i: v){
        cout<<i<<" ";
    }
     cout<<endl;
     rotation(v,3);
     for(int i: v) {
        cout<<i<<" ";
     }


}















