#include<iostream>
 using namespace std;
 class Selection_Sort{
    public:
        void swapElements(int *x,int *y){
            int temp=*x;
            *x=*y;
            *y=temp;
        }
        void sortArray(int a[],int n){

            int min_index;
            for(int i=0;i<n;i++){
                    min_index=i;
                for(int j=i+1;j<n;j++){
                    if(a[i]<a[j])
                        min_index=j;
                    swapElements(&a[min_index],&a[i]);
                }

            }
    }
    void printArray(int a[],int n){

        for(int i=0;i<n;i++)
            cout<<a[i]<<endl;
    }
 };
 int main(){
    int a[]={12,13,11,18,22};
    int n=sizeof(a)/sizeof(a[0]);
    Selection_Sort obj;
    obj.sortArray(a,n);
    cout<<"Sorted Array is\n";
    obj.printArray(a,n);
    return 0;
 }
