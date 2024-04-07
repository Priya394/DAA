#include<iostream>
using namespace std;
void quick(int arr[] , int low , int up);
int partition(int arr[],int low,int up);
int main(){
int arr[] = {45,67,5,78,98,1,45,56,4};
int i;
int n=9;
int low=0;
int up=n-1;
cout<<"The unsorted array is :";
for(i=0;i<n;i++){
cout<<arr[i];
}
quick(arr,0,n-1);
cout<<"\nThe sorted array is \n:";
for(i=0;i<n;i++){
cout<<arr[i] <<"\n";
}
}
void quick(int arr[],int low,int up) {
int pvtloc;
if(low>=up)
return;
pvtloc=partition(arr,low,up);
quick(arr,low,pvtloc-1);
quick(arr,pvtloc+1,up);
}
int partition(int arr[],int low,int up){
int temp,i,j,pivot;
i = low+1;
j = up;
pivot = arr[low];
while(i<=j){
while((arr[i]<pivot)&&(i<up))
i++;
while(arr[j]>pivot)
j--;
if(i<j){
temp = arr[i];
arr[i] = arr[j];
arr[j] = temp;
i++;
j--;
}
else{
i++;
}
}
arr[low] = arr[j];
arr[j] = pivot;
return j;
}
 /*svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~$ cd priyanka25.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/priyanka25.cpp$ g++ quick.cpp
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/priyanka25.cpp$ ./a.out
The unsorted array is :456757898145564
The sorted array is
:1
4
5
45
45
56
67
78
98
svkm@svkm-HP-200-Pro-G4-22-All-in-One-PC:~/priyanka25.cpp$ 

*/




