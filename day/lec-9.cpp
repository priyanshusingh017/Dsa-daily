#include<iostream>
using namespace std;

void printarray(int arr[],int n){
    cout<<"printing the value of array"<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<"printing done"<<endl;;
}

int getmax(int arr[], int n){
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){

        maxi=max(maxi,arr[i]);

        //if(arr[i]>max){
           // max=arr[i];
        //};
        
    }

    return maxi;
}

int getmin(int arr[], int n){
    int mini=INT_MAX;

    for(int i=0;i<n;i++){
        
        mini=min(mini,arr[i]);
        
        //if(arr[i]<min){
          //  min=arr[i];
        //};
        
    }

    return mini;
}

void update(int arr[],int n){
    
    cout<<endl<<"inside the function"<<endl;

    //update the array
    arr[0]=100;

    //printing the array
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    cout<<"function done"<<endl;
}

int main(){

    //declare 

    int number[5];

    cout<<"value at 1 index:"<<number[1]<<endl;
    
    //cout<<"value at 7 index:"<<number[7]<<endl;

    int second[3]={5 ,7 , 11};

    cout<<"value at  second[2] index:"<<second[2]<<endl;
    
    int third[15]={2,7};
    int thirdsize=sizeof(third)/sizeof(int);
    cout<<"size of third array is:"<<thirdsize<<endl;

    int n=15;
    printarray(third,n);

    int fourth[10]={0};
    printarray(fourth,10);


    int six[10]={1};

    int fithsize=sizeof(six)/sizeof(int);
    cout<<"size of six array is:"<<fithsize<<endl;


    int fith[5];
    for(int i=0;i<5;i++){
        fith[i]=3;
    }

    for(int i=0;i<5;i++){
        cout<<fith[i]<<" ";
    }

    cout<<endl;


    int size;
    cin>>size;

    int arr[100];

    for(int i=0;i<size;i++){
        cin>>arr[i];
    }

    cout<<"max value in array is:"<<getmax(arr,size)<<endl;
    cout<<"min value in array is:"<<getmin(arr,size)<<endl;

    
    int arr1[3]={1,2,3};

    update(arr1,3);
    cout<<"printing the array after function call"<<endl;

    //printing the array
    for(int i=0;i<3;i++){
        cout<<arr1[i]<<" ";
    }cout<<endl;


    int arr2[3]={1,2,3};

    int sum=0;
    //printing the array
    for(int i=0;i<3;i++){
        sum =+ arr2[i];
        
    }
    cout<<"sum is "<<sum<<" ";
    cout<<endl;
    
    
    cout<<"every thing is fine "<<endl;

    
    return 0;
}