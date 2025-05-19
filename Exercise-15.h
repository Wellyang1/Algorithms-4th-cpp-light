#include<iostream>
#include<vector>
#include<ctime>
#include<cstdlib>
using namespace std;
// 1.1.15
static vector<int> histogram(const vector<int>& a, int M)
{
    vector<int> result(M, 0); // ��ʼ���������Ϊȫ0��

    for (int num : a) 
    {
        if (num >= 0 && num < M)
        {
            result[num]++;
        }
    }
    
    return result;
}
inline int getrandom(int min, int max)
{
    return (rand() % (max - min)) + min;
}
void exercise15()
{
    vector<int>my_ivec;
    int M = 100;
    for (int i = 0; i < M; i++)
    {
        my_ivec.push_back(getrandom(0, 20));
    }
    
    vector<int>my_newivec = histogram(my_ivec, M);
    int sum = 0;
    for (auto c : my_newivec)//������ʵ���±�Ϊ20�Ϳ���ֹͣ�ˡ�
    {
        sum += c;
    }
    cout << "sum = " << sum << "����M = " << M << "һ�¡�" << endl;

}