#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person {
public :
    int setin;
    string name;
    int age;
    Person(){}
    friend bool operator < (const Person& o1, const Person &o2) {
        if( o1.age != o2.age ) return o1.age < o2.age;
        else return o1.setin < o2.setin;
    }
};

int main() {
    int n; cin >> n;
    vector<Person> pep(n);
    for(int i=0; i<n; i++) {
        string s; int a; cin >> a >> s;
        pep[i].name = s;
        pep[i].age = a;
        pep[i].setin = i;
    }

    sort(pep.begin(), pep.end());

    for(int i=0; i<n; i++) {
        cout << pep[i].age << " " << pep[i].name << endl;
    }

    return 0;
}