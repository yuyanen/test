#include <iostream>
#include <map>
#include <string>
using namespace std;
/*
int main()
{
    map<int, string> imap;
    imap.insert({ 3, "张三" });
    imap.insert({ 4, "李四" });
    imap.insert({ 1, "王二麻子" });
    imap.insert({ 2, "小淘气" });
    //map<int, string>::iterator it;
    for(pair<int,string> element:imap){
        int number=element.first;
        string name=element.second;
        cout << number<<" obtained"<<name<< endl;
    }
    
    return 0;
}
*/

void test01()
{
    map<int,int> m;
    m.insert(pair<int,int>(1,10));
    m.insert(make_pair(2,20));
    m.insert(map<int,int>::value_type(3,30));
    m[4]=40;

    for(auto &it: m){
        cout<<"key"<<it.first<<"value"<<it.second<<endl;
    }

}

void test02()
{
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(make_pair(2,20));
    m.insert(map<int,int>::value_type(3,30));
    m[4]=40;

  // m.erase(3);

     for(auto &it: m){
        // for(auto it=m.begin();it !=m.end();it++){
        cout<<"key"<<it.first<<"value"<<it.second<<endl;
    }
}   
/*
    map<int,int>::iterator pos1=m.find(3);
    if(pos1!=m.end())
    {
        cout<<"find key is"<<(*pos1).first<<"value is"<<pos1->second<<endl;
    }

    int num=m.count(5);
    cout<<"the number of element when key is 5: "<<num<<endl;
}

*/
int main(){
    //test01();
    test02();
    return 0;
}