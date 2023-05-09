#include <iostream>
#include <vector>

using namespace std;

    vector<int> deleteduplicate(vector<int> n) 
    {
        vector<int> result;

        for (auto i = n.begin(); i != n.end(); i++) 
        {
            bool duplicate = false;

            for (auto j = i + 1; j != n.end(); j++) 
            {
                if (*i == *j) 
                {
                    duplicate = true;
                }
            }

            if (!duplicate) 
            {
                result.push_back(*i);
            }
        }

        return result;
    }

int main() 
{
    vector<int> n = {1, 2, 2, 3, 4, 5, 5};

    n = deleteduplicate(n);

    for (auto i = n.begin(); i != n.end(); i++) 
    {
        cout << *i << " ";
    }

}