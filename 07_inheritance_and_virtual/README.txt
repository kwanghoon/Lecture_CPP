
 
상속 (첫번째 주제)
- 교재 슬라이드
- 강의 슬라이드

http://swlab.jnu.ac.kr/wordpress/2016/10/30/cpp-inheritnace1/



9장 가상함수와 추상클래스

 - 교재 슬라이드

 - 강의 슬라이드

 - 메모 : http://swlab.jnu.ac.kr/wordpress/2016/10/30/cpp-inheritance2/


=======

[HOMEWORK]

[과제] 텍스트기반 롤플레잉 게임

 - 첨부 PDF 파일을 참고

 - main.cpp 파일 참고


[ 상속과 virtual 함수 활용하는 프로젝트 ]

- 공유자료실의 롤플레임 게임 문제를 확장하여 작성한다.

- 게임 보드 5x5

- 게임 시작하면 캐릭터 Human, Cyberdemon, Balrog, Elf를 각각 하나씩 배치한다.

- Creature 클래스를 상속받아 각 캐릭터를 표현하는 클래스를 만든다.

- Creature 클래스의 멤버 변수로 보드에서 캐릭터의 위치를 나타내는 int x, y를 추가 포함한다.

- 보드에 Potion of hitpoints와 Potion of strength를 각각 1개씩 배치한다.

- 게임 진행 과정은 Human의 hitpoints가 0이 되거나
  3가지 괴물 캐릭터의 hitpoints가 모두 0이 될 때까지 아래 과정을 반복한다.

    1) 이동 방향 left(왼쪽), down(아래), up(위), right(오른쪽), stay(그자리에 머무르기)을 입력 받아
       Human을 한 칸 이동

    2) Cyberdemon, Balrog, Elf는 랜덤으로 상하좌우 한 칸씩 이동하거나 그 자리에서 머무른다.

    3) Human과 Cyberdemon, Balrog, Elf가 동일한 x,y 위치에 이르면 getDamage() 함수로 서로 공격

       (이때 Human은 Cyberdemon, balrog, Elf를 공격하고, Cyberdemon, balrog, Elf는 서로 공격하지 않는다.)

       (Human의 x,y 위치에 Cyberdemon, balrog, Elf가 둘 이상 같이 있을 경우 Human과 각 creature와 쌍을 이루어 서로 공격한다.)

    4) Human 캐릭터가 Potion이 위치한 곳을 이동하면 Potion 종류에 따라 health 또는 hitpoint를 증가시킨다.

    5) getDamage()를 실행할하거나, potion으로 heath, hitpoint를 증가시킬 때 간단한 한 줄 메시지를 출력한다.

[보너스 점수: 게임 종료 전에 Human이 이겼는지 출력한 다음 전체 게임 진행 과정을 자동으로 Replay]

- 화면 출력 방법은 교재 9장 오픈챌린지 문제 (P.447)에서 설명한 방법과 유사하게 참고하세요.

[ 주의 사항 ]

1) virtual 멤버 함수와 다형성을 활용하여 나중에 새로운 괴물 캐릭터를
  추가하더라도 동작하도록 프로그램을 작성하세요.

    [보너스 점수: 2) 자동 Replay 동작을 위해 클래스 상속을 활용하시오. ]

[ 제출 방법 ]

- 소스 코드, outcome.txt를 학번_이름.zip으로 묶어 업로드

  (실행 결과를 텍스트로 캡처해서 outcome.txt를 작성)
