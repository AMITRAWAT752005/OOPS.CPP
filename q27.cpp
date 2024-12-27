
#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int p,q,r;
    cin >> p;
    cin >> q >> r;

    a.erase(a.begin()+p-1);
    a.erase(a.begin()+q-1 , a.begin()+r-1);

    cout << a.size() << endl;
    for (int i = 0; i < a.size(); i++) {
        cout << a[i] << " ";
    }
    return 0;
}

