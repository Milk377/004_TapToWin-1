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

// 아이템 이름, 아이템 번호 삽입
void InsertItem(string itemName, int itemNumber, unordered_map<string,int> *map)
{
	map->insert(pair<string, int>(itemName,itemNumber)) ;

}

void PrintUnorderedMap(unordered_map<string, int> * map)
{
	unordered_map<string, int>::iterator iter;

	for (iter = map->begin(); iter != map->end(); ++iter)
	{
		cout << (*iter).first << " , " << (*iter).second << endl;
	}
}

int main()
{

	unordered_map<string, int> RUNE_DATA;

	cout << "[SYSTEM] : Runeword data set up ..." << endl;

	InsertItem("RUNE_A", 1, &RUNE_DATA);
	InsertItem("RUNE_B", 2, &RUNE_DATA);
	InsertItem("RUNE_C", 3, &RUNE_DATA);
	InsertItem("RUNE_D", 4, &RUNE_DATA);
	InsertItem("RUNE_E", 5, &RUNE_DATA);

	cout << "[SYSTEM] : Runeword data set complete. " << endl;


	PrintUnorderedMap(&RUNE_DATA);




	
	




}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
