# commit conventions

Commit Convention 이란 Git에서 commit을 할 때 적는 메세지에 일관성을 줘서 특정한 포맷으로 작성하는 것을 말한다.

이는 협업 뿐만 아니라 개인적으로 사용하는 Git에서도 log 수가 늘어날수록 확연히 알아보기 편하기에  
훌륭한 log 관리 방법론이라 생각한다.

다만 의문점이 있다면 보통 [Udacity의 커밋 메시지스타일](https://udacity.github.io/git-styleguide/)을 따르는데,  
물론 효율적이고 좋은 기준점이라는 것은 알겠으나, 무지성으로 따라해야하는 이유는 찾지 못하겠다.

일단 현재시제로 적어야하는 이유부터가 불분명하다.  
원문 기준 "Use an Imperative tone" 이라는데, 그 이유는 딱히 안나와있다.  
imperative하든 말든 -ed 두 글자 더 붙는다고 그렇게까지 크게 꼴보기 싫어지는가?  
내 결론은 "아니다"이다.

근데 또 왜 굳이 이 악물고 안 따르냐고 묻는다면,  
Github 화면에서 USER\_NAME 뭐뭐ed blabla 라고 출력되는 것이 뭔가 보기 편해서 그렇다고 대답하겠다.  
Udacity도 이유를 밝히지 않았듯, 나도 지극히 개인적인 이유다.

암튼 뭐 시간이 지나면 필요에 의해 그룹의 컨벤션을 따를테고,  
개인 컨벤션도 결국엔 수정되겠지만 일단 0.1버전은 이러하다.

```
### chujoshi convention ###

head - body - number

<head>
파일 및 디렉토리 생성 == Added
내용 수정 == Updated
삭제 == Deleted
</head>

<body>
세부 내용(head에서 건드린 내용의 경로 포함) | 중복된 내용일 시 숫자로 기록(주의 #를 사용하지 말 것)
</body>

<number>
#번호 기록
</number>
```
