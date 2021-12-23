#include <iostream>
#include <clocale>
#include <cassert>

#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

float ariph(float a, float b)
{
	return (a + b) / 2;
}

float geom(float a, float b)
{
	return sqrt(a * b);
}

int main()
{
	setlocale(LC_ALL, "Rus");

	assert(fabs(ariph(2, 3) - 2.5) < FLT_EPSILON);
	
	assert(fabs(geom(2, 3) - 2.44949) < FLT_EPSILON * 1000);
	
	assert(fabs(ariph(4, 6) - 5) < FLT_EPSILON);

	float a, b;
	cout << "������� a: ";
	cin >> a;
	cout << "������� b: ";
	cin >> b;
	//cout << "������� �������������� ������ �����: " << ariph(a, b) << endl;
	//cout << "������� �������������� ������ �����: " << geom(a, b) << endl;

	return 0;
}