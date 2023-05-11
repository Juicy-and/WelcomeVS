#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::string in_i,in_j;
    std::ifstream in("in.txt");
    in >> in_i;
    int arr_i = stoi(in_i);
    int* arr1 = new int[arr_i];
    in >> in_i;
    arr1[arr_i-1] = stoi(in_i);
    for (int i = 0; i < arr_i-1; i++)
    {
        in >> in_i;
        arr1[i] = stoi(in_i);
    }
    in >> in_j;
    int arr_j = stoi(in_j);
    int* arr2 = new int[arr_j];
    for (int i = 1; i < arr_j; i++)
    {
        in >> in_j;
        arr2[i] = stoi(in_j);
    }
    in >> in_j;
    arr2[0] = stoi(in_j);
    in.close();
    std::ofstream out("out.txt");
    out << arr_j << std::endl;
    for (int i = 0; i < arr_j; i++)
    {
        out << arr2[i];
        out << ' ';
    }
    out << '\n';
    out << arr_i << std::endl;
    for (int i = 0; i < arr_i; i++)
    {
        out << arr1[i];
        out << ' ';
    }
    delete[] arr1;
    delete[] arr2;
}