#include<iostream>
 using namespace std;
 class BubbleSortRecursive{
    public:void bubbleSort(int a[],int n){
            if(n==1)
                return;
            for(int i=0;i<n-1;i++){
                if(a[i]>a[i+1])
                    swap(&a[i],&a[i+1]);
            }
            bubbleSort(a,n-1);
    }
    void swap(int *x,int *y){
        int temp=*x;
        *x=*y;
        *y=temp;
    }
    void printArray(int a[],int n){
        cout<<"Sorted Array is\n";
        for(int i=0;i<n;i++)
            cout<<a[i]<<endl;

    }

 };
 int main(){
    int a[]={3,4,1,6,8,2,1,5};
    int n=sizeof(a)/sizeof(a[0]);
    BubbleSortRecursive obj;
    obj.bubbleSort(a,n);
    obj.printArray(a,n);
    return 0;
 }
