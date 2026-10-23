#include <iostream>
#include "dayOfYear.h"

// 3. main.cpp: 테스트
// dayOfYear형 객체 2개를 선언하고 
// 입력연산자를 이용해서 표준스트림으로 입력, 출력연산자를 이용해서 표준스트림으로 출력
// 두번째 객체에 전위증가연산자 적용한 것을 표준스트림으로 출력
// 두번째 객체에 후위증가연산자 적용한 것을 표준스트림으로 출력
// 두번째 객체를 표준스트림으로 출력

int main()
{
using namespace KwonMinSung2693018;
    dayOfYear d1;
    std::cin >> d1; std::cout << d1;
    dayOfYear d2;
    std::cin >> d2; std::cout << d2;

    std::cout << ++d2;
    std::cout << d2++;
    std::cout << d2;

// 두 객체를 비교연산자를 이용하여 비교하여 true면 same, 
// 그렇지 않으면 different를 표준스트림으로 출력
// 두 객체를 +이항연산자를 이용하여 더한 값을 표준스트림으로 출력
    if ( d1 == d2 ) std::cout << "same\n";
    else std::cout << "different\n";

    std::cout << d1+d2;

    return 0;
}