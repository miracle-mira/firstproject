

#include <stdio.h>

int main()
{
    int i;       //정수형 변수 i 선언
    int *ptr;    //정수형 포인터 변수 ptr 선언
    int **dptr;  //정수형 이중포인터 변수 dptr 선언

    i = 1234;    //변수 i에 정수값 1234 대입


    printf("\n\n[----- [박미라] [2020069006] -----]\n\n");


    printf("[checking values before ptr = &i] \n");
    printf("value of i == %d\n", i);                 //변수 i에 저장되어있는 값 출력: 1234
    printf("address of i == %p\n", &i);              //변수 i가 저장되어 있는 메모리 주소값 출력
    printf("value of ptr == %p\n", ptr);             //변수 ptr에 저장되어 있는 값 출력: ptr을 초기화 하지 않았기 때문에 쓰레기값이 저장되어있음.
    printf("address of ptr == %p\n", &ptr);          //변수 ptr이 저장되어 있는 메모리 주소값 출력


    ptr = &i; //포인터 변수 ptr에 변수 i의 주소값을 대입함.
    printf("\n[checking values after ptr = &i] \n");
    printf("value of i == %d\n", i);                 //변수 i에 저장되어있는 값 출력: 이전과 동일하게 1234
    printf("address of i == %p\n", &i);              //변수 i가 저장되어 있는 메모리 주소값 출력: 이전과 동일함
    printf("value of ptr == %p\n", ptr);             //변수 ptr에 저장되어 있는 값 출력: ptr에 i의 주소값을 대입했기 때문에, i의 주소값이 출력됨.
    printf("address of ptr == %p\n", &ptr);          //변수 ptr이 저장되어 있는 메모리 주소값 출력: 이전과 동일함
    printf("value of *ptr == %d\n", *ptr);           //변수 ptr에 저장되어 있는 주소값이 가리키는 값 출력: ptr의 값은 i의 주소이고, 그 주소가 가리키는 것은 i에 저장되어 있는 값이므로 i의 값 1234가 출력됨.


    dptr = &ptr; //이중포인터 변수 dptr에 포인터변수 ptr의 주소값을 대입함.
    printf("\n[checking values after dptr = &ptr] \n");
    printf("value of i == %d\n", i);                 //변수 i에 저장되어있는 값 출력: 이전과 동일하게 1234
    printf("address of i == %p\n", &i);              //변수 i가 저장되어 있는 메모리 주소값 출력: 이전과 동일함
    printf("value of ptr == %p\n", ptr);             //변수 ptr에 저장되어 있는 값 출력: ptr에 i의 주소값을 대입했기 때문에, i의 주소값이 출력됨.
    printf("address of ptr == %p\n", &ptr);          //변수 ptr이 저장되어 있는 메모리 주소값 출력: 이전과 동일함
    printf("value of *ptr == %d\n", *ptr);           //변수 ptr에 저장되어 있는 주소값이 가리키는 값 출력: ptr의 값은 i의 주소이고, 그 주소가 가리키는 것은 i에 저장되어 있는 값이므로 i의 값 1234가 출력됨.
    printf("value of dptr == %p\n", dptr);           //변수 dptr에 저장되어 있는 값 출력: dptr에 ptr의 주소값을 대입했기 때문에, ptr의 주소값이 출력됨.
    printf("address of dptr == %p\n", &dptr);        //변수 dptr이 저장되어 있는 메모리 주소값 출력
    printf("value of *dptr == %p\n", *dptr);         //변수 dptr에 저장되어 있는 주소값이 가리키는 값 출력: dptr의 값은 ptr의 주소이고, 
                                                     //그 주소가 가리키는 것은 ptr에 저장되어 있는 값이므로 ptr에 저장되어 있는 i의 주소값이 출력됨.
    printf("value of **dptr == %d\n", **dptr);       //변수 dptr에 저장되어 있는 주소값이 가리키는 값에서 그 값 또한 주소값이므로 그 주소값이 가리키는 값을 출력함
                                                     //즉, dptr에 저장되어 있는 ptr 주소값이 가리키는 값은 i의 주소값이고, 그 i의 주소값이 가리키는 값은 i의 값이므로 1234가 출력됨.


    *ptr = 7777; //변수 ptr에 저장되어 있는 주소값이 가리키는 값(i의 값)을 1234에서 7777로 변경함.
    printf("\n[after *ptr = 7777] \n");
    printf("value of i == %d\n", i);               //*ptr로 i의 값이 7777로 바뀌었기 때문에 i는 7777이 출력됨.
    printf("value of *ptr == %d\n", *ptr);         //*ptr로 i의 값이 7777로 바뀌었다. *ptr은 ptr에 저장된 주소값(i의 주소값)이 가리키는 값이기 때문에 7777이 출력됨.
    printf("value of **dptr == %d\n", **dptr);     //*ptr로 i의 값이 7777로 바뀌었다. 
                                                   //**dptr은 dptr에 저장되어 있는 ptr 주소값이 가리키는 값은 i의 주소값이고, 그 i의 주소값이 가리키는 값은 i의 값이므로 7777이 출력됨. 


    **dptr = 8888; //변수 dptr에 저장되어 있는 주소값이 가리키는 값(ptr의 주소)이 가리키는 값(i의 값)을 7777에서 8888로 변경함. 
    printf("\n[after **dptr = 8888] \n");
    printf("value of i == %d\n", i);               //**dptr로 i의 값이 8888로 바뀌었기 때문에 i는 8888이 출력됨.
    printf("value of *ptr == %d\n", *ptr);         //**dptr로 i의 값이 8888로 바뀌었다. *ptr은 ptr에 저장된 주소값(i의 주소값)이 가리키는 값이기 때문에 8888이 출력됨.
    printf("value of **dptr == %d\n", **dptr);     //**dptr로 i의 값이 8888로 바뀌었다.
                                                   //때문에 **dptr은 dptr에 저장되어 있는 ptr 주소값이 가리키는 값은 i의 주소값이고, 그 i의 주소값이 가리키는 값은 i의 값이므로 8888이 출력됨. 

    return 0;
}