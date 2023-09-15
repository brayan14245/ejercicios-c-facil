#include <iostream>

using namespace std;

int countSheep(bool sheep[], int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (sheep[i]) {
            count++;
        }
    }
    return count;
}

int main() {
    bool sheep[] = {true, false, true, true, false, true};
    int size = sizeof(sheep) / sizeof(sheep[0]);
    int numSheep = countSheep(sheep, size);
    cout << "Hay " << numSheep << " ovejas presentes." << endl;
    return 0;
}
