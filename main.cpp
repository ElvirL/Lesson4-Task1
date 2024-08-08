/*
������ 1
��� ����� �������:
��� ����� ������ ����� �����. ���������� ����� ����� ��� ������� i � j � ���� �������, ��� ����� a[i], a[i+1], a[i+2], � a[j] 
����� ����������� ��������� � ������� ��.
a = {-2,1,-3,4,-1,2,1,-5,4}
����� ���������� ����� ���������������� ��������� ��������� ����� ��������� 3 � 6: {4,-1,2,1}, ����� = 6. ���������� ������� 3 � 6.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    int n;
    vector<int> v;
    cout << "������� ���������� ��������� �������: ";
    cin >> n;
    cout << "������� �������� �������:" << endl;
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