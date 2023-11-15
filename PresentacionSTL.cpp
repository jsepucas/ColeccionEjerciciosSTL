#include <iostream>
#include <vector>
#include <map>
#include <set>

using namespace std;

int main() {
    std vector <int> vector;

    vector.push_back(10);
    vector.push_back(20);
    vector.push_back(30);

    cout << "Elementos del vector: " << endl;
    for(int elemento : vector) {
        cout << elemento << endl;
    }

}

