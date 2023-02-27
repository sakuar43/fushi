//
// Created by zmy on 2023/1/19.
//
#include "iostream"
#include "cstdio"
#include "algorithm"
#include "string"
using namespace std;
/*int main(){//4.1
    string str1,str2;
    while (cin>>str1>>str2){
        int answer=0;
        for (int i = 0; i < str1.size(); ++i) {
            for (int j = 0; j < str2.size(); ++j) {
                answer+=(str1[i]-'0')*(str2[j]-'0');
            }
        }
        printf("%d\n",answer);
    }
    return 0;
}*/
/*int main(){//4.2
    string str;
    while (getline(cin,str)){
        for (int i = 0; i < str.size(); ++i) {
            if(str[i]=='z'||str[i]=='Z')
                str[i]-=25;
            else if(('A'<=str[i])&&(str[i]<='Y')||('a'<=str[i]&&('y'>=str[i])))
                str[i]++;
        }
        cout<<str<<endl;
        return 0;
    }
}*/
/*int main(){//4.3
    string str1;
    while (getline(cin,str1)){
        if(str1=="ENDOFINPUT")
            break;
        getline(cin,str1);
        for(int i=0;i<str1.size();i++)
            if('A'<=str1[i]&&str1[i]<='Z')
                str1[i]=(str1[i]-'A'-5+26)%26+'A';
    cout<<str1<<endl;
    getline(cin,str1);
    return 0;
    }
}*/
int number[128];
int main(){
    string str1,str2;


}