//
// 이 코드는 Rune system 을 구현하기 위해 
// Rune data 관리를 위한 코드입니다.
// 중복을 미연에 방지하기 위하여 unorderdMap 을 사용하였고
// Rune 의 추가나 보완을 쉽게 할 수 있도록 만들었습니다. 
// 

#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>
using namespace std;


// Item 을 정의한다..

typedef struct Item {

	int key;
	int damage;
	string name;

}Item;

// 아이템 목록을 전역변수로 설정한다.
vector<Item> itemList;

// 아이템 목록에 데이터를 특정 추가한다.
void MakeItem1() {

	Item item1;

	item1.key = 1;
	item1.damage = 100;
	item1.name = "RUNE_A";

	itemList.push_back(item1);
}

// 아이템 목록을 출력한다. 
void printMyItem() {

	for (vector<Item>::iterator it = itemList.begin(); it != itemList.end(); ++it)
	{
		cout << "You have :" << (*it).name << endl;
	}
}

// 입력값이 타당하다면 아이템을 생성한다. 
void ValidateItem(int a,int b, int c)
{
	if (a == 1 && b == 2, c == 4)
	{
		MakeItem1();
		cout << "Congratulation! You successfully make Item1 !! " << endl;
	}
	else {
		cout << " Sorry. fail to make Item" << endl;
	}

}

int main()
{
	// 현재 가지고 있는 아이템을 보여준다. empty
	printMyItem();

	// 아이템 조합
	int a, b, c;
	cout << "조합할 아이템을 입력하세요" << endl;

	cin >> a >> b >> c;

	// 입력값이 타당한지 확인
	ValidateItem(a, b, c);

	// 현재 가지고 있는 아이템 표시 
	printMyItem();

	/*cout << "add" << endl;
	MakeItem1();
	MakeItem1();
	printMyItem();*/







}
