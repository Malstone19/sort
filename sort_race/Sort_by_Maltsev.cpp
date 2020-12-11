#include <vector>
#include <array>
#include <iostream>
using namespace std;

void quickSort2(vector<int>& array, int left, int right)
{
    int i = left;
    int j = right;
    int pivot = array[(i + j) / 2];
    int temp;

    while (i <= j)
    {
        while (array[i] < pivot)
            i++;
        while (array[j] > pivot)
            j--;
        if (i <= j)
        {
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
            i++;
            j--;
        }
    }
    if (j > left)
        quickSort2(array, left, j);
    if (i < right)
        quickSort2(array, i, right);
}

vector<int> quickSort(vector<int> array) {
    quickSort2(array, 0, array.size()-1);
    return array;
}