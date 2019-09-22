#define _USE_Defines
#include<math.h>
#include <locale.h>
int main() {
	int x1, y1, x2, y2, x3, y3;
	int P, p, S, A, B, C;
	setlocale(LC_ALL, "RUS");
	printf("Введите первую координату");
	scanf_s("%d,%d",&x1,&y1);
	printf("Введите вторую координату");
	scanf_s("%d,%d",&x2,&y2);
	printf("Введите третью координату");
	scanf_s("%d,%d", &x3, &y3);
	A = sqrt(pow(x2 - x1) + pow(y2 - y1));
	B = sqrt(pow(x3 - x2) + pow(y3 - y2));
	C = sqrt(pow(x1 - x3) + pow(y1 - y3));
	P = A + B + C;
	p = P / 2;
	S = sqrt(p(p - A) * (p - B) * (p - C));
	printf("Пиримитр равен: %d", P);
	printf("Площадь равна:%d", S);
    _getch();
   return 0;
}
