//1) Write a function named drawBox that prints a 5x5 box of asterisks * to the console using nested for loops.
#include<iostream>
using namespace std;
void drawbox(int length, int width);

int main() {
	drawbox(10,20);
	drawbox(15, 5);
}

void drawbox(int length, int width) {
	for (int i = 0; i < length; i++) {
		for (int j = 0; j < width; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

//2) Write a function named printName that takes a string parameter name and prints "Hello, [name]!".
#include<iostream>
using namespace std;
void printName(string name);

int main() {
	printName("Jose");
}
void printName(string name) {
	cout << "Hello " << name << endl;
}

//3) Write a function named drawLine that takes an integer parameter length and prints a line of dashes - of that length.
#include<iostream>
using namespace std;
void DrawLine(int length);
int main() {
	DrawLine(60);
}
void DrawLine(int length) {
	for (int i = 0; i < length; i++)
		cout << "-";
}

//4) Write a function named hoursToSeconds that takes an integer parameter hours and returns the equivalent number of seconds.
#include<iostream>
using namespace std;
int hourstoseconds(int hours);

int main() {
	hourstoseconds(2);
	cout << hourstoseconds(2) << endl;
}

int hourstoseconds(int hours) {
	return hours * 60 * 60;
}

//5) Write a function named findMax that takes three integer parameters and returns the largest of the three.
#include<iostream>
using namespace std;
int findmax(int a, int b, int c);
int main() {
	findmax(2, 7, 3);
	cout << findmax(2, 7, 3) << endl;
}

int findmax(int a, int b, int c) {
	if ((a > c) && (a > b)) {
		return a;
	}
	if ((b > a) && (b > c)) {
		return b;
	}
	if ((c > a) && (c > b)) {
		return c;
	}
}
