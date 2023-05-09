#include <iostream>
#include <vector>

using namespace std;

    void frequensi(vector<int> array, int angka) 
    {
        int freq = 0;
            for (int i = 0; i < array.size(); i++) 
            {
                if (array[i] == angka) 
                {
                freq++;
                }
            }
        cout << "Frequency dari angka " << angka << " di dalam array adalah " << freq << endl;
    }


int main() 
{
    vector<int> array = {1, 2, 2, 3, 3, 3, 5};
    int input;
    cin >> input;
    frequensi(array, input);
    return 0;
}