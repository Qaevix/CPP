// Example 1_1 (using scanf/printf for intput/output):

#include <stdio.h>
#include <conio.h>

int main() {

	int circleRadius, squareSide, squareArea;
	float circleArea;

	printf("Enter circle radius: ");
	scanf("%", &circleRadius);

	printf("Enter square side lenght: ");
	scanf("%i", &squareSide);

	circleArea = 3.14 * circleRadius * circleRadius;

	squareArea = squareSide * squareSide;

	if (circlArea > squareArea)						//equality is not being checked

		printf("Area of circle is greater \n\n");

	else

		printf("Area of square is greater\n\n");

	getch()

		return 0;

}

------------------------------------------------------------------------------------------------------------------------------------------

// Example 1_2 (using cin/out for input/output):

#include <iostream>

int main() {

	int circleRadius, squareSide, squareArea;
	float circleArea;

	cout << "Enter circle radius: ";
	cin >> circleRadius;

	cout << "Enter square side lenght: ";
	cin >> squareSide;

	circleArea = 3.14 * circleRadius * circleRadius;
	squareArea = squareSide * squareSide;

	if (circleArea > squareArea)

		cout << "Area of circle is greater\n\n";

	else

		cout << "Area of square is greater\n\n";

	system("pause");
	
	return 0;

}

------------------------------------------------------------------------------------------------------------------------------------------

// Example 2_1 (using scanf/printf for input/output):

