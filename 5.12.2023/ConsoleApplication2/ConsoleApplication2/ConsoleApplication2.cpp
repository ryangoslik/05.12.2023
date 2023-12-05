#include <iostream>
#include <vector>
#include <time.h>
#include <algorithm>
using namespace std;
int main()

{
    srand(time(NULL));
    vector <int> tablica;
    for (int i = 0; i < 5; i++) {
        int los = rand() % 100 + 1;
        tablica.push_back(los);
    }
    sort(tablica.begin(), tablica.end());
    vector <int>::iterator nazwaIteratora = tablica.begin();
    for (; nazwaIteratora != tablica.end(); nazwaIteratora++)
    {
        cout << *nazwaIteratora << endl;
    }
    return EXIT_SUCCESS;
}

