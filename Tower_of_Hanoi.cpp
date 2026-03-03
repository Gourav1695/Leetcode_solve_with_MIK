#include<iostream>
using namespace std;

int towerOfHanoi(int n, int from, int to, int aux){
    // base case
    if(n == 1){
        cout<<" Move disk 1 from rod "<<from<<" to rod "<<to<<'\n';
        return 1;
    }
    int count = 0;
    count += towerOfHanoi(n-1, from, aux, to);
    cout<<" Move disk "<<n<<" from rod "<<from<<" to rod "<<to<<'\n';
    count++;
    count += towerOfHanoi(n-1, aux, to, from);
    return count;
}
int main(){
    int n = 3;
    int totalMoves = towerOfHanoi(n, 1, 2, 3);
    cout<<"Total moves required: "<<totalMoves<<'\n';
    return 0;
}
// tc --> O(2^n) because each call generates two more calls except the base case
// sc --> O(n) for the recursive call stack in the worst case when n is large, otherwise O(1) for the auxiliary space.
