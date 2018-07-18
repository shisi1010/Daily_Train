#include<iostream>
#include<cstdio>
using namespace std;

int main(){
double arr[10] = {28.9,32.7,45.6,78.0,35.0,86.2,27.8,43.0,56.0,65.0};
double sum;
int n[10],k;
cin>>k;
while(k--){
    sum=0;
    for(int i=0;i<10;i++){
        cin>>n[i];
        sum+=n[i]*arr[i];
    }
    printf("%.2lf\n",sum);
}
return 0;
}