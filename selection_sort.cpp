#include <iostream>

int selection_sort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = arr[i];
            if (arr[j] < arr[i])
            {
                arr[i] = arr[j];
                arr[j] = temp;
            }
        };
    };
    for (int k = 0; k < n; k++){
        std::cout << arr[k] << " ";
    };
};

int main()
{
    int array[10] = {2, 19, 12, 15, 5, 8, 9, 4, 1, 11};
    int arr_size = 10;
    selection_sort(array, arr_size);
};