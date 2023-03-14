#include <stdio.h>

int main()
{
    int i, *p; //값을 저장할 변수(i)와 주소값을 저장할 변수(p,포인터) 선언

    i = 10;    //상수 10을 변수 i에 저장

    printf("value of i = %d\n", i);      //변수 i에 저장된 값 출력
    printf("address of i = %p\n", &i);   //변수 i가 저장된 메모리의 주소값 출력
    printf("value of p = %p\n", p);     
    /*
    포인터 변수 p에 저장된 값 출력
    그런데 이때 p에 어떤 주소값도 저장하지 않았기 때문에(초기화하지 않았기 때문에) 쓰레기값이 저장되어있음.
    그러므로 p에 어떤 주소값을 넣어야함.
    */
    printf("address of p = %p\n", &p);   //포인터 변수 p가 저장된 메모리의 주소값 출력
    


    p = &i;
    /*
    포인터 변수 p에 저장된 값 출력
    전과 달리 이번에는 포인터변수 p에 변수 i의 주소값을 저장했기 때문에 정상적인 값(i의 주소값이)이 저장되었음을 알 수 있음.
    */
    printf("\n\n----- after p = &i ------------\n\n");  //단순 출력문

    printf("value of p = %p\n", p);            //포인터 변수 p에 저장된 값 출력: i의 주소값이 저장됨을 알 수 있음.
    printf("address of p = %p\n", &p);         //포인터 변수 p가 저장된 메모리의 주소값 출력
    printf("dereferencing *p = %d\n\n", *p);   
    //포인터 변수 p에 저장된 주소값(i의 주소값)이 가리키는 변수(i)에 저장된 값을 출력함 =  i에 저장된 값, 10을 의미함.

    return 0;
}
