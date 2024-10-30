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
void hourstoseconds(int hours);

int main() {
	hourstoseconds(1);
}

void hourstoseconds(int hours) {
	cout << hours * 60 * 60 << endl; 
}

//5) Write a function named findMax that takes three integer parameters and returns the largest of the three.
#include<iostream>
using namespace std;
void findmax(int a, int b, int c);
int main() {
	findmax(2, 7, 3);
}

void findmax(int a, int b, int c) {
	if ((a > c) && (a > b)) {
		cout << a << endl;
	}
	if ((b > a) && (b > c)) {
		cout << b << endl;
	}
	if ((c > a) && (c > b)) {
		cout << c << endl;
	}
}
