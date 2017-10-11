// next_permutation
#include <iostream> 
#include <algorithm> 
using namespace std;

int main () {
    int myints[] = {1, 2, 3};
    cout << "The 3! possible permutations with 3 elements:\n";
    next_permutation (myints, myints + 3);
    cout << myints[0] << " " << myints[1] << " " << myints[2] << endl;

    return 0; 
}
