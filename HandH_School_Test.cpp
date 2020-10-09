#include <iostream>
#include <vector>
#include <cstdio>
using namespace std;

void fillVector(vector<int> &arr)
{
    int element;

    cout << "¬ведите массив целых чисел: ";

    cin >> element;
    arr.push_back(element);

    while (getchar() != '\n')
        {
            cin >> element;
            arr.push_back(element);
        }
}

int getMaxElementIndex(vector<int> &arr)
{
    int maxElement, maxElementIndex;

    maxElement = arr[0];
    maxElementIndex = 0;

    if (arr.size() > 1)
    {
        for (int i = 1; i < arr.size(); ++i)
            {
                if (arr[i] > maxElement)
                {
                    maxElement = arr[i];
                    maxElementIndex = i;
                }
            }
    }

    return maxElementIndex;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    vector<int> arr;

    fillVector(arr);

    cout << getMaxElementIndex(arr) << "\n";

    return 0;
}
