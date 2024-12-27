

#include<iostream>
#include<list>
#include<vector>
#include<string>
#include<algorithm>
#include<map>
using namespace std;

int main(){
    cout <<  "<----List---->" << endl;
    list <int> l1;
    int n,x;
    cout << "Enter number of elements : ";
    cin >> n;
    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << " : ";
        cin >> x;
        l1.push_back(x);
    }
    list<int> :: iterator i1 = l1.begin();
    while(i1!=l1.end()){
        cout << *i1 << " ";
        i1++;
    }
    l1.sort();
    cout <<endl <<  "Sorted" << endl;
    list<int> :: iterator i2 = l1.begin();
    while(i2!=l1.end()){
        cout << *i2 << " ";
        i2++;
    }

    cout << "\n\n" <<  "<----Vector---->" << endl;
    vector <string> v1;
    cout << "Enter number of names : ";
    cin >> n;
    string y;
    for(int i=0; i<n; i++){
        cout << "Enter name " << i+1 << " : ";
        cin >> y;
        v1.push_back(y);
    }
    vector<string> :: iterator i3 = v1.begin();
    while(i3!=v1.end()){
        cout << *i3 << " " ;
        i3++;
    }
    sort(v1.begin() , v1.end());
    cout << endl << "Sorted" << endl;
    vector<string> :: iterator i4 = v1.begin();
    while(i4!=v1.end()){
        cout << *i4 << " ";
        i4++;
    }


    cout << "\n\n" <<  "<----Map---->" << endl;
    map <string , int> marksmap;
    marksmap["Rohan"] = 55;
    marksmap["Aman"] = 65;
    marksmap["Rahul"] = 75;
    marksmap["Karan"] = 85;
    marksmap["Gaurav"] = 94;
    map<string , int> :: iterator i5 = marksmap.begin();
    while(i5!=marksmap.end()){
        cout << i5->first << " " << i5->second << endl;
        i5++;
    }
}

