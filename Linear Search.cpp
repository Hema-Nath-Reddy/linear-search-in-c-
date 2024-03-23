#include<iostream>
using namespace std;
int search(int size, int a[],int key){
    int index=-1;
    for(int i=0;i<size;i++){
        if(a[i]==key){
            index=i;
            break;
        }
    }
    return index;//returns -1 if key is not present else returns the index of the key element.
}
int main(){
    cout<<"Enter the size of the array: ";
    int size;
    cin>>size;
    if(size<=0){//if condition if the user inputs a non-positive value for the size of the array.
        do{
            cout<<"Size of the array cannot be less than 0. Input a proper value: ";
            cin>>size;
        }while(size<=0);//do-while loop that runs until the user inputs a positive value for the size of the array.
    }
    int a[size];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
    cout<<"Enter the key element: ";
    int key;
    cin>>key;
   
    if(search(size,a,key)==-1){//if the returned value is -1, then it means that the element is not present.
        cout<<key<<" is not present in the array."<<endl;
    }else{
        cout<<"The index of "<<key<<" is "<<search(size,a,key)<<endl;
    }
    return 0;
}

