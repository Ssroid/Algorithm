#define _CRT_SECURE_NOWARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void) {
	
	int T;
	int i;
	
	scanf("%d", &T);
	for(i=0;i<T;i++) {
		int x1, y1, r1, x2, y2, r2;
		scanf("%d %d %d %d %d %d", &x1, &y1, &r1, &x2, &y2, &r2);
		int d = x2-x1;
		int h = y2-y1;
		int R = r1+r2;
		d = pow(d,2);
		h = pow(h,2);
		R = pow(R,2);
		if(d==0 && h==0) {
			if(r1==r2) printf("-1\n");
			else printf("0\n");
		}
		else {
			if(d+h>R) printf("0\n");
			else if(d+h==R) printf("1\n");
			else { 
				int sr = r2-r1; 
				sr = pow(sr,2); 
				if(sr==d+h) printf("1\n"); //내접했을떄도 생각해야함.
				else if(sr>d+h) printf("0\n"); //내접했을떄도 생각해야함.
				else printf("2\n"); //서로 밖에 있을때. 
			}
		}
	}
	
	return 0;
}
