#include <bangtal.h>
#include<time.h>
using namespace bangtal;

int main() {

	setGameOption(GameOption::GAME_OPTION_INVENTORY_BUTTON, false);
	setGameOption(GameOption::GAME_OPTION_MESSAGE_BOX_BUTTON, false);
	
	auto scene1 = Scene::create("슬라이드게임", "Images/첫번째.png");
	auto scene2 = Scene::create("슬라이드게임", "Images/두번째.png");

	auto sb = Object::create("Images/start.png", scene1, 600, 150);
	
	srand((unsigned int)time(0));

	int iNumber[9] = {};

	for (int i = 0; i < 9; i++) {
		iNumber[i] = i + 1;
	}

	iNumber[9] = INT_MAX;

	int iTemp, idx1, idx2;

	for (int i = 0; i < 100; i++) {
		idx1 = rand() % 8;
		idx2



	int inpN;
	int inpC;
	int number = 1;

	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			re[3][3] = number;
			number++;
		}
	}
	re[3][3] = 0;

	for (int i = 0; i < 100; i++) {
		int dest1 = rand() % 3;
		int sour1 = rand() % 3; 
		int dest2 = rand() % 3; 
		int sour2 = rand() % 3;

		int temp = re[dest1][sour1];
		re[dest1][sour1] = re[dest1][sour2]; 
		re[dest1][sour2]  = re[dest2][sour1]; 
		re[dest2][sour1] = re[dest2][sour2]; 
		re[dest2][sour2] = temp;

	for (x = 350; x < 727; x = +180) {
		for (y = 450; y < 73; y = -180) {
			re[3][3] = re[x][y];
		}
	}

	//printf("%d %d", re[x][y]);

	auto pu1 = Object::create("Images/그림1.png", scene2, 350, 450);
	pl1->setOnMouseCallback([&])
	auto pu2 = Object::create("Images/그림2.png", scene2, 350+188, 450);
	//auto pu3 = Object::create("Images/그림3.png", scene2, x, y);
	//auto pu4 = Object::create("Images/그림4.png", scene2, x, y);
	//auto pu5 = Object::create("Images/그림5.png", scene2, x, y);
	//auto pu6 = Object::create("Images/그림6.png", scene2, x, y);
	//auto pu7 = Object::create("Images/그림7.png", scene2, x, y);
	//auto pu8 = Object::create("Images/그림8.png", scene2, x, y);
	//auto pu9 = Object::create("Images/그림9.png", scene2, x, y);
	
	sb->setOnMouseCallback([&](ObjectPtr object, int x, int y, MouseAction action)->bool{
		scene2->enter();
		return true;
		});

	//srand((unsigned int)time(0));

	startGame(scene1);

	return 0;

}