#include <iostream>
#include <random>

using namespace std;

int main()
{
    // 난수 생성
    // 
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distrib(1, 99);

    int number = distrib(gen);
    while (1)
    {
        int guess = 0;
        cout << "입력 :";
        cin >> guess;

        if (guess == number)
        {
            cout << "정답입니다!" << endl;
            break;
        }
        else if(guess > number)
        {
            cout << "너무 커요!" << endl;
        }
        else
        {
            cout << "너무 작아요!" << endl;
        }
    }
}
