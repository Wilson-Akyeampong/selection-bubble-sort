
#include <cstdlib>
#include <iostream>
#include <conio.h>


using namespace std;
void bubblesort(int dataset[], int n){
 int i,j;
 for(i=0;i<n;i++)
  for(j=n-1;j>i;j--)
  if(dataset[j]<dataset[j-1])
  {
    int temp=dataset[j];
    dataset[j]=dataset[j-1];
    dataset[j-1]=temp;
}

}

int main(){
  int arr[5]={993,2,13,34,686}; //unsorted data set
  bubblesort(arr,5); //sorting process using bubble sort
  for(int i=0;i<5;i++)
     cout<<arr[i]<<"\t"; //after sorting


getch();
return 0;

}
