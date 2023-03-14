/*
[----- [박미라] [2020069006] -----]
*/

#include <stdio.h>
int main()
{
    char charType;      //문자형 변수 charType 선언
    int integerType = 1;    //정수형 변수 integerType 선언
    float floatType;    //실수형 변수 floatType 선언
    double doubleType;  //더블형 변수 doubleType 선언

    printf("%d\n",integerType+1);
    printf("%d\n",integerType);

    //변수의 크기 선언
    printf("Size of char: %ld byte\n",sizeof(charType));         //charType 변수의 크기 출력: char형으로 선언했기 때문에 1byte
    printf("Size of int: %ld bytes\n",sizeof(integerType));      //integerType 변수의 크기 출력: int형으로 선언했기 때문에 4byte
    printf("Size of float: %ld bytes\n",sizeof(floatType));      //floatType 변수의 크기 출력: float형으로 선언했기 때문에 4byte
    printf("Size of double: %ld bytes\n",sizeof(doubleType));    //doubleType 변수의 크기 출력: double형으로 선언했기 때문에 8byte

    printf("-----------------------------------------\n");       //단순 구분선

    //자료형 크기 선언
    printf("Size of char: %ld byte\n",sizeof(char));             //char 자료형의 크기 출력: 1byte
    printf("Size of int: %ld bytes\n",sizeof(int));              //int 자료형의 크기 출력: 4byte
    printf("Size of float: %ld bytes\n",sizeof(float));          //float 자료형의 크기 출력: 4byte
    printf("Size of double: %ld bytes\n",sizeof(double));        //double 자료형의 크기 출력: 8byte

    printf("-----------------------------------------\n");       //단순 구분선

    /*
    각 자료형의 포인터 크기 선언: 
    포인터는 주소를 저장하는 변수이기 때문에 사실상 포인터 자체의 크기는 64bit 기준, 8byte로 동일하다.
    그러나 자료형을 붙여 포인터를 선언하는 이유는 포인터가 가리키는 대상을 확실하게 함으로써 프로그래밍 실수를 예방하기 위해서이다. 
    */
    printf("Size of char*: %ld byte\n",sizeof(char*));        //문자형 포인터이지만 주소를 나타내기 때문에 8byte
    printf("Size of int*: %ld bytes\n",sizeof(int*));         //정수형 포인터이지만 주소를 나타내기 때문에 8byte
    printf("Size of float*: %ld bytes\n",sizeof(float*));     //실수형 포인터이지만 주소를 나타내기 때문에 8byte
    printf("Size of double*: %ld bytes\n",sizeof(double*));   //더블형 포인터이지만 주소를 나타내기 때문에 8byte


    return 0;  //함수종료
}