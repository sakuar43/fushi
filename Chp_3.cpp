//
// Created by zmy on 2023/1/15.
//
#include "cstdio"
#include "iostream"
#include "algorithm"
using namespace std;
//const int MAXN=1000;
//int arr[MAXN];
/*int main(){//计算机复试算法练习3.1
    int n;
    while (scanf("%d",&n)!=EOF){
        for (int j = 0; j < n; ++j) {
            scanf("%d",&arr[j]);
        }
        sort(arr,arr+n);
        for (int i = 0; i < n; ++i) {
            printf("%d",arr[i]);
        }
        printf("\n");
    }
    return 0;
}*/
/*
 * 例题3.2
struct Student{
    int number;
    int score;
};
const int MAXN=1000;
Student arr[MAXN];
bool Compare(Student x,Student y){
    if(x.score==y.score){
        return x.number<y.number;//成绩相等比较学号
    } else{
        return x.score<y.score;//成绩不等比较成绩;
    }
}
int main(){//3.2成绩排序
    int n;
    scanf("%d",&n);
    for (int i = 0; i < n; ++i) {
        scanf("%d%d",&arr[i].number,&arr[i].score);
    }
    sort(arr,arr+n, Compare);
    for (int i = 0; i < n; ++i) {
        printf("%d %d\n",arr[i].number,arr[i].score);
    }
    return 0;
}*/
/*指定排序方式3.3
struct Student{
    int order;
    int score;
    string name;
};
bool CompareDes(Student x,Student y){
    if (x.score==y.score){
        return x.order>y.order;
    } else{
        return x.score>y.score;
    }
}
bool CompareAsc(Student x,Student y){
    if(x.score==y.score){
        return x.order<y.order;
    }
    else{
        return x.score<y.score;
    }
}
int main(){
    int n;
    int type;
    while (scanf("%d%d",&n,&type)!=EOF){
        Student arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i].name>>arr[i].score;
            arr[i].order=i;
        }
        if(type==0){
            sort(arr,arr+n, CompareDes);
        }
        else{
            sort(arr,arr+n, CompareAsc);
        }
        for (int i = 0; i < n; ++i) {
            cout<<arr[i].name<<" "<<arr[i].score<<endl;
        }
    }
    return 0;
}
 */
/*例题3.4
const int MAX=200;
int arr[MAX];
int main(){
    int n;
    while (scanf("%d",&n)!=EOF){
        for (int i = 0; i < n; ++i) {
            scanf("%d",&arr[i]);
        }
        int x;
        scanf("%d",&x);
        int answer=-1;
        for (int i = 0; i < n; ++i) {
        if(arr[i]==x){
            answer=i;
            break;
        }
        }
        printf("%d\n",answer);
    }
    return 0;
}*/
const int MAXN=100;
int arr[MAXN];
bool BinarySearch(int n,int target){
    int left=0,right=n-1;
    while (left<=right){
        int mid=(left+right)/2;
        if(arr[mid]<target){
            left=mid+1;
        } else if(target<arr[mid]){
            right=mid-1;
        } else return true;
    }
    return false;
}
int main(){
    int n,m;
    while (scanf("%d",&n)!=EOF){
        for (int i = 0; i < n; ++i) {
            scanf("%d",&arr[i]);
        }
        sort(arr,arr+n);
        scanf("%d",&m);
        for(int i=0;i<n;i++){
            int target;
            scanf("%d",&target);
            if(BinarySearch(n,target)){
                printf("YES\n");
            }else{
                printf("NO\n");
            }
        }
    }
    return 0;
}