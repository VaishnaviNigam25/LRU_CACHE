#include<iostream>
#include<list>
#include<unordered_map>
using namespace std;
#define FIO ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);

//NODE TO STORE KEY-VALUE PAIRS
class Node{
    public:
    string key;
    int value;
    Node(string key,int value)
    {
        this->key = key;
        this->value = value;
    }

};

//LRU CACHE DS
class LRUCache{
    public:
    int maxSize;
    list<Node> l;
    unordered_map<string,list<Node>::iterator> m;

    LRUCache(int maxSize)
    {
        this->maxSize = maxSize >1 ? maxSize :1;
    }

    void insertKeyValue(string key,int value)
    {
        //Case 1
        if(m.count(key)!=0)
        {
            //replacing & updating
            auto it = m[key];
            it->value = value;
        }
        //Case 2
        else
        {
            //checking if cache is full, remove last used
            if(l.size()==maxSize)
            {
                Node last = l.back();
                m.erase(last.key); // removes from hashmap
                l.pop_back();// removes from LL
            }
            Node n(key,value);
            l.push_front(n);
            m[key]= l.begin();
        }

    }

    int* getValue(string key)
    {
        //IF value is PRESENT
        if(m.count(key)!= 0)
        {
            auto it = m[key];
            int value = it->value;
            l.push_front(*it);
            l.erase(it);
            m[key]=l.begin();
            return &l.begin()->value;
        }
        //IF value is NOT PRESENT
        return NULL;
    }

    string mostRecentKey()
    {
        return l.front().key;
    }
};

int main()
{
    LRUCache lru(3);
    lru.insertKeyValue("mango",20);
    lru.insertKeyValue("apple",80);
    lru.insertKeyValue("orange",60);
    cout<< lru.mostRecentKey()<<endl;

    lru.insertKeyValue("mango", 40);
    cout<<lru.mostRecentKey()<<endl;

    lru.insertKeyValue("banana",15);
   
   
    if(lru.getValue("apple")==NULL)
    {
        cout<<"APPLE DOESN'T EXIST\n";
    }
    if(lru.getValue("mango")==NULL)
    {
        cout<<"MANGO DOESN'T EXIST\n";
    }
    if(lru.getValue("ORANGE")==NULL)
    {
        cout<<"ORANGE DOESN'T EXIST\n";
    }
    if(lru.getValue("banana")==NULL)
    {
        cout<<"BANANA DOESN'T EXIST\n";
    }


    return 0;
}