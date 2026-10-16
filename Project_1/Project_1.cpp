#include <stdio.h>  //or #include <cstdio>

int main() {

	//...

	int a, b, res;
	float k, m;

	//...

	printf("Hello world!");
	printf("Variable a value is %i", a);
	printf("Variable k value is %f", k);
	printf("Variable m value is %.3f", m);
	printf("%i + %i = %i", a, b, res);


	//...

	return 0;
}

----------------------------------------------------------------------------------------------------

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	//...

	int a = 10, b = 20, res = 0;
	float k = 3.14f, m = 5.25f;

	//...

	res = a + b;

	//...

	cout << "Hello World!";
	cout << "Variable a value is" << a;
	cout << "Variable k value is" << k;
	cout << "Variable m value is" << fixed << setprecision(3) << m;
	cout << a << " + " << b << " = " << res;

	//...

	return 0;

}

----------------------------------------------------------------------------------------------------

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h> // or #include <cstdio>

int main() {

	//...

	int a, b, c;
	float k;

	//...

	scanf("%i", &a);
	scanf("%f", &k);
	scanf("%i%i", &b, &c);

	//...

	return 0;

}

----------------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

int main() {

	//...

	int a, b, c;
	float k;

	//...

	cin >> a;
	cin >> k;
	cin >> b >> c;

	//...

	return 0;

}


