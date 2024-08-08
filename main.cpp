/*
Задача 1
Что нужно сделать:
Вам даётся массив целых чисел. Необходимо найти такие два индекса i и j в этом массиве, что сумма a[i], a[i+1], a[i+2], … a[j] 
будет максимально возможной и вывести их.
a = {-2,1,-3,4,-1,2,1,-5,4}
Тогда наибольшая сумма последовательных элементов находится между индексами 3 и 6: {4,-1,2,1}, сумма = 6. Необходимо вывести 3 и 6.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    vector<int> v;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    cout << "Введите элементы массива:" << endl;
    int numbers;
    for (int i=0; i<n; ++i){
        cin >> numbers;
        v.push_back(numbers);
    }

    int max = v[0];
    int i_max = 0;
    int j_max = 0;
    int sum = 0;

    for (size_t i=0; i<v.size(); ++i){
        for (size_t j=i; j<v.size(); ++j){
            sum+=v[j];
            if (sum > max){
                max = sum;
                i_max = i;
                j_max = j;
            }
        }
        sum = 0;
    }

    cout << i_max << " " << j_max << endl;
}