#pragma once
#include <iostream>
#include "dayOfYear.h"
// 3.. holiday.h : 클래스2 정의
namespace KwonMinSung2693018
{
class holiday
{
// 1의 본인이름학번의 네임스페이스 안에 클래스2를 정의하고 멤버함수들도 모두 인라인으로 구현합니다. 
// private 멤버변수 선언: 클래스1형 객체, 그 외 멤버변수 1개 이상
private:
    dayOfYear date{};
    bool parkingEnforcement{};
    
// public 멤버함수 인라인으로 정의
// -생성자: 모든 멤버변수 초기화, 기본값 설정
// -print: 표준스트림출력으로 멤버변수들 출력
// -클래스1형 객체의 접근함수를 참조형식으로 구현
public:
    holiday(dayOfYear d = dayOfYear{1,1}, bool p = false) : date{d}, parkingEnforcement{p}
    {}

    void print() const
    {
        date.print();
        if (parkingEnforcement) std::cout << "Parking laws will be enforce.\n";
        else std::cout << "Parking laws will not be enforce.\n";
    }

    void setDate(dayOfYear& d) {date = d;}
    const dayOfYear& getDate() const {return date;}
    
};

}