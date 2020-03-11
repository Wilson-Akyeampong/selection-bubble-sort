#include <cstdlib>
#include <iostream>

using namespace std;
void selectsort(int A[],int n){
  int i,j,min;
  for(i=0;i<n;i++){
     min=i;
     for(j=i+1;j<n;j++)
        if(A[j]<A[min]) min=j; //find min value
    //swapping
    int temp=A[i];
    A[i]=A[min];
    A[min]=temp;

   }

}

int main(int argc, char *argv[])
{
   int A[]={23,4,45,23,12,2};
   selectsort(A,6);
   for(int i=0;i<6;i++)
   cout<<A[i]<<endl;

   system("PAUSE");
   return EXIT_SUCCESS;
}
