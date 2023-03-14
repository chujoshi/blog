# 포인터와 배열의 차이

포인터와 배열은 모두 c언어에서 지원하는 자료형이다.   
예시를 보면서 설명을 이어나가겠다.

예시 코드
```c
char arr[] = "where is jontonde";
char *ptr = arr;

printf("arr의 길이 : %ld | arr의 크기 : %ld | arr의 주소값 : %p | arr의 값 : %s", strlen(arr), sizeof(arr), &arr, arr);
printf("arr[0]의 주소값 : %p | arr[0]의 값 : %c\n", &arr[0], arr[0]);
printf("ptr의 길이 : %ld | ptr의 크기 : %ld | ptr의 주소값 : %p | ptr의 값 : %s", strlen(ptr), sizeof(ptr), &ptr, ptr);
printf("ptr[0]의 주소값 : %p | ptr[0]의 값 : %c\n", &ptr[0], ptr[0]);
```

출력값
```
arr의 길이 : 17 | arr의 크기 : 18 | arr의 주소값 : 0x7ffffcf0ad60 | arr의 값 : where is jontonde
arr[0]의 주소값 : 0x7ffffcf0ad60 | arr[0]의 값 : w
ptr의 길이 : 17 | ptr의 크기 : 8 | ptr의 주소값 : 0x7ffffcf0ad58 | ptr의 값 : where is jontonde
ptr[0]의 주소값 : 0x7ffffcf0ad60 | ptr[0]의 값 : w
```

우선 arr부터 살펴보자.   
보다시피 배열 arr는 arr의 첫 원소의 주소값을 가지고 있다.

c언어에서 배열은 연속적인 메모리를 할당받기 때문에 w 후의 문자들은 각각 0x7ffffcf0ad61, 0x7ffffcf0ad62, 0x7ffffcf0ad63 ... 를 할당받게 된다.

그렇기 때문에 포인터 변수 또한 각 주소를 이동하며 배열처럼 활용할 수 있는 것이다.

---

그렇다면 차이점은 무엇일까

```
arr의 길이 : 17 | arr의 크기 : 18 | arr의 주소값 : 0x7ffffcf0ad60 | arr의 값 : where is jontonde
ptr의 길이 : 17 | ptr의 크기 : 8 | ptr의 주소값 : 0x7ffffcf0ad58 | ptr의 값 : where is jontonde
```

이곳을 보면 차이점이 두 군데 보이는데 크기와 주소값이다.

분명 ptr = arr으로 초기화한 ptr은 arr과 다른 주소값을 가지고 있다.   
ptr의 주소값은 'arr의 첫 원소의 주소값을 가리키고 있는 포인터'가 저장되어 있는 메모리주소이기 때문이다.

그렇다면 arr도 첫 원소의 주소값을 가지고 있다고 했는데 어째서 ptr처럼 따로 주소가 없는 것일까?

이는 처음에 언급했듯이 배열 자체가 통째로 자료형이기 때문이다.   
arr이라는 변수는 단순히 arr[0]의 주소를 가지고 있는 포인터가 아니라, 배열이라는 자료형을 대표하고 있다.   
이 때문에 각 크기를 보면 arr은 18이고, ptr은 8인데,

arr은 char 자료형의 크기인 1바이트를 문자열을 종료하는 null문자까지 포함해 18바이트의 크기를 가진 변수가 되는 것이고,

ptr은 그저 그 배열의 첫 원소의 주소값을 가지고 있는 포인터로서 포인터 자료형의 크기인 8바이트만 차지하게 되는 것이다.

번외로 포인터의 크기는 32비트 운영체제에서는 4바이트고 64비트 운영체제에서는 8바이트라고 한다 O_O!
